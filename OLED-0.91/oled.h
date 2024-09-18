#ifndef __OLED_H
#define __OLED_H 


#include "stdlib.h"	
#include "gpio.h"
#include "stm32f1xx_hal.h"

//-----------------OLED端口定义---------------- 

#define OLED_SCL_Clr() HAL_GPIO_WritePin(SCL_GPIO_Port,SCL_Pin,(GPIO_PinState)0)//SCL
#define OLED_SCL_Set() HAL_GPIO_WritePin(SCL_GPIO_Port,SCL_Pin,(GPIO_PinState)1)

#define OLED_SDA_Clr() HAL_GPIO_WritePin(SDA_GPIO_Port,SDA_Pin,(GPIO_PinState)0)//DIN
#define OLED_SDA_Set() HAL_GPIO_WritePin(SDA_GPIO_Port,SDA_Pin,(GPIO_PinState)1)

#define OLED_RES_Clr() HAL_GPIO_WritePin(RES_GPIO_Port,RES_Pin,(GPIO_PinState)0)//RES
#define OLED_RES_Set() HAL_GPIO_WritePin(RES_GPIO_Port,RES_Pin,(GPIO_PinState)1)


#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据
#define u8 uint8_t
#define u32 uint32_t
#define u16 uint16_t
#define delay_ms(x)  HAL_Delay(x);
void OLED_ClearPoint(u8 x,u8 y);
void OLED_ColorTurn(u8 i);
void OLED_DisplayTurn(u8 i);
void I2C_Start(void);
void I2C_Stop(void);
void I2C_WaitAck(void);
void Send_Byte(u8 dat);
void OLED_WR_Byte(u8 dat,u8 mode);
void OLED_DisPlay_On(void);
void OLED_DisPlay_Off(void);
void OLED_Refresh(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_DrawLine(u8 x1,u8 y1,u8 x2,u8 y2,u8 mode);
void OLED_DrawCircle(u8 x,u8 y,u8 r);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size1,u8 mode);
void OLED_ShowChar6x8(u8 x,u8 y,u8 chr,u8 mode);
void OLED_ShowString(u8 x,u8 y,u8 *chr,u8 size1,u8 mode);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size1,u8 mode);
void OLED_ShowChinese(u8 x,u8 y,u8 num,u8 size1,u8 mode);
void OLED_ScrollDisplay(u8 num,u8 space,u8 mode);
void OLED_ShowPicture(u8 x,u8 y,u8 sizex,u8 sizey,u8 BMP[],u8 mode);
void OLED_Init(void);

#endif

