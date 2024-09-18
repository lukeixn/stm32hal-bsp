#include "stm32flash.h"
void load_flash_data(uint32_t data)
{
	HAL_FLASH_Unlock();
	uint32_t PageError=0;
	__disable_irq();
	if(HAL_FLASHEx_Erase(&EraseInitStruct,&PageError)==HAL_OK)
	{
		//OLED_ShowString(4,1,"success_erase");
	}
	__enable_irq();
	uint32_t addr=FLASH_SAVE_ADDR;
	HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD,addr,data);
	HAL_FLASH_Lock();
}