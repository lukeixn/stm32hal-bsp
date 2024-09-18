#include "num_transfer.h"
void print_num(int num)
{
	int temp;
	char send;
	int h[5];
	int p = 0;
	while (num != 0) {
		temp = num % 10;
		num = num / 10;
		h[p] = temp;
		p++;
	}
	for (int i = p - 1; i >= 0; i--)
	{
		send = (char)((int)'0' + h[i]);
		HAL_UART_Transmit(&huart2, (uint8_t*)&send, 1, 1);

	}
	send = '\n';
	HAL_UART_Transmit_DMA(&huart2, (uint8_t*)&send, 1);
}