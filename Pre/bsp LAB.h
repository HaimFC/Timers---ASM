#ifndef _bsp_H
#define _bsp_H

#include "msp430XG46X.h"

//################################BSP FILE######################################

//---------------------------------MSP46019-------------------------------------
#define  RAMcode           0x1100
#define  FlashCode         0x2100
#define  pushToStack       push.w
//Timer PB0
#define  TIMERPB0VECTOR    TIMERA0_VECTOR
#define  TIMERA0Ctrl         &TA0CTL    
#define  TIMERA0CaCoCtrl     &TA0CCTL0  
#define  TIMERA0CaCoVal      &TA0CCR0
//Timer PB1
#define  TIMERPB1VECTOR    TIMERB1_VECTOR
#define  TIMERA1Ctrl         &TBCTL   
#define  TIMERA1CaCoCtrl     &TBCCTL2
#define  TIMERACCR            &TBCCR2
#define  TIMERIV              &TBIV
//Pulse
//kobi
#define  PulseBTN            #BIT3
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