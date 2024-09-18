#ifndef PID_H
#define PID_H
#include "main.h"
typedef struct
{
   	float kp, ki, kd; //三个系数
    float error, lastError; //误差、上次误差
    float integral, maxIntegral; //积分、积分限幅
    float output, maxOutput; //输出、输出限幅
}PID;
void usepid(int feedback,int target,PID * pid);

#endif