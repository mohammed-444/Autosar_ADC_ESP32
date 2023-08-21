#include "Adc.h"

#include "Adc_MemMap.h"

#if (ADC_DEV_ERROR_DETECT == STD_ON)

#include "../../utilities/Det.h"
/* AUTOSAR Version checking between Det and Port Modules */
#if ((DET_AR_MAJOR_VERSION != ADC_AR_RELEASE_MAJOR_VERSION)\
 || (DET_AR_MINOR_VERSION != ADC_AR_RELEASE_MINOR_VERSION)\
 || (DET_AR_PATCH_VERSION != ADC_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif

#endif

/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------FUNCTIONS--------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
static esp_adc_cal_characteristics_t adc_chars;

void Adc_Init(void)
{
//	adc_power_on();

	adc1_config_width(precision);

	for (uint8 i = 0; i < NUMBER_OF_CHANNEL_GROUPS; ++i)
	{
		adc1_config_channel_atten(Adc_cfg[i].channel , Adc_cfg[i].attenuation);

		adc_gpio_init(ADC_UNIT_1, Adc_cfg[i].channel);
	}
	esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_11, precision, 0, &adc_chars);

}


void Adc_Read_Group_Raw(uint32 raw[])
{
	for (uint8 i = 0; i < NUMBER_OF_CHANNEL_GROUPS; ++i)
	{
		raw[i] = adc1_get_raw(Adc_cfg[i].channel);
	}
}

void Adc_Read_Group_Voltage(uint32 voltage[])
{
	for (uint8 i = 0; i < NUMBER_OF_CHANNEL_GROUPS; ++i)
	{
		voltage[i] = esp_adc_cal_raw_to_voltage(adc1_get_raw(Adc_cfg[i].channel), &adc_chars);
	}
}



