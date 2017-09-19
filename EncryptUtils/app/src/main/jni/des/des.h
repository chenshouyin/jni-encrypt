//
// Created by jun on 2015/12/20.
//

#ifndef MYAPPLICATION_DES_H
#define MYAPPLICATION_DES_H

#include <android/log.h>
#define TAG "Jinlin"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__) // 定义LOGD类型
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__) // 定义LOGI类型
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__) // 定义LOGF类型
void Des_edCryption(char input[8], char output[8], short mode);
void make_SubKey(char key[8]);
void arrayCryption(unsigned short * data64, short mode,char * out);
void Bit64ToByte(unsigned short data64[64], unsigned char out[8]);
void LoopF(unsigned short data64[64],short time,short flag);
void leftMoveKey(unsigned short keyarray[56], int offset);
void arrayCryption(unsigned short * data64, short mode,char * out);
void Bit64ToByte(unsigned short data64[64], unsigned char out[8]);
#endif
