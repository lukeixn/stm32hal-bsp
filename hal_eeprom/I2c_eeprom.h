#ifndef I2C_EEPROM_H
#define I2C_EEPROM_H
#define ADDR_EEPROM 0xA0
#include "main.h"
#include "i2c.h"

extern uint32_t time;

void I2C_transdata( uint8_t Data);
void I2C_readdata( void);
#endif
