 /******************************************************************************
 *
 * Module: Adc
 *
 * File Name: Adc.h
 *
 * Description: Header file for esp32 Microcontroller - Adc Driver
 *
 * Author: Mohammed Alaa
 ******************************************************************************/
#ifndef ADC_H
#define ADC_H

#include "driver/adc.h"
#include "esp_adc_cal.h"
/* Id for the company in the AUTOSAR
 * for example Mohammed Alaa's ID = 111 :) */
#define ADC_VENDOR_ID    (111U)

/* ADC Module Id */
#define ADC_MODULE_ID    (123U)

/* ADC Instance Id */
#define ADC_INSTANCE_ID  (0U)

/*
 * Module Version 1.0.0
 */
#define ADC_SW_MAJOR_VERSION           (1U)
#define ADC_SW_MINOR_VERSION           (0U)
#define ADC_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.3.1
 */
#define ADC_AR_RELEASE_MAJOR_VERSION   (4U)
#define ADC_AR_RELEASE_MINOR_VERSION   (0U)
#define ADC_AR_RELEASE_PATCH_VERSION   (3U)

/* Standard AUTOSAR types */
#include "../../utilities/Std_Types.h"
/* AUTOSAR checking between Std Types and ADC Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != ADC_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != ADC_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != ADC_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif



/*  pre compile Configuration files */
#include "../Adc1/Adc_Cfg.h"
/* AUTOSAR checking between Adc_Cfg and ADC Modules */
#if ((ADC_AR_RELEASE_MAJOR_VERSION != ADC_CFG_AR_RELEASE_MAJOR_VERSION)\
 ||  (ADC_AR_RELEASE_MINOR_VERSION != ADC_CFG_AR_RELEASE_MINOR_VERSION)\
 ||  (ADC_AR_RELEASE_PATCH_VERSION != ADC_CFG_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Adc_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Dio_Cfg.h and Dio.h files */
#if ((ADC_CFG_SW_MAJOR_VERSION != ADC_SW_MAJOR_VERSION)\
 ||  (ADC_CFG_SW_MINOR_VERSION != ADC_SW_MINOR_VERSION)\
 ||  (ADC_CFG_SW_PATCH_VERSION != ADC_SW_PATCH_VERSION))
  #error "The SW version of Adc_Cfg.h does not match the expected version"
#endif
/* Port Pre-Compile Configuration Header file */
#include "../../utilities/Compiler.h"

/* AUTOSAR Version checking between Port_Cfg.h and Port.h files */
#if ((COMPILER_AR_RELEASE_MAJOR_VERSION != ADC_AR_RELEASE_MAJOR_VERSION)\
 ||  (COMPILER_AR_RELEASE_MINOR_VERSION != ADC_AR_RELEASE_MINOR_VERSION)\
 ||  (COMPILER_AR_RELEASE_PATCH_VERSION != ADC_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Compiler.h does not match the expected version"
#endif

/* Software Version checking between Port_Cfg.h and Port.h files */
#if ((COMPILER_SW_MAJOR_VERSION != ADC_SW_MAJOR_VERSION)\
 ||  (COMPILER_SW_MINOR_VERSION != ADC_SW_MINOR_VERSION)\
 ||  (COMPILER_SW_PATCH_VERSION != ADC_SW_PATCH_VERSION))
  #error "The SW version of Compiler.h does not match the expected version"
#endif

/* Non AUTOSAR files */
#include "../../utilities/Common_Macros.h"



/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

typedef struct
{
	adc1_channel_t channel;
	adc_atten_t attenuation;
//	adc_bits_width_t precision;
}Adc_Config_t;

/*******************************************************************************
 *                           Function prototype                                *
 *******************************************************************************/
void Adc_Init(void);
void Adc_Read_Group_Raw(uint32 raw[]);
void Adc_Read_Group_Voltage(uint32 voltage[]);

/*******************************************************************************
 *                              Global variable                                *
 *******************************************************************************/

extern const adc_bits_width_t precision;

extern const Adc_Config_t Adc_cfg[NUMBER_OF_CHANNEL_GROUPS];


#endif
