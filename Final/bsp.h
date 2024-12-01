#ifndef _bsp_H
#define _bsp_H
#include "msp430g2553.h"
//################################BSP FILE######################################
//---------------------------------MSP2553-------------------------------------
#define  RAMcode           0x200
#define  FlashCode         0xC000
#define  pushToStack       push
//Timer PB0
#define  TIMERPB0VECTOR    TIMER0_A0_VECTOR
#define  TIMERA0Ctrl         &TA0CTL    
#define  TIMERA0CaCoCtrl     &TA0CCTL0  
#define  TIMERA0CaCoVal      &TA0CCR0 
//Timer PB1
#define  TIMERPB1VECTOR    TIMER1_A1_VECTOR
#define  TIMERA1Ctrl          &TA1CTL   
#define  TIMERA1CaCoCtrl      &TA1CCTL2
#define  TIMERACCR            &TA1CCR2
#define  TIMERIV              &TA1IV
//Pulse
#define  PulseBTN             BIT4
//------------BUTTONS----------------
#define   PBsArrPort        &P2IN
#define   PBsArrIntPend     &P2IFG
#define   PBsArrIntEn       &P2IE
#define   PBsArrIntEdgeSel  &P2IES
#define   PBsArrPortSel     &P2SEL
#define   PBsArrPortDir     &P2DIR
#define   PBsOut            &P2OUT  
//---------------LCD-----------------
//***************P1******************   
#define   LCDIn             &P1IN
#define   LCDFlag           &P1IFG
#define   LCDEn             &P1IE
#define   LCDEdgeSel        &P1IES
#define   LCDSel            &P1SEL
#define   LCDDir            &P1DIR
#define   LCDOut            &P1OUT 

//***************P2****************** 
#define   LCDCntIn          &P2IN
#define   LCDCntFlag        &P2IFG
#define   LCDCntEn          &P2IE
#define   LCDCntEdgeSel     &P2IES
#define   LCDCntSel         &P2SEL
#define   LCDCntDir         &P2DIR
#define   LCDCntOut         &P2OUT

#endif