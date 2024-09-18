#ifndef PID_H
#define PID_H
#include "main.h"
typedef struct
{
   	float kp, ki, kd; //����ϵ��
    float error, lastError; //���ϴ����
    float integral, maxIntegral; //���֡������޷�
    float output, maxOutput; //���������޷�
}PID;
void usepid(int feedback,int target,PID * pid);

#endif