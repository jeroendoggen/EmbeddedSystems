/*****************************************************************************
* (c) Copyright  Actel Corporation. All rights reserved.
*
*ACE configuration .h file
*Created by Actel MSS_ACE Configurator Sat Mar 21 15:28:34 2015
*
*/

#ifndef ACE_HANDLES_H
#define ACE_HANDLES_H


#ifdef __cplusplus
extern "C" {
#endif

/*-----------------------------------------------------------------------------
*Analog input channel handles
*---------------------------------------------------------------------------*/
typedef enum {
    TM0_Voltage = 0,
    NB_OF_ACE_CHANNEL_HANDLES
} ace_channel_handle_t;

/*-----------------------------------------------------------------------------
*Flag Handles
*---------------------------------------------------------------------------*/
typedef enum {
    TM0_Voltage_over1p0v = 0,
    TM0_Voltage_over1p5v,
    TM0_Voltage_over2p0v,
    TM0_Voltage_over2p5v,
    NB_OF_ACE_FLAG_HANDLES
} ace_flag_handle_t;

/*-----------------------------------------------------------------------------
*Procedure Handles
*---------------------------------------------------------------------------*/
typedef enum {
    ADC0_MAIN = 0,
    ADC1_MAIN,
    NB_OF_ACE_PROCEDURE_HANDLES
} ace_procedure_handle_t;

#ifdef __cplusplus
}
#endif


#endif /* ACE_HANDLES_H*/
