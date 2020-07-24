# SHIFTOUT

SHIFTOUT

An Embedded C driver function for 74HC595 Shift Register.

Author  : Prasanth K Subash (kksjunior)

Email   : kksjunior@hotmail.com

Website : www.kksjunior.me

Date    : Jul. 24, 2020

Version : 1.0


Dependencies : stdint.h

Execution Profiling done using Keil MDK 5 Simulator.

MCU : NXP Kinetis MKE04Z128

Execution Time : 0.417 us


About:

If you've found this repository, you might probably know about the 74HC595 shift register and maybe you're looking for some drivers.
If yes, skip the readme and goto the code, everything you need is in the comments.

If you're a beginner read on to get a basic idea about the 74HC595 and this library.

The 74HC595 consists of an 8−bit shift register and an 8−bit D−type latch with three−state parallel outputs. 
The shift register accepts serial data and provides a serial output. 
The shift register also provides parallel data to the 8−bit latch. 
The shift register and latch have independent clock inputs. 
This device also has an asynchronous reset for the shift register.

More about the shift register here: https://lastminuteengineers.com/74hc595-shift-register-arduino-tutorial/

Datasheet of the OnSemi Part : https://www.onsemi.com/pub/Collateral/MC74HC595-D.PDF

Just copy the Files 1 & 2 mentioned below to your project and follow the instructions. Make sure you add 'stdint.h' to avoid dependency issues.

Files:

1. shiftout.h

This header has the macros and function declarations. Include this in your code.

Line No: 49

#define SR_SIZE     16

Define the size of your shift register here if it's daisy chained. By default I'm using 16.

Line No: 51

From line 51, I've given space for your GPIO Pin configurations.
Define the macros required to set and clear the respective pins of the shift register.

for eg: in NXP Kinetis KE04

#define SET_SCLK             SET_PORT_BIT(GPIOB->PSOR,11)
#define CLEAR_SCLK           SET_PORT_BIT(GPIOB->PCOR,11)

define pins acccording to your MCU and configuration.

2. shiftout.c

This C file has the function to shiftout serial data in to the shift register.
It also contains a 'no-operation' software delay for reliability. You are free to optimize the delay.

Usage:

Just pass your serial data to the function and it will output through the shift register.

shiftout(my_serial_data);

3. sample_code.c

sample code demonstrating usage of the function.




