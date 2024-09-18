#include "I2c_eeprom.h"
#include "OLED.h"
uint8_t data_w[]={4};
uint8_t data_r[]={0x10};

void I2C_transdata( uint8_t Data)
{
	//data_w[1]=Data;
	//HAL_I2C_Master_Transmit(&hi2c1,ADDR_EEPROM,data_w,sizeof(data_w)/sizeof(data_w),HAL_MAX_DELAY);
	if(HAL_I2C_Mem_Write(&hi2c1,ADDR_EEPROM,0,I2C_MEMADD_SIZE_8BIT,&Data,sizeof(data_w)/sizeof(data_w),HAL_MAX_DELAY)==HAL_OK)
	{
		//OLED_ShowString(4,4,"tok");
	}
	
}
void I2C_readdata( void)
{
	uint8_t temp=0;
	//HAL_I2C_Master_Transmit(&hi2c1,ADDR_EEPROM,data_r,sizeof(data_r)/sizeof(data_r),HAL_MAX_DELAY);
	//HAL_I2C_Mem_Write(&hi2c1,0xA0,0,I2C_MEMADD_SIZE_8BIT,data_r,sizeof(data_w)/sizeof(data_w),HAL_MAX_DELAY);
	
	if(HAL_I2C_Mem_Read(&hi2c1,ADDR_EEPROM,0,I2C_MEMADD_SIZE_8BIT,&temp,sizeof(data_w)/sizeof(data_w),HAL_MAX_DELAY)==HAL_OK)
	{
		//OLED_ShowString(4,7,"rok");
	}
	//HAL_I2C_Master_Receive(&hi2c1,ADDR_EEPROM,&temp,1,HAL_MAX_DELAY);
	time=temp;
	//OLED_ShowNum(4,1,temp,3);
}