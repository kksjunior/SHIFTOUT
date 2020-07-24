/***************************************************************************
*
* This sample code shows setting the 'n'th bit of a shift register.
* Sample value for n = 12.
* Default Shift register size = 16
*
****************************************************************************/

#include "shiftout.h"

uint16_t BITS = 0x0000;

int main(void){
    CLEAR_SOEL;         // clear Output Enable
    SET_SMRL;           // Set Master Reset
    int n = 12;         // 'n'th bit
    BITS = 1UL<<n;      // Set the 'n'th bit of the function payload.
    shiftout(BITS);     // Pass the payload to the function.
}