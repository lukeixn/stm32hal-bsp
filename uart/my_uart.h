#ifndef _MY_UART_H
#define _MY_UART_H
#include "main.h"
#include "usart.h"
#define uart  huart1
#define UART  USART1
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
void send(uint8_t a[]);
void read(void);
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart);



#endif