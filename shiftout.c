/*****************************************************************************
*
* KKSjunior
* www.kksjunior.me
* github.com/kksjunior
* kksjunior@hotmail.com
*
******************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY KKSJUNIOR "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL KKSJUNIOR OR THEIR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************
*
* @file shiftout.c
*
* @author Prasanth K Subash
*
* @version 1.0
*
* @date Jul. 24, 2020
*
* @brief Driver function for shift register 74HC595.
*
*******************************************************************************/
#include "shiftout.h"

void shiftout (uint32_t inp){           	

    CLEAR_SSTB;
    CLEAR_SCLK;
    CLEAR_SDAT;

    for(int k=0; k < SR_SIZE; k++){
        if(inp & 0x0001){
            SET_SDAT;
        }
        else{
            CLEAR_SDAT;
        }
        nopdelay (10);
        SET_SCLK;
        nopdelay(10);
        CLEAR_SCLK;
        inp = inp >> 1;
    }
    SET_SSTB;
    nopdelay(20);
    CLEAR_SSTB; 
}

void nopdelay(uint32_t count){                         
	uint32_t i;
    for(i=0;i<count;i++);
}
