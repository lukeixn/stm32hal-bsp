
#ifndef _STM32FLASH_H
#define _STM32FLASH_H
#include "main.h"

#include "OLED.h"
#define FLASH_SAVE_ADDR 0x08007000//32k  max 0x08007FF0  64k 0x0800FFE0
static FLASH_EraseInitTypeDef EraseInitStruct={
	
  .TypeErase=FLASH_TYPEERASE_PAGES,   /*!< TypeErase: Mass erase or page erase.
                             This parameter can be a value of @ref FLASHEx_Type_Erase */
  
        /*!< Select banks to erase when Mass erase is enabled.
                             This parameter must be a value of @ref FLASHEx_Banks */    
  
  .PageAddress=FLASH_SAVE_ADDR, /*!< PageAdress: Initial FLASH page address to erase when mass erase is disabled
                             This parameter must be a number between Min_Data = 0x08000000 and Max_Data = FLASH_BANKx_END 
                             (x = 1 or 2 depending on devices)*/
  
  .NbPages=(uint32_t)1     

};
void load_flash_data(uint32_t data);


#endif