/*
 * uart.h
 *
 * Created: 28/08/2020 18:00:07
 *  Author: Sai
 */ 


#ifndef UART_H_
#define UART_H_

#include <stdint.h>

void usart_init(uint32_t baudRate);
void usart_transmit_byte(char byte);
void usart_transmit_array(char data[3][16], int count);

#endif /* UART_H_ */