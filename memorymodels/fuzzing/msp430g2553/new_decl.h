/* ============================================================================ */
/* Copyright (c) 2013, Texas Instruments Incorporated                           */
/*  All rights reserved.                                                        */
/*                                                                              */
/*  Redistribution and use in source and binary forms, with or without          */
/*  modification, are permitted provided that the following conditions          */
/*  are met:                                                                    */
/*                                                                              */
/*  *  Redistributions of source code must retain the above copyright           */
/*     notice, this list of conditions and the following disclaimer.            */
/*                                                                              */
/*  *  Redistributions in binary form must reproduce the above copyright        */
/*     notice, this list of conditions and the following disclaimer in the      */
/*     documentation and/or other materials provided with the distribution.     */
/*                                                                              */
/*  *  Neither the name of Texas Instruments Incorporated nor the names of      */
/*     its contributors may be used to endorse or promote products derived      */
/*     from this software without specific prior written permission.            */
/*                                                                              */
/*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" */
/*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,       */
/*  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR      */
/*  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR            */
/*  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,       */
/*  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,         */
/*  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; */
/*  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,    */
/*  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR     */
/*  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,              */
/*  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                          */
/* ============================================================================ */

/********************************************************************
*
* Standard register and bit definitions for the Texas Instruments
* MSP430 microcontroller.
*
* This file supports assembler and C development for
* MSP430G2553 devices.
*
* Texas Instruments, Version 1.0
*
* Rev. 1.0, Setup
*
********************************************************************/

#ifndef __MSP430G2553
#define __MSP430G2553

#define __MSP430_HEADER_VERSION__ 1073

#define __MSP430_TI_HEADERS__

#ifdef __cplusplus
extern "C" {
#endif

#include <iomacros.h>

/************************************************************
* STANDARD BITS
************************************************************/

#define BIT0                (0x0001)
#define BIT1                (0x0002)
#define BIT2                (0x0004)
#define BIT3                (0x0008)
#define BIT4                (0x0010)
#define BIT5                (0x0020)
#define BIT6                (0x0040)
#define BIT7                (0x0080)
#define BIT8                (0x0100)
#define BIT9                (0x0200)
#define BITA                (0x0400)
#define BITB                (0x0800)
#define BITC                (0x1000)
#define BITD                (0x2000)
#define BITE                (0x4000)
#define BITF                (0x8000)

/************************************************************
* STATUS REGISTER BITS
************************************************************/

#define C                   (0x0001)
#define Z                   (0x0002)
#define N                   (0x0004)
#define V                   (0x0100)
#define GIE                 (0x0008)
#define CPUOFF              (0x0010)
#define OSCOFF              (0x0020)
#define SCG0                (0x0040)
#define SCG1                (0x0080)

/* Low Power Modes coded with Bits 4-7 in SR */

#ifndef __STDC__ /* Begin #defines for assembler */
#define LPM0                (CPUOFF)
#define LPM1                (SCG0+CPUOFF)
#define LPM2                (SCG1+CPUOFF)
#define LPM3                (SCG1+SCG0+CPUOFF)
#define LPM4                (SCG1+SCG0+OSCOFF+CPUOFF)
/* End #defines for assembler */

#else /* Begin #defines for C */
#define LPM0_bits           (CPUOFF)
#define LPM1_bits           (SCG0+CPUOFF)
#define LPM2_bits           (SCG1+CPUOFF)
#define LPM3_bits           (SCG1+SCG0+CPUOFF)
#define LPM4_bits           (SCG1+SCG0+OSCOFF+CPUOFF)

#include "in430.h"

#define LPM0      _BIS_SR(LPM0_bits)     /* Enter Low Power Mode 0 */
#define LPM0_EXIT _BIC_SR_IRQ(LPM0_bits) /* Exit Low Power Mode 0 */
#define LPM1      _BIS_SR(LPM1_bits)     /* Enter Low Power Mode 1 */
#define LPM1_EXIT _BIC_SR_IRQ(LPM1_bits) /* Exit Low Power Mode 1 */
#define LPM2      _BIS_SR(LPM2_bits)     /* Enter Low Power Mode 2 */
#define LPM2_EXIT _BIC_SR_IRQ(LPM2_bits) /* Exit Low Power Mode 2 */
#define LPM3      _BIS_SR(LPM3_bits)     /* Enter Low Power Mode 3 */
#define LPM3_EXIT _BIC_SR_IRQ(LPM3_bits) /* Exit Low Power Mode 3 */
#define LPM4      _BIS_SR(LPM4_bits)     /* Enter Low Power Mode 4 */
#define LPM4_EXIT _BIC_SR_IRQ(LPM4_bits) /* Exit Low Power Mode 4 */
#endif /* End #defines for C */

/************************************************************
* PERIPHERAL FILE MAP
************************************************************/

/************************************************************
* SPECIAL FUNCTION REGISTER ADDRESSES + CONTROL BITS
************************************************************/

#define IE1_                  0x0000    /* Interrupt Enable 1 */
#define IE1 (*(volatile uint8_t *)0x0)
#define WDTIE               (0x01)    /* Watchdog Interrupt Enable */
#define OFIE                (0x02)    /* Osc. Fault  Interrupt Enable */
#define NMIIE               (0x10)    /* NMI Interrupt Enable */
#define ACCVIE              (0x20)    /* Flash Access Violation Interrupt Enable */

#define IFG1_                 0x0002    /* Interrupt Flag 1 */
#define IFG1 (*(volatile uint8_t *)0x2)
#define WDTIFG              (0x01)    /* Watchdog Interrupt Flag */
#define OFIFG               (0x02)    /* Osc. Fault Interrupt Flag */
#define PORIFG              (0x04)    /* Power On Interrupt Flag */
#define RSTIFG              (0x08)    /* Reset Interrupt Flag */
#define NMIIFG              (0x10)    /* NMI Interrupt Flag */

#define IE2_                  0x0001    /* Interrupt Enable 2 */
#define IE2 (*(volatile uint8_t *)0x1)
#define UC0IE               IE2
#define UCA0RXIE            (0x01)
#define UCA0TXIE            (0x02)
#define UCB0RXIE            (0x04)
#define UCB0TXIE            (0x08)

#define IFG2_                 0x0003    /* Interrupt Flag 2 */
#define IFG2 (*(volatile uint8_t *)0x3)
#define UC0IFG              IFG2
#define UCA0RXIFG           (0x01)
#define UCA0TXIFG           (0x02)
#define UCB0RXIFG           (0x04)
#define UCB0TXIFG           (0x08)


/************************************************************
* ADC10
************************************************************/
#define __MSP430_HAS_ADC10__            /* Definition to show that Module is available */

#define ADC10DTC0_            0x0048    /* ADC10 Data Transfer Control 0 */
#define ADC10DTC0 (*(volatile uint8_t *)0x48)
#define ADC10DTC1_            0x0049    /* ADC10 Data Transfer Control 1 */
#define ADC10DTC1 (*(volatile uint8_t *)0x49)
#define ADC10AE0_             0x004A    /* ADC10 Analog Enable 0 */
#define ADC10AE0 (*(volatile uint8_t *)0x4a)

#define ADC10CTL0_            0x01B0    /* ADC10 Control 0 */
#define ADC10CTL0 (*(volatile uint16_t *)0x1b0)
#define ADC10CTL1_            0x01B2    /* ADC10 Control 1 */
#define ADC10CTL1 (*(volatile uint16_t *)0x1b2)
#define ADC10MEM_             0x01B4    /* ADC10 Memory */
#define ADC10MEM (*(volatile uint16_t *)0x1b4)
#define ADC10SA_              0x01BC    /* ADC10 Data Transfer Start Address */
#define ADC10SA (*(volatile uint16_t *)0x1bc)

/* ADC10CTL0 */
#define ADC10SC             (0x001)     /* ADC10 Start Conversion */
#define ENC                 (0x002)     /* ADC10 Enable Conversion */
#define ADC10IFG            (0x004)     /* ADC10 Interrupt Flag */
#define ADC10IE             (0x008)     /* ADC10 Interrupt Enalbe */
#define ADC10ON             (0x010)     /* ADC10 On/Enable */
#define REFON               (0x020)     /* ADC10 Reference on */
#define REF2_5V             (0x040)     /* ADC10 Ref 0:1.5V / 1:2.5V */
#define MSC                 (0x080)     /* ADC10 Multiple SampleConversion */
#define REFBURST            (0x100)     /* ADC10 Reference Burst Mode */
#define REFOUT              (0x200)     /* ADC10 Enalbe output of Ref. */
#define ADC10SR             (0x400)     /* ADC10 Sampling Rate 0:200ksps / 1:50ksps */
#define ADC10SHT0           (0x800)     /* ADC10 Sample Hold Select Bit: 0 */
#define ADC10SHT1           (0x1000)    /* ADC10 Sample Hold Select Bit: 1 */
#define SREF0               (0x2000)    /* ADC10 Reference Select Bit: 0 */
#define SREF1               (0x4000)    /* ADC10 Reference Select Bit: 1 */
#define SREF2               (0x8000)    /* ADC10 Reference Select Bit: 2 */
#define ADC10SHT_0          (0x0000)   /* 4 x ADC10CLKs */
#define ADC10SHT_1          (0x0800)   /* 8 x ADC10CLKs */
#define ADC10SHT_2          (0x1000)   /* 16 x ADC10CLKs */
#define ADC10SHT_3          (0x1800)   /* 64 x ADC10CLKs */

#define SREF_0              (0x0000)  /* VR+ = AVCC and VR- = AVSS */
#define SREF_1              (0x2000)  /* VR+ = VREF+ and VR- = AVSS */
#define SREF_2              (0x4000)  /* VR+ = VEREF+ and VR- = AVSS */
#define SREF_3              (0x6000)  /* VR+ = VEREF+ and VR- = AVSS */
#define SREF_4              (0x8000)  /* VR+ = AVCC and VR- = VREF-/VEREF- */
#define SREF_5              (0xA000)  /* VR+ = VREF+ and VR- = VREF-/VEREF- */
#define SREF_6              (0xC000)  /* VR+ = VEREF+ and VR- = VREF-/VEREF- */
#define SREF_7              (0xE000)  /* VR+ = VEREF+ and VR- = VREF-/VEREF- */

/* ADC10CTL1 */
#define ADC10BUSY           (0x0001)    /* ADC10 BUSY */
#define CONSEQ0             (0x0002)    /* ADC10 Conversion Sequence Select 0 */
#define CONSEQ1             (0x0004)    /* ADC10 Conversion Sequence Select 1 */
#define ADC10SSEL0          (0x0008)    /* ADC10 Clock Source Select Bit: 0 */
#define ADC10SSEL1          (0x0010)    /* ADC10 Clock Source Select Bit: 1 */
#define ADC10DIV0           (0x0020)    /* ADC10 Clock Divider Select Bit: 0 */
#define ADC10DIV1           (0x0040)    /* ADC10 Clock Divider Select Bit: 1 */
#define ADC10DIV2           (0x0080)    /* ADC10 Clock Divider Select Bit: 2 */
#define ISSH                (0x0100)    /* ADC10 Invert Sample Hold Signal */
#define ADC10DF             (0x0200)    /* ADC10 Data Format 0:binary 1:2's complement */
#define SHS0                (0x0400)    /* ADC10 Sample/Hold Source Bit: 0 */
#define SHS1                (0x0800)    /* ADC10 Sample/Hold Source Bit: 1 */
#define INCH0               (0x1000)    /* ADC10 Input Channel Select Bit: 0 */
#define INCH1               (0x2000)    /* ADC10 Input Channel Select Bit: 1 */
#define INCH2               (0x4000)    /* ADC10 Input Channel Select Bit: 2 */
#define INCH3               (0x8000)    /* ADC10 Input Channel Select Bit: 3 */

#define CONSEQ_0            (0x0000)       /* Single channel single conversion */
#define CONSEQ_1            (0x0002)       /* Sequence of channels */
#define CONSEQ_2            (0x0004)       /* Repeat single channel */
#define CONSEQ_3            (0x0006)       /* Repeat sequence of channels */

#define ADC10SSEL_0         (0x0000)       /* ADC10OSC */
#define ADC10SSEL_1         (0x0008)       /* ACLK */
#define ADC10SSEL_2         (0x0010)       /* MCLK */
#define ADC10SSEL_3         (0x0018)       /* SMCLK */

#define ADC10DIV_0          (0x0000)    /* ADC10 Clock Divider Select 0 */
#define ADC10DIV_1          (0x0020)    /* ADC10 Clock Divider Select 1 */
#define ADC10DIV_2          (0x0040)    /* ADC10 Clock Divider Select 2 */
#define ADC10DIV_3          (0x0060)    /* ADC10 Clock Divider Select 3 */
#define ADC10DIV_4          (0x0080)    /* ADC10 Clock Divider Select 4 */
#define ADC10DIV_5          (0x00A0)    /* ADC10 Clock Divider Select 5 */
#define ADC10DIV_6          (0x00C0)    /* ADC10 Clock Divider Select 6 */
#define ADC10DIV_7          (0x00E0)    /* ADC10 Clock Divider Select 7 */

#define SHS_0               (0x0000)   /* ADC10SC */
#define SHS_1               (0x0400)   /* TA3 OUT1 */
#define SHS_2               (0x0800)   /* TA3 OUT0 */
#define SHS_3               (0x0C00)   /* TA3 OUT2 */

#define INCH_0              (0x0000)  /* Selects Channel 0 */
#define INCH_1              (0x1000)  /* Selects Channel 1 */
#define INCH_2              (0x2000)  /* Selects Channel 2 */
#define INCH_3              (0x3000)  /* Selects Channel 3 */
#define INCH_4              (0x4000)  /* Selects Channel 4 */
#define INCH_5              (0x5000)  /* Selects Channel 5 */
#define INCH_6              (0x6000)  /* Selects Channel 6 */
#define INCH_7              (0x7000)  /* Selects Channel 7 */
#define INCH_8              (0x8000)  /* Selects Channel 8 */
#define INCH_9              (0x9000)  /* Selects Channel 9 */
#define INCH_10             (0xA000) /* Selects Channel 10 */
#define INCH_11             (0xB000) /* Selects Channel 11 */
#define INCH_12             (0xC000) /* Selects Channel 12 */
#define INCH_13             (0xD000) /* Selects Channel 13 */
#define INCH_14             (0xE000) /* Selects Channel 14 */
#define INCH_15             (0xF000) /* Selects Channel 15 */

/* ADC10DTC0 */
#define ADC10FETCH          (0x001)     /* This bit should normally be reset */
#define ADC10B1             (0x002)     /* ADC10 block one */
#define ADC10CT             (0x004)     /* ADC10 continuous transfer */
#define ADC10TB             (0x008)     /* ADC10 two-block mode */
#define ADC10DISABLE        (0x000)     /* ADC10DTC1 */

/************************************************************
* Basic Clock Module
************************************************************/
#define __MSP430_HAS_BC2__            /* Definition to show that Module is available */

#define DCOCTL_               0x0056    /* DCO Clock Frequency Control */
#define DCOCTL (*(volatile uint8_t *)0x56)
#define BCSCTL1_              0x0057    /* Basic Clock System Control 1 */
#define BCSCTL1 (*(volatile uint8_t *)0x57)
#define BCSCTL2_              0x0058    /* Basic Clock System Control 2 */
#define BCSCTL2 (*(volatile uint8_t *)0x58)
#define BCSCTL3_              0x0053    /* Basic Clock System Control 3 */
#define BCSCTL3 (*(volatile uint8_t *)0x53)

#define MOD0                (0x01)   /* Modulation Bit 0 */
#define MOD1                (0x02)   /* Modulation Bit 1 */
#define MOD2                (0x04)   /* Modulation Bit 2 */
#define MOD3                (0x08)   /* Modulation Bit 3 */
#define MOD4                (0x10)   /* Modulation Bit 4 */
#define DCO0                (0x20)   /* DCO Select Bit 0 */
#define DCO1                (0x40)   /* DCO Select Bit 1 */
#define DCO2                (0x80)   /* DCO Select Bit 2 */

#define RSEL0               (0x01)   /* Range Select Bit 0 */
#define RSEL1               (0x02)   /* Range Select Bit 1 */
#define RSEL2               (0x04)   /* Range Select Bit 2 */
#define RSEL3               (0x08)   /* Range Select Bit 3 */
#define DIVA0               (0x10)   /* ACLK Divider 0 */
#define DIVA1               (0x20)   /* ACLK Divider 1 */
#define XTS                 (0x40)   /* LFXTCLK 0:Low Freq. / 1: High Freq. */
#define XT2OFF              (0x80)   /* Enable XT2CLK */

#define DIVA_0              (0x00)   /* ACLK Divider 0: /1 */
#define DIVA_1              (0x10)   /* ACLK Divider 1: /2 */
#define DIVA_2              (0x20)   /* ACLK Divider 2: /4 */
#define DIVA_3              (0x30)   /* ACLK Divider 3: /8 */

#define DIVS0               (0x02)   /* SMCLK Divider 0 */
#define DIVS1               (0x04)   /* SMCLK Divider 1 */
#define SELS                (0x08)   /* SMCLK Source Select 0:DCOCLK / 1:XT2CLK/LFXTCLK */
#define DIVM0               (0x10)   /* MCLK Divider 0 */
#define DIVM1               (0x20)   /* MCLK Divider 1 */
#define SELM0               (0x40)   /* MCLK Source Select 0 */
#define SELM1               (0x80)   /* MCLK Source Select 1 */

#define DIVS_0              (0x00)   /* SMCLK Divider 0: /1 */
#define DIVS_1              (0x02)   /* SMCLK Divider 1: /2 */
#define DIVS_2              (0x04)   /* SMCLK Divider 2: /4 */
#define DIVS_3              (0x06)   /* SMCLK Divider 3: /8 */

#define DIVM_0              (0x00)   /* MCLK Divider 0: /1 */
#define DIVM_1              (0x10)   /* MCLK Divider 1: /2 */
#define DIVM_2              (0x20)   /* MCLK Divider 2: /4 */
#define DIVM_3              (0x30)   /* MCLK Divider 3: /8 */

#define SELM_0              (0x00)   /* MCLK Source Select 0: DCOCLK */
#define SELM_1              (0x40)   /* MCLK Source Select 1: DCOCLK */
#define SELM_2              (0x80)   /* MCLK Source Select 2: XT2CLK/LFXTCLK */
#define SELM_3              (0xC0)   /* MCLK Source Select 3: LFXTCLK */

#define LFXT1OF             (0x01)   /* Low/high Frequency Oscillator Fault Flag */
#define XT2OF               (0x02)   /* High frequency oscillator 2 fault flag */
#define XCAP0               (0x04)   /* XIN/XOUT Cap 0 */
#define XCAP1               (0x08)   /* XIN/XOUT Cap 1 */
#define LFXT1S0             (0x10)   /* Mode 0 for LFXT1 (XTS = 0) */
#define LFXT1S1             (0x20)   /* Mode 1 for LFXT1 (XTS = 0) */
#define XT2S0               (0x40)   /* Mode 0 for XT2 */
#define XT2S1               (0x80)   /* Mode 1 for XT2 */

#define XCAP_0              (0x00)   /* XIN/XOUT Cap : 0 pF */
#define XCAP_1              (0x04)   /* XIN/XOUT Cap : 6 pF */
#define XCAP_2              (0x08)   /* XIN/XOUT Cap : 10 pF */
#define XCAP_3              (0x0C)   /* XIN/XOUT Cap : 12.5 pF */

#define LFXT1S_0            (0x00)   /* Mode 0 for LFXT1 : Normal operation */
#define LFXT1S_1            (0x10)   /* Mode 1 for LFXT1 : Reserved */
#define LFXT1S_2            (0x20)   /* Mode 2 for LFXT1 : VLO */
#define LFXT1S_3            (0x30)   /* Mode 3 for LFXT1 : Digital input signal */

#define XT2S_0              (0x00)   /* Mode 0 for XT2 : 0.4 - 1 MHz */
#define XT2S_1              (0x40)   /* Mode 1 for XT2 : 1 - 4 MHz */
#define XT2S_2              (0x80)   /* Mode 2 for XT2 : 2 - 16 MHz */
#define XT2S_3              (0xC0)   /* Mode 3 for XT2 : Digital input signal */

/************************************************************
* Comparator A
************************************************************/
#define __MSP430_HAS_CAPLUS__         /* Definition to show that Module is available */

#define CACTL1_               0x0059    /* Comparator A Control 1 */
#define CACTL1 (*(volatile uint8_t *)0x59)
#define CACTL2_               0x005A    /* Comparator A Control 2 */
#define CACTL2 (*(volatile uint8_t *)0x5a)
#define CAPD_                 0x005B    /* Comparator A Port Disable */
#define CAPD (*(volatile uint8_t *)0x5b)

#define CAIFG               (0x01)    /* Comp. A Interrupt Flag */
#define CAIE                (0x02)    /* Comp. A Interrupt Enable */
#define CAIES               (0x04)    /* Comp. A Int. Edge Select: 0:rising / 1:falling */
#define CAON                (0x08)    /* Comp. A enable */
#define CAREF0              (0x10)    /* Comp. A Internal Reference Select 0 */
#define CAREF1              (0x20)    /* Comp. A Internal Reference Select 1 */
#define CARSEL              (0x40)    /* Comp. A Internal Reference Enable */
#define CAEX                (0x80)    /* Comp. A Exchange Inputs */

#define CAREF_0             (0x00)    /* Comp. A Int. Ref. Select 0 : Off */
#define CAREF_1             (0x10)    /* Comp. A Int. Ref. Select 1 : 0.25*Vcc */
#define CAREF_2             (0x20)    /* Comp. A Int. Ref. Select 2 : 0.5*Vcc */
#define CAREF_3             (0x30)    /* Comp. A Int. Ref. Select 3 : Vt*/

#define CAOUT               (0x01)    /* Comp. A Output */
#define CAF                 (0x02)    /* Comp. A Enable Output Filter */
#define P2CA0               (0x04)    /* Comp. A +Terminal Multiplexer */
#define P2CA1               (0x08)    /* Comp. A -Terminal Multiplexer */
#define P2CA2               (0x10)    /* Comp. A -Terminal Multiplexer */
#define P2CA3               (0x20)    /* Comp. A -Terminal Multiplexer */
#define P2CA4               (0x40)    /* Comp. A +Terminal Multiplexer */
#define CASHORT             (0x80)    /* Comp. A Short + and - Terminals */

#define CAPD0               (0x01)    /* Comp. A Disable Input Buffer of Port Register .0 */
#define CAPD1               (0x02)    /* Comp. A Disable Input Buffer of Port Register .1 */
#define CAPD2               (0x04)    /* Comp. A Disable Input Buffer of Port Register .2 */
#define CAPD3               (0x08)    /* Comp. A Disable Input Buffer of Port Register .3 */
#define CAPD4               (0x10)    /* Comp. A Disable Input Buffer of Port Register .4 */
#define CAPD5               (0x20)    /* Comp. A Disable Input Buffer of Port Register .5 */
#define CAPD6               (0x40)    /* Comp. A Disable Input Buffer of Port Register .6 */
#define CAPD7               (0x80)    /* Comp. A Disable Input Buffer of Port Register .7 */

/*************************************************************
* Flash Memory
*************************************************************/
#define __MSP430_HAS_FLASH2__         /* Definition to show that Module is available */

#define FCTL1_                0x0128    /* FLASH Control 1 */
#define FCTL1 (*(volatile uint16_t *)0x128)
#define FCTL2_                0x012A    /* FLASH Control 2 */
#define FCTL2 (*(volatile uint16_t *)0x12a)
#define FCTL3_                0x012C    /* FLASH Control 3 */
#define FCTL3 (*(volatile uint16_t *)0x12c)

#define FRKEY               (0x9600)  /* Flash key returned by read */
#define FWKEY               (0xA500)  /* Flash key for write */
#define FXKEY               (0x3300)  /* for use with XOR instruction */

#define ERASE               (0x0002)  /* Enable bit for Flash segment erase */
#define MERAS               (0x0004)  /* Enable bit for Flash mass erase */
#define WRT                 (0x0040)  /* Enable bit for Flash write */
#define BLKWRT              (0x0080)  /* Enable bit for Flash segment write */
#define SEGWRT              (0x0080)  /* old definition */ /* Enable bit for Flash segment write */

#define FN0                 (0x0001)  /* Divide Flash clock by 1 to 64 using FN0 to FN5 according to: */
#define FN1                 (0x0002)  /*  32*FN5 + 16*FN4 + 8*FN3 + 4*FN2 + 2*FN1 + FN0 + 1 */
#ifndef FN2
#define FN2                 (0x0004)
#endif
#ifndef FN3
#define FN3                 (0x0008)
#endif
#ifndef FN4
#define FN4                 (0x0010)
#endif
#define FN5                 (0x0020)
#define FSSEL0              (0x0040)  /* Flash clock select 0 */        /* to distinguish from USART SSELx */
#define FSSEL1              (0x0080)  /* Flash clock select 1 */

#define FSSEL_0             (0x0000)  /* Flash clock select: 0 - ACLK */
#define FSSEL_1             (0x0040)  /* Flash clock select: 1 - MCLK */
#define FSSEL_2             (0x0080)  /* Flash clock select: 2 - SMCLK */
#define FSSEL_3             (0x00C0)  /* Flash clock select: 3 - SMCLK */

#define BUSY                (0x0001)  /* Flash busy: 1 */
#define KEYV                (0x0002)  /* Flash Key violation flag */
#define ACCVIFG             (0x0004)  /* Flash Access violation flag */
#define WAIT                (0x0008)  /* Wait flag for segment write */
#define LOCK                (0x0010)  /* Lock bit: 1 - Flash is locked (read only) */
#define EMEX                (0x0020)  /* Flash Emergency Exit */
#define LOCKA               (0x0040)  /* Segment A Lock bit: read = 1 - Segment is locked (read only) */
#define FAIL                (0x0080)  /* Last Program or Erase failed */

/************************************************************
* DIGITAL I/O Port1/2 Pull up / Pull down Resistors
************************************************************/
#define __MSP430_HAS_PORT1_R__        /* Definition to show that Module is available */
#define __MSP430_HAS_PORT2_R__        /* Definition to show that Module is available */

#define P1IN_                 0x0020    /* Port 1 Input */
#define P1IN (*(volatile uint8_t *)0x20)
#define P1OUT_                0x0021    /* Port 1 Output */
#define P1OUT (*(volatile uint8_t *)0x21)
#define P1DIR_                0x0022    /* Port 1 Direction */
#define P1DIR (*(volatile uint8_t *)0x22)
#define P1IFG_                0x0023    /* Port 1 Interrupt Flag */
#define P1IFG (*(volatile uint8_t *)0x23)
#define P1IES_                0x0024    /* Port 1 Interrupt Edge Select */
#define P1IES (*(volatile uint8_t *)0x24)
#define P1IE_                 0x0025    /* Port 1 Interrupt Enable */
#define P1IE (*(volatile uint8_t *)0x25)
#define P1SEL_                0x0026    /* Port 1 Selection */
#define P1SEL (*(volatile uint8_t *)0x26)
#define P1SEL2_               0x0041    /* Port 1 Selection 2 */
#define P1SEL2 (*(volatile uint8_t *)0x41)
#define P1REN_                0x0027    /* Port 1 Resistor Enable */
#define P1REN (*(volatile uint8_t *)0x27)

#define P2IN_                 0x0028    /* Port 2 Input */
#define P2IN (*(volatile uint8_t *)0x28)
#define P2OUT_                0x0029    /* Port 2 Output */
#define P2OUT (*(volatile uint8_t *)0x29)
#define P2DIR_                0x002A    /* Port 2 Direction */
#define P2DIR (*(volatile uint8_t *)0x2a)
#define P2IFG_                0x002B    /* Port 2 Interrupt Flag */
#define P2IFG (*(volatile uint8_t *)0x2b)
#define P2IES_                0x002C    /* Port 2 Interrupt Edge Select */
#define P2IES (*(volatile uint8_t *)0x2c)
#define P2IE_                 0x002D    /* Port 2 Interrupt Enable */
#define P2IE (*(volatile uint8_t *)0x2d)
#define P2SEL_                0x002E    /* Port 2 Selection */
#define P2SEL (*(volatile uint8_t *)0x2e)
#define P2SEL2_               0x0042    /* Port 2 Selection 2 */
#define P2SEL2 (*(volatile uint8_t *)0x42)
#define P2REN_                0x002F    /* Port 2 Resistor Enable */
#define P2REN (*(volatile uint8_t *)0x2f)

/************************************************************
* DIGITAL I/O Port3 Pull up / Pull down Resistors
************************************************************/
#define __MSP430_HAS_PORT3_R__          /* Definition to show that Module is available */

#define P3IN_                 0x0018    /* Port 3 Input */
#define P3IN (*(volatile uint8_t *)0x18)
#define P3OUT_                0x0019    /* Port 3 Output */
#define P3OUT (*(volatile uint8_t *)0x19)
#define P3DIR_                0x001A    /* Port 3 Direction */
#define P3DIR (*(volatile uint8_t *)0x1a)
#define P3SEL_                0x001B    /* Port 3 Selection */
#define P3SEL (*(volatile uint8_t *)0x1b)
#define P3SEL2_               0x0043    /* Port 3 Selection 2 */
#define P3SEL2 (*(volatile uint8_t *)0x43)
#define P3REN_                0x0010    /* Port 3 Resistor Enable */
#define P3REN (*(volatile uint8_t *)0x10)

/************************************************************
* Timer0_A3
************************************************************/
#define __MSP430_HAS_TA3__            /* Definition to show that Module is available */

#define TA0IV_                0x012E    /* Timer0_A3 Interrupt Vector Word */
#define TA0IV (*(volatile uint16_t *)0x12e)
#define TA0CTL_               0x0160    /* Timer0_A3 Control */
#define TA0CTL (*(volatile uint16_t *)0x160)
#define TA0CCTL0_             0x0162    /* Timer0_A3 Capture/Compare Control 0 */
#define TA0CCTL0 (*(volatile uint16_t *)0x162)
#define TA0CCTL1_             0x0164    /* Timer0_A3 Capture/Compare Control 1 */
#define TA0CCTL1 (*(volatile uint16_t *)0x164)
#define TA0CCTL2_             0x0166    /* Timer0_A3 Capture/Compare Control 2 */
#define TA0CCTL2 (*(volatile uint16_t *)0x166)
#define TA0R_                 0x0170    /* Timer0_A3 Counter Register */
#define TA0R (*(volatile uint16_t *)0x170)
#define TA0CCR0_              0x0172    /* Timer0_A3 Capture/Compare 0 */
#define TA0CCR0 (*(volatile uint16_t *)0x172)
#define TA0CCR1_              0x0174    /* Timer0_A3 Capture/Compare 1 */
#define TA0CCR1 (*(volatile uint16_t *)0x174)
#define TA0CCR2_              0x0176    /* Timer0_A3 Capture/Compare 2 */
#define TA0CCR2 (*(volatile uint16_t *)0x176)

/* Alternate register names */
#define TAIV                TA0IV     /* Timer A Interrupt Vector Word */
#define TACTL               TA0CTL    /* Timer A Control */
#define TACCTL0             TA0CCTL0  /* Timer A Capture/Compare Control 0 */
#define TACCTL1             TA0CCTL1  /* Timer A Capture/Compare Control 1 */
#define TACCTL2             TA0CCTL2  /* Timer A Capture/Compare Control 2 */
#define TAR                 TA0R      /* Timer A Counter Register */
#define TACCR0              TA0CCR0   /* Timer A Capture/Compare 0 */
#define TACCR1              TA0CCR1   /* Timer A Capture/Compare 1 */
#define TACCR2              TA0CCR2   /* Timer A Capture/Compare 2 */
#define TAIV_               TA0IV_    /* Timer A Interrupt Vector Word */
#define TACTL_              TA0CTL_   /* Timer A Control */
#define TACCTL0_            TA0CCTL0_ /* Timer A Capture/Compare Control 0 */
#define TACCTL1_            TA0CCTL1_ /* Timer A Capture/Compare Control 1 */
#define TACCTL2_            TA0CCTL2_ /* Timer A Capture/Compare Control 2 */
#define TAR_                TA0R_     /* Timer A Counter Register */
#define TACCR0_             TA0CCR0_  /* Timer A Capture/Compare 0 */
#define TACCR1_             TA0CCR1_  /* Timer A Capture/Compare 1 */
#define TACCR2_             TA0CCR2_  /* Timer A Capture/Compare 2 */

/* Alternate register names 2 */
#define CCTL0               TACCTL0   /* Timer A Capture/Compare Control 0 */
#define CCTL1               TACCTL1   /* Timer A Capture/Compare Control 1 */
#define CCTL2               TACCTL2   /* Timer A Capture/Compare Control 2 */
#define CCR0                TACCR0    /* Timer A Capture/Compare 0 */
#define CCR1                TACCR1    /* Timer A Capture/Compare 1 */
#define CCR2                TACCR2    /* Timer A Capture/Compare 2 */
#define CCTL0_              TACCTL0_  /* Timer A Capture/Compare Control 0 */
#define CCTL1_              TACCTL1_  /* Timer A Capture/Compare Control 1 */
#define CCTL2_              TACCTL2_  /* Timer A Capture/Compare Control 2 */
#define CCR0_               TACCR0_   /* Timer A Capture/Compare 0 */
#define CCR1_               TACCR1_   /* Timer A Capture/Compare 1 */
#define CCR2_               TACCR2_   /* Timer A Capture/Compare 2 */

#define TASSEL1             (0x0200)  /* Timer A clock source select 1 */
#define TASSEL0             (0x0100)  /* Timer A clock source select 0 */
#define ID1                 (0x0080)  /* Timer A clock input divider 1 */
#define ID0                 (0x0040)  /* Timer A clock input divider 0 */
#define MC1                 (0x0020)  /* Timer A mode control 1 */
#define MC0                 (0x0010)  /* Timer A mode control 0 */
#define TACLR               (0x0004)  /* Timer A counter clear */
#define TAIE                (0x0002)  /* Timer A counter interrupt enable */
#define TAIFG               (0x0001)  /* Timer A counter interrupt flag */

#define MC_0                (0x0000)  /* Timer A mode control: 0 - Stop */
#define MC_1                (0x0010)  /* Timer A mode control: 1 - Up to CCR0 */
#define MC_2                (0x0020)  /* Timer A mode control: 2 - Continous up */
#define MC_3                (0x0030)  /* Timer A mode control: 3 - Up/Down */
#define ID_0                (0x0000)  /* Timer A input divider: 0 - /1 */
#define ID_1                (0x0040)  /* Timer A input divider: 1 - /2 */
#define ID_2                (0x0080)  /* Timer A input divider: 2 - /4 */
#define ID_3                (0x00C0)  /* Timer A input divider: 3 - /8 */
#define TASSEL_0            (0x0000) /* Timer A clock source select: 0 - TACLK */
#define TASSEL_1            (0x0100) /* Timer A clock source select: 1 - ACLK  */
#define TASSEL_2            (0x0200) /* Timer A clock source select: 2 - SMCLK */
#define TASSEL_3            (0x0300) /* Timer A clock source select: 3 - INCLK */

#define CM1                 (0x8000)  /* Capture mode 1 */
#define CM0                 (0x4000)  /* Capture mode 0 */
#define CCIS1               (0x2000)  /* Capture input select 1 */
#define CCIS0               (0x1000)  /* Capture input select 0 */
#define SCS                 (0x0800)  /* Capture sychronize */
#define SCCI                (0x0400)  /* Latched capture signal (read) */
#define CAP                 (0x0100)  /* Capture mode: 1 /Compare mode : 0 */
#define OUTMOD2             (0x0080)  /* Output mode 2 */
#define OUTMOD1             (0x0040)  /* Output mode 1 */
#define OUTMOD0             (0x0020)  /* Output mode 0 */
#define CCIE                (0x0010)  /* Capture/compare interrupt enable */
#define CCI                 (0x0008)  /* Capture input signal (read) */
#define OUT                 (0x0004)  /* PWM Output signal if output mode 0 */
#define COV                 (0x0002)  /* Capture/compare overflow flag */
#define CCIFG               (0x0001)  /* Capture/compare interrupt flag */

#define OUTMOD_0            (0x0000)  /* PWM output mode: 0 - output only */
#define OUTMOD_1            (0x0020)  /* PWM output mode: 1 - set */
#define OUTMOD_2            (0x0040)  /* PWM output mode: 2 - PWM toggle/reset */
#define OUTMOD_3            (0x0060)  /* PWM output mode: 3 - PWM set/reset */
#define OUTMOD_4            (0x0080)  /* PWM output mode: 4 - toggle */
#define OUTMOD_5            (0x00A0)  /* PWM output mode: 5 - Reset */
#define OUTMOD_6            (0x00C0)  /* PWM output mode: 6 - PWM toggle/set */
#define OUTMOD_7            (0x00E0)  /* PWM output mode: 7 - PWM reset/set */
#define CCIS_0              (0x0000) /* Capture input select: 0 - CCIxA */
#define CCIS_1              (0x1000) /* Capture input select: 1 - CCIxB */
#define CCIS_2              (0x2000) /* Capture input select: 2 - GND */
#define CCIS_3              (0x3000) /* Capture input select: 3 - Vcc */
#define CM_0                (0x0000) /* Capture mode: 0 - disabled */
#define CM_1                (0x4000) /* Capture mode: 1 - pos. edge */
#define CM_2                (0x8000) /* Capture mode: 1 - neg. edge */
#define CM_3                (0xC000) /* Capture mode: 1 - both edges */

/* T0_A3IV Definitions */
#define TA0IV_NONE          (0x0000)    /* No Interrupt pending */
#define TA0IV_TACCR1        (0x0002)    /* TA0CCR1_CCIFG */
#define TA0IV_TACCR2        (0x0004)    /* TA0CCR2_CCIFG */
#define TA0IV_6             (0x0006)    /* Reserved */
#define TA0IV_8             (0x0008)    /* Reserved */
#define TA0IV_TAIFG         (0x000A)    /* TA0IFG */

/* Alternate register names - 5xx style */
#define TA0IV_TA0CCR1       (0x0002)    /* TA0CCR1_CCIFG */
#define TA0IV_TA0CCR2       (0x0004)    /* TA0CCR2_CCIFG */
#define TA0IV_TA0IFG        (0x000A)    /* TA0IFG */


/************************************************************
* Timer1_A3
************************************************************/
#define __MSP430_HAS_T1A3__           /* Definition to show that Module is available */

#define TA1IV_                0x011E    /* Timer1_A3 Interrupt Vector Word */
#define TA1IV (*(volatile uint16_t *)0x11e)
#define TA1CTL_               0x0180    /* Timer1_A3 Control */
#define TA1CTL (*(volatile uint16_t *)0x180)
#define TA1CCTL0_             0x0182    /* Timer1_A3 Capture/Compare Control 0 */
#define TA1CCTL0 (*(volatile uint16_t *)0x182)
#define TA1CCTL1_             0x0184    /* Timer1_A3 Capture/Compare Control 1 */
#define TA1CCTL1 (*(volatile uint16_t *)0x184)
#define TA1CCTL2_             0x0186    /* Timer1_A3 Capture/Compare Control 2 */
#define TA1CCTL2 (*(volatile uint16_t *)0x186)
#define TA1R_                 0x0190    /* Timer1_A3 Counter Register */
#define TA1R (*(volatile uint16_t *)0x190)
#define TA1CCR0_              0x0192    /* Timer1_A3 Capture/Compare 0 */
#define TA1CCR0 (*(volatile uint16_t *)0x192)
#define TA1CCR1_              0x0194    /* Timer1_A3 Capture/Compare 1 */
#define TA1CCR1 (*(volatile uint16_t *)0x194)
#define TA1CCR2_              0x0196    /* Timer1_A3 Capture/Compare 2 */
#define TA1CCR2 (*(volatile uint16_t *)0x196)

/* Bits are already defined within the Timer0_Ax */

/* T1_A3IV Definitions */
#define TA1IV_NONE          (0x0000)    /* No Interrupt pending */
#define TA1IV_TACCR1        (0x0002)    /* TA1CCR1_CCIFG */
#define TA1IV_TACCR2        (0x0004)    /* TA1CCR2_CCIFG */
#define TA1IV_6             (0x0006)    /* Reserved */
#define TA1IV_8             (0x0008)    /* Reserved */
#define TA1IV_TAIFG         (0x000A)    /* TA1IFG */

/* Alternate register names - 5xx style */
#define TA1IV_TA1CCR1       (0x0002)    /* TA1CCR1_CCIFG */
#define TA1IV_TA1CCR2       (0x0004)    /* TA1CCR2_CCIFG */
#define TA1IV_TA1IFG        (0x000A)    /* TA1IFG */

/************************************************************
* USCI
************************************************************/
#define __MSP430_HAS_USCI__           /* Definition to show that Module is available */

#define UCA0CTL0_             0x0060    /* USCI A0 Control Register 0 */
#define UCA0CTL0 (*(volatile uint8_t *)0x60)
#define UCA0CTL1_             0x0061    /* USCI A0 Control Register 1 */
#define UCA0CTL1 (*(volatile uint8_t *)0x61)
#define UCA0BR0_              0x0062    /* USCI A0 Baud Rate 0 */
#define UCA0BR0 (*(volatile uint8_t *)0x62)
#define UCA0BR1_              0x0063    /* USCI A0 Baud Rate 1 */
#define UCA0BR1 (*(volatile uint8_t *)0x63)
#define UCA0MCTL_             0x0064    /* USCI A0 Modulation Control */
#define UCA0MCTL (*(volatile uint8_t *)0x64)
#define UCA0STAT_             0x0065    /* USCI A0 Status Register */
#define UCA0STAT (*(volatile uint8_t *)0x65)
#define UCA0RXBUF_            0x0066    /* USCI A0 Receive Buffer */
#define UCA0RXBUF (*(volatile uint8_t *)0x66)
#define UCA0TXBUF_            0x0067    /* USCI A0 Transmit Buffer */
#define UCA0TXBUF (*(volatile uint8_t *)0x67)
#define UCA0ABCTL_            0x005D    /* USCI A0 LIN Control */
#define UCA0ABCTL (*(volatile uint8_t *)0x5d)
#define UCA0IRTCTL_           0x005E    /* USCI A0 IrDA Transmit Control */
#define UCA0IRTCTL (*(volatile uint8_t *)0x5e)
#define UCA0IRRCTL_           0x005F    /* USCI A0 IrDA Receive Control */
#define UCA0IRRCTL (*(volatile uint8_t *)0x5f)



#define UCB0CTL0_             0x0068    /* USCI B0 Control Register 0 */
#define UCB0CTL0 (*(volatile uint8_t *)0x68)
#define UCB0CTL1_             0x0069    /* USCI B0 Control Register 1 */
#define UCB0CTL1 (*(volatile uint8_t *)0x69)
#define UCB0BR0_              0x006A    /* USCI B0 Baud Rate 0 */
#define UCB0BR0 (*(volatile uint8_t *)0x6a)
#define UCB0BR1_              0x006B    /* USCI B0 Baud Rate 1 */
#define UCB0BR1 (*(volatile uint8_t *)0x6b)
#define UCB0I2CIE_            0x006C    /* USCI B0 I2C Interrupt Enable Register */
#define UCB0I2CIE (*(volatile uint8_t *)0x6c)
#define UCB0STAT_             0x006D    /* USCI B0 Status Register */
#define UCB0STAT (*(volatile uint8_t *)0x6d)
#define UCB0RXBUF_            0x006E    /* USCI B0 Receive Buffer */
#define UCB0RXBUF (*(volatile uint8_t *)0x6e)
#define UCB0TXBUF_            0x006F    /* USCI B0 Transmit Buffer */
#define UCB0TXBUF (*(volatile uint8_t *)0x6f)
#define UCB0I2COA_            0x0118    /* USCI B0 I2C Own Address */
#define UCB0I2COA (*(volatile uint16_t *)0x118)
#define UCB0I2CSA_            0x011A    /* USCI B0 I2C Slave Address */
#define UCB0I2CSA (*(volatile uint16_t *)0x11a)

// UART-Mode Bits
#define UCPEN               (0x80)    /* Async. Mode: Parity enable */
#define UCPAR               (0x40)    /* Async. Mode: Parity     0:odd / 1:even */
#define UCMSB               (0x20)    /* Async. Mode: MSB first  0:LSB / 1:MSB */
#define UC7BIT              (0x10)    /* Async. Mode: Data Bits  0:8-bits / 1:7-bits */
#define UCSPB               (0x08)    /* Async. Mode: Stop Bits  0:one / 1: two */
#define UCMODE1             (0x04)    /* Async. Mode: USCI Mode 1 */
#define UCMODE0             (0x02)    /* Async. Mode: USCI Mode 0 */
#define UCSYNC              (0x01)    /* Sync-Mode  0:UART-Mode / 1:SPI-Mode */

// SPI-Mode Bits
#define UCCKPH              (0x80)    /* Sync. Mode: Clock Phase */
#define UCCKPL              (0x40)    /* Sync. Mode: Clock Polarity */
#define UCMST               (0x08)    /* Sync. Mode: Master Select */

// I2C-Mode Bits
#define UCA10               (0x80)    /* 10-bit Address Mode */
#define UCSLA10             (0x40)    /* 10-bit Slave Address Mode */
#define UCMM                (0x20)    /* Multi-Master Environment */
//#define res               (0x10)    /* reserved */
#define UCMODE_0            (0x00)    /* Sync. Mode: USCI Mode: 0 */
#define UCMODE_1            (0x02)    /* Sync. Mode: USCI Mode: 1 */
#define UCMODE_2            (0x04)    /* Sync. Mode: USCI Mode: 2 */
#define UCMODE_3            (0x06)    /* Sync. Mode: USCI Mode: 3 */

// UART-Mode Bits
#define UCSSEL1             (0x80)    /* USCI 0 Clock Source Select 1 */
#define UCSSEL0             (0x40)    /* USCI 0 Clock Source Select 0 */
#define UCRXEIE             (0x20)    /* RX Error interrupt enable */
#define UCBRKIE             (0x10)    /* Break interrupt enable */
#define UCDORM              (0x08)    /* Dormant (Sleep) Mode */
#define UCTXADDR            (0x04)    /* Send next Data as Address */
#define UCTXBRK             (0x02)    /* Send next Data as Break */
#define UCSWRST             (0x01)    /* USCI Software Reset */

// SPI-Mode Bits
//#define res               (0x20)    /* reserved */
//#define res               (0x10)    /* reserved */
//#define res               (0x08)    /* reserved */
//#define res               (0x04)    /* reserved */
//#define res               (0x02)    /* reserved */

// I2C-Mode Bits
//#define res               (0x20)    /* reserved */
#define UCTR                (0x10)    /* Transmit/Receive Select/Flag */
#define UCTXNACK            (0x08)    /* Transmit NACK */
#define UCTXSTP             (0x04)    /* Transmit STOP */
#define UCTXSTT             (0x02)    /* Transmit START */
#define UCSSEL_0            (0x00)    /* USCI 0 Clock Source: 0 */
#define UCSSEL_1            (0x40)    /* USCI 0 Clock Source: 1 */
#define UCSSEL_2            (0x80)    /* USCI 0 Clock Source: 2 */
#define UCSSEL_3            (0xC0)    /* USCI 0 Clock Source: 3 */

#define UCBRF3              (0x80)    /* USCI First Stage Modulation Select 3 */
#define UCBRF2              (0x40)    /* USCI First Stage Modulation Select 2 */
#define UCBRF1              (0x20)    /* USCI First Stage Modulation Select 1 */
#define UCBRF0              (0x10)    /* USCI First Stage Modulation Select 0 */
#define UCBRS2              (0x08)    /* USCI Second Stage Modulation Select 2 */
#define UCBRS1              (0x04)    /* USCI Second Stage Modulation Select 1 */
#define UCBRS0              (0x02)    /* USCI Second Stage Modulation Select 0 */
#define UCOS16              (0x01)    /* USCI 16-times Oversampling enable */

#define UCBRF_0             (0x00)    /* USCI First Stage Modulation: 0 */
#define UCBRF_1             (0x10)    /* USCI First Stage Modulation: 1 */
#define UCBRF_2             (0x20)    /* USCI First Stage Modulation: 2 */
#define UCBRF_3             (0x30)    /* USCI First Stage Modulation: 3 */
#define UCBRF_4             (0x40)    /* USCI First Stage Modulation: 4 */
#define UCBRF_5             (0x50)    /* USCI First Stage Modulation: 5 */
#define UCBRF_6             (0x60)    /* USCI First Stage Modulation: 6 */
#define UCBRF_7             (0x70)    /* USCI First Stage Modulation: 7 */
#define UCBRF_8             (0x80)    /* USCI First Stage Modulation: 8 */
#define UCBRF_9             (0x90)    /* USCI First Stage Modulation: 9 */
#define UCBRF_10            (0xA0)    /* USCI First Stage Modulation: A */
#define UCBRF_11            (0xB0)    /* USCI First Stage Modulation: B */
#define UCBRF_12            (0xC0)    /* USCI First Stage Modulation: C */
#define UCBRF_13            (0xD0)    /* USCI First Stage Modulation: D */
#define UCBRF_14            (0xE0)    /* USCI First Stage Modulation: E */
#define UCBRF_15            (0xF0)    /* USCI First Stage Modulation: F */

#define UCBRS_0             (0x00)    /* USCI Second Stage Modulation: 0 */
#define UCBRS_1             (0x02)    /* USCI Second Stage Modulation: 1 */
#define UCBRS_2             (0x04)    /* USCI Second Stage Modulation: 2 */
#define UCBRS_3             (0x06)    /* USCI Second Stage Modulation: 3 */
#define UCBRS_4             (0x08)    /* USCI Second Stage Modulation: 4 */
#define UCBRS_5             (0x0A)    /* USCI Second Stage Modulation: 5 */
#define UCBRS_6             (0x0C)    /* USCI Second Stage Modulation: 6 */
#define UCBRS_7             (0x0E)    /* USCI Second Stage Modulation: 7 */

#define UCLISTEN            (0x80)    /* USCI Listen mode */
#define UCFE                (0x40)    /* USCI Frame Error Flag */
#define UCOE                (0x20)    /* USCI Overrun Error Flag */
#define UCPE                (0x10)    /* USCI Parity Error Flag */
#define UCBRK               (0x08)    /* USCI Break received */
#define UCRXERR             (0x04)    /* USCI RX Error Flag */
#define UCADDR              (0x02)    /* USCI Address received Flag */
#define UCBUSY              (0x01)    /* USCI Busy Flag */
#define UCIDLE              (0x02)    /* USCI Idle line detected Flag */

//#define res               (0x80)    /* reserved */
//#define res               (0x40)    /* reserved */
//#define res               (0x20)    /* reserved */
//#define res               (0x10)    /* reserved */
#define UCNACKIE            (0x08)    /* NACK Condition interrupt enable */
#define UCSTPIE             (0x04)    /* STOP Condition interrupt enable */
#define UCSTTIE             (0x02)    /* START Condition interrupt enable */
#define UCALIE              (0x01)    /* Arbitration Lost interrupt enable */


#define UCSCLLOW            (0x40)    /* SCL low */
#define UCGC                (0x20)    /* General Call address received Flag */
#define UCBBUSY             (0x10)    /* Bus Busy Flag */
#define UCNACKIFG           (0x08)    /* NAK Condition interrupt Flag */
#define UCSTPIFG            (0x04)    /* STOP Condition interrupt Flag */
#define UCSTTIFG            (0x02)    /* START Condition interrupt Flag */
#define UCALIFG             (0x01)    /* Arbitration Lost interrupt Flag */

#define UCIRTXPL5           (0x80)    /* IRDA Transmit Pulse Length 5 */
#define UCIRTXPL4           (0x40)    /* IRDA Transmit Pulse Length 4 */
#define UCIRTXPL3           (0x20)    /* IRDA Transmit Pulse Length 3 */
#define UCIRTXPL2           (0x10)    /* IRDA Transmit Pulse Length 2 */
#define UCIRTXPL1           (0x08)    /* IRDA Transmit Pulse Length 1 */
#define UCIRTXPL0           (0x04)    /* IRDA Transmit Pulse Length 0 */
#define UCIRTXCLK           (0x02)    /* IRDA Transmit Pulse Clock Select */
#define UCIREN              (0x01)    /* IRDA Encoder/Decoder enable */

#define UCIRRXFL5           (0x80)    /* IRDA Receive Filter Length 5 */
#define UCIRRXFL4           (0x40)    /* IRDA Receive Filter Length 4 */
#define UCIRRXFL3           (0x20)    /* IRDA Receive Filter Length 3 */
#define UCIRRXFL2           (0x10)    /* IRDA Receive Filter Length 2 */
#define UCIRRXFL1           (0x08)    /* IRDA Receive Filter Length 1 */
#define UCIRRXFL0           (0x04)    /* IRDA Receive Filter Length 0 */
#define UCIRRXPL            (0x02)    /* IRDA Receive Input Polarity */
#define UCIRRXFE            (0x01)    /* IRDA Receive Filter enable */

//#define res               (0x80)    /* reserved */
//#define res               (0x40)    /* reserved */
#define UCDELIM1            (0x20)    /* Break Sync Delimiter 1 */
#define UCDELIM0            (0x10)    /* Break Sync Delimiter 0 */
#define UCSTOE              (0x08)    /* Sync-Field Timeout error */
#define UCBTOE              (0x04)    /* Break Timeout error */
//#define res               (0x02)    /* reserved */
#define UCABDEN             (0x01)    /* Auto Baud Rate detect enable */

#define UCGCEN              (0x8000)  /* I2C General Call enable */
#define UCOA9               (0x0200)  /* I2C Own Address 9 */
#define UCOA8               (0x0100)  /* I2C Own Address 8 */
#define UCOA7               (0x0080)  /* I2C Own Address 7 */
#define UCOA6               (0x0040)  /* I2C Own Address 6 */
#define UCOA5               (0x0020)  /* I2C Own Address 5 */
#define UCOA4               (0x0010)  /* I2C Own Address 4 */
#define UCOA3               (0x0008)  /* I2C Own Address 3 */
#define UCOA2               (0x0004)  /* I2C Own Address 2 */
#define UCOA1               (0x0002)  /* I2C Own Address 1 */
#define UCOA0               (0x0001)  /* I2C Own Address 0 */

#define UCSA9               (0x0200)  /* I2C Slave Address 9 */
#define UCSA8               (0x0100)  /* I2C Slave Address 8 */
#define UCSA7               (0x0080)  /* I2C Slave Address 7 */
#define UCSA6               (0x0040)  /* I2C Slave Address 6 */
#define UCSA5               (0x0020)  /* I2C Slave Address 5 */
#define UCSA4               (0x0010)  /* I2C Slave Address 4 */
#define UCSA3               (0x0008)  /* I2C Slave Address 3 */
#define UCSA2               (0x0004)  /* I2C Slave Address 2 */
#define UCSA1               (0x0002)  /* I2C Slave Address 1 */
#define UCSA0               (0x0001)  /* I2C Slave Address 0 */

/************************************************************
* WATCHDOG TIMER
************************************************************/
#define __MSP430_HAS_WDT__            /* Definition to show that Module is available */

#define WDTCTL_               0x0120    /* Watchdog Timer Control */
#define WDTCTL (*(volatile uint16_t *)0x120)
/* The bit names have been prefixed with "WDT" */
#define WDTIS0              (0x0001)
#define WDTIS1              (0x0002)
#define WDTSSEL             (0x0004)
#define WDTCNTCL            (0x0008)
#define WDTTMSEL            (0x0010)
#define WDTNMI              (0x0020)
#define WDTNMIES            (0x0040)
#define WDTHOLD             (0x0080)

#define WDTPW               (0x5A00)

/* WDT-interval times [1ms] coded with Bits 0-2 */
/* WDT is clocked by fSMCLK (assumed 1MHz) */
#define WDT_MDLY_32         (WDTPW+WDTTMSEL+WDTCNTCL)                         /* 32ms interval (default) */
#define WDT_MDLY_8          (WDTPW+WDTTMSEL+WDTCNTCL+WDTIS0)                  /* 8ms     " */
#define WDT_MDLY_0_5        (WDTPW+WDTTMSEL+WDTCNTCL+WDTIS1)                  /* 0.5ms   " */
#define WDT_MDLY_0_064      (WDTPW+WDTTMSEL+WDTCNTCL+WDTIS1+WDTIS0)           /* 0.064ms " */
/* WDT is clocked by fACLK (assumed 32KHz) */
#define WDT_ADLY_1000       (WDTPW+WDTTMSEL+WDTCNTCL+WDTSSEL)                 /* 1000ms  " */
#define WDT_ADLY_250        (WDTPW+WDTTMSEL+WDTCNTCL+WDTSSEL+WDTIS0)          /* 250ms   " */
#define WDT_ADLY_16         (WDTPW+WDTTMSEL+WDTCNTCL+WDTSSEL+WDTIS1)          /* 16ms    " */
#define WDT_ADLY_1_9        (WDTPW+WDTTMSEL+WDTCNTCL+WDTSSEL+WDTIS1+WDTIS0)   /* 1.9ms   " */
/* Watchdog mode -> reset after expired time */
/* WDT is clocked by fSMCLK (assumed 1MHz) */
#define WDT_MRST_32         (WDTPW+WDTCNTCL)                                  /* 32ms interval (default) */
#define WDT_MRST_8          (WDTPW+WDTCNTCL+WDTIS0)                           /* 8ms     " */
#define WDT_MRST_0_5        (WDTPW+WDTCNTCL+WDTIS1)                           /* 0.5ms   " */
#define WDT_MRST_0_064      (WDTPW+WDTCNTCL+WDTIS1+WDTIS0)                    /* 0.064ms " */
/* WDT is clocked by fACLK (assumed 32KHz) */
#define WDT_ARST_1000       (WDTPW+WDTCNTCL+WDTSSEL)                          /* 1000ms  " */
#define WDT_ARST_250        (WDTPW+WDTCNTCL+WDTSSEL+WDTIS0)                   /* 250ms   " */
#define WDT_ARST_16         (WDTPW+WDTCNTCL+WDTSSEL+WDTIS1)                   /* 16ms    " */
#define WDT_ARST_1_9        (WDTPW+WDTCNTCL+WDTSSEL+WDTIS1+WDTIS0)            /* 1.9ms   " */

/* INTERRUPT CONTROL */
/* These two bits are defined in the Special Function Registers */
/* #define WDTIE               0x01 */
/* #define WDTIFG              0x01 */

/************************************************************
* Calibration Data in Info Mem
************************************************************/

#ifndef __DisableCalData

#define CALDCO_16MHZ_         0x10F8    /* DCOCTL  Calibration Data for 16MHz */
#define CALDCO_16MHZ (*(volatile uint8_t *)0x10f8)
#define CALBC1_16MHZ_         0x10F9    /* BCSCTL1 Calibration Data for 16MHz */
#define CALBC1_16MHZ (*(volatile uint8_t *)0x10f9)
#define CALDCO_12MHZ_         0x10FA    /* DCOCTL  Calibration Data for 12MHz */
#define CALDCO_12MHZ (*(volatile uint8_t *)0x10fa)
#define CALBC1_12MHZ_         0x10FB    /* BCSCTL1 Calibration Data for 12MHz */
#define CALBC1_12MHZ (*(volatile uint8_t *)0x10fb)
#define CALDCO_8MHZ_          0x10FC    /* DCOCTL  Calibration Data for 8MHz */
#define CALDCO_8MHZ (*(volatile uint8_t *)0x10fc)
#define CALBC1_8MHZ_          0x10FD    /* BCSCTL1 Calibration Data for 8MHz */
#define CALBC1_8MHZ (*(volatile uint8_t *)0x10fd)
#define CALDCO_1MHZ_          0x10FE    /* DCOCTL  Calibration Data for 1MHz */
#define CALDCO_1MHZ (*(volatile uint8_t *)0x10fe)
#define CALBC1_1MHZ_          0x10FF    /* BCSCTL1 Calibration Data for 1MHz */
#define CALBC1_1MHZ (*(volatile uint8_t *)0x10ff)

#endif /* #ifndef __DisableCalData */


/************************************************************
* Interrupt Vectors (offset from 0xFFE0)
************************************************************/

#define PORT1_VECTOR        (0x0004)  /* 0xFFE4 Port 1 */
#define PORT2_VECTOR        (0x0006)  /* 0xFFE6 Port 2 */
#define ADC10_VECTOR        (0x000A)  /* 0xFFEA ADC10 */
#define USCIAB0TX_VECTOR    (0x000C)  /* 0xFFEC USCI A0/B0 Transmit */
#define USCIAB0RX_VECTOR    (0x000E)  /* 0xFFEE USCI A0/B0 Receive */
#define TIMER0_A1_VECTOR    (0x0010)  /* 0xFFF0 Timer0)A CC1, TA0 */
#define TIMER0_A0_VECTOR    (0x0012)  /* 0xFFF2 Timer0_A CC0 */
#define WDT_VECTOR          (0x0014) /* 0xFFF4 Watchdog Timer */
#define COMPARATORA_VECTOR  (0x0016) /* 0xFFF6 Comparator A */
#define TIMER1_A1_VECTOR    (0x0018) /* 0xFFF8 Timer1_A CC1-4, TA1 */
#define TIMER1_A0_VECTOR    (0x001A) /* 0xFFFA Timer1_A CC0 */
#define NMI_VECTOR          (0x001C) /* 0xFFFC Non-maskable */
#define RESET_VECTOR        (0x001E) /* 0xFFFE Reset [Highest Priority] */

/************************************************************
* End of Modules
************************************************************/
#ifdef __cplusplus
}
#endif /* extern "C" */

#endif /* #ifndef __MSP430G2553 */

