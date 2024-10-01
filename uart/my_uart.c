#include "my_uart.h"
uint8_t b[5];
void send(uint8_t a[])
{
	
	HAL_UART_Transmit_IT(&uart,a,sizeof(a)/sizeof(char)-1);
	HAL_Delay(10);
}
void read(void)
{
	
	HAL_UART_Receive_IT(&uart,b,5);
}
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
	if (huart->Instance==UART)
	{
		send(b);
		HAL_UART_Receive_IT(&uart,b,5);
	}

}