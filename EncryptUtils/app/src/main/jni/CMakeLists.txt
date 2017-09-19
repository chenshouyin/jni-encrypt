# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
             encrypt

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             #des
             des/com_jinlin_encryptutils_des_DES.h
             des/des.h
             des/des.c
             des/des_util.c
             #aes
             aes/aes.h
             aes/com_jinlin_encryptutils_aes_AES.h
             aes/aes_util.c
             aes/aes.c
              #MD5
                                            md5/md5.h
                                            md5/md5.c
                                            md5/md5_util.c
                                             #base64
                                                          base64/com_jinlin_encryptutils_base64_Base64.h
                                                         base64/base64.cpp
              )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       encrypt

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )