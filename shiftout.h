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
* @file shiftout.h
*
* @author Prasanth K Subash
*
* @version 1.0
*
* @date Jul. 24, 2020
*
* @brief Macros and definitions for shiftout.c.
*
*******************************************************************************/

#ifndef SHIFTOUT_H__
#define SHIFTOUT_H__

/*------------------------------------------------------------------*
    Dependencies 
*-------------------------------------------------------------------*/

#include "stdint.h"

/*------------------------------------------------------------------*
    Macros 
*-------------------------------------------------------------------*/

#define SR_SIZE		16	/* Define the memory size of your shift register here - Default - 16 */

/*------------------------------------------------------------------*
    GPIO Pin configuration 
*-------------------------------------------------------------------*/

/* 
Shift Register Pin - 11
(SH_CP) Clock
*/

#define SET_SCLK             /* Macro to set SCLK */	
#define CLEAR_SCLK           /* Macro to clear SCLK */

/*
Shift Register Pin - 14
(DS) Serial Data
*/

#define SET_SDAT             /* Macro to set SDAT */
#define CLEAR_SDAT           /* Macro to clear SDAT */

/*
Shift Register Pin - 12
(ST_CP) Latch
*/

#define SET_SSTB             /* Macro to set SSTB */
#define CLEAR_SSTB           /* Macro to clear SSTB */

/*
Shift Register Pin - 10
(MR) Master Reset 
*/

#define SET_SMRL             /* Macro to set SMRL */
#define CLEAR_SMRL           /* Macro to clear SMRL */

/*
Shift Register Pin - 13
(OE) Output Enable 
*/

#define SET_SOEL             /* Macro to set SOEL */
#define CLEAR_SOEL           /* Macro to clear SOEL */

/*------------------------------------------------------------------*
    Functions
*-------------------------------------------------------------------*/

void shiftout (unsigned short);
void nopdelay(uint32_t);

#endif
