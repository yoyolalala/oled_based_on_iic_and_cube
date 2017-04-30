#ifndef __IIC_OLED_H
#define __IIC_OLED_H
#include "stm32f4xx_hal.h"


#define SCL_1 HAL_GPIO_WritePin(scl_GPIO_Port ,scl_Pin,GPIO_PIN_SET)         
#define SCL_0 HAL_GPIO_WritePin(scl_GPIO_Port ,scl_Pin,GPIO_PIN_RESET)     
#define SDA_1 HAL_GPIO_WritePin(sda_GPIO_Port ,sda_Pin,GPIO_PIN_SET) 
#define SDA_0 HAL_GPIO_WritePin(sda_GPIO_Port ,sda_Pin,GPIO_PIN_RESET)    

void delay(unsigned int z);

void OLED_WrDat(unsigned char IIC_Data);
void OLED_WrCmd(unsigned char IIC_Command);
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_Fill(unsigned char bmp_dat) ;
void OLED_CLS(void);
void OLED_Init(void);
void disnum(unsigned int num,unsigned char x, unsigned char y);
void OLED_P6x8Str(unsigned char x, unsigned char y, char ch[]);
void disfloat_num(unsigned char x, unsigned char y,float num);
int OLED_printf(uint8_t x,uint8_t y,const char *fmt, ...);
void OLED_ShowCN(unsigned char x, unsigned char y, unsigned char N);
void OLED_DrawBMP(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP[]);
void OLED_Show4CN(unsigned char x, unsigned char y);
#endif

