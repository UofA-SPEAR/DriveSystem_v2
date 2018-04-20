/*
 * atmega2560_config.h
 *
 * Created: 2018-04-20 11:20:39 AM
 *  Author: spear
 */ 


#ifndef ATMEGA2560_CONFIG_H_
#define ATMEGA2560_CONFIG_H_

 
/* CPU */

/*
 * Specifies the frequency that the MCU operates at
 */
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#define F_CLK_1024 F_CPU / 1024UL
#define F_CLK_256 F_CPU / 256UL
#define F_CLK_64 F_CPU / 64UL
#define F_CLK_8 F_CPU / 8UL

/* Timer */


/* Communications */
/*
 * USART interface
 */
#define USART0_RX_BUF				UDR0 // Read from
#define USART0_TX_BUF				UDR0 // Write to  

/* Motor Controls */

/*
 * Configure pin I/O direction registers and pins
 * Used for setting input or output direction of hardware pins
 */
#define LEFT_PWM_IO_REG				DDRB
#define LEFT_PWM_IO_PIN				DDB6
#define LEFT_DIR_IO_REG				DDRB
#define LEFT_DIR_IO_PIN				DDB4
#define RIGHT_PWM_IO_REG			DDRB
#define RIGHT_PWM_IO_PIN			DDB5
#define RIGHT_DIR_IO_REG			DDRB
#define RIGHT_DIR_IO_PIN			DDB7

/*
 * Configure registers used for controlling motor direction
 */
#define LEFT_DIR_REG				PORTB
#define LEFT_PWM_REG				PORTB
#define RIGHT_DIR_REG				PORTB
#define RIGHT_PWM_REG				PORTB

/*
 * Configure pins used for controlling motor direction
 */
#define LEFT_DIR_PIN			PORTB4
#define RIGHT_DIR_PIN			PORTB7

/*
 * Configure register used for controlling motor speed
 * These registers are the output compare registers used in PWM signals
 */
#define LEFT_PWM_LEVEL			OCR1B
#define LEFT_PWM_PIN			PORTB6
#define RIGHT_PWM_LEVEL			OCR1A
#define RIGHT_PWM_PIN			PORTB5

#define READ_REG_BIT(REG, BITNUM) ((REG & ( 0x1 << BITNUM)) >> BITNUM)


#endif /* ATMEGA2560_CONFIG_H_ */