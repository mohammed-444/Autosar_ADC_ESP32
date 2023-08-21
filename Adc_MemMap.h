#ifndef ADC_CFG_HEADER
#define ADC_CFG_HEADER

/*-------------------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------------------ADC_REGS_ADDERESS----------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/


/*-------------------------------------------------------------------*/
/*---------------------SAR ADC control register----------------------*/
/*-------------------------------------------------------------------*/

#define SENS_SAR_START_FORCE_REG 		0x3FF4882C


#define SENS_SAR1_STOP_START_POSITION				23U			/*Stop SAR ADC1 conversion. (R/W)*/
#define SENS_SAR1_STOP_INTERVAL_SIZE				1U

#define SENS_SAR2_STOP_START_POSITION 				22U			/*Stop SAR ADC2 conversion. (R/W)*/
#define SENS_SAR2_STOP_INTERVAL_SIZE				1U

#define SENS_PC_INIT_START_POSITION					11U			/* Initialized PC for ULP coprocessor. (R/W)*/
#define SENS_PC_INIT_INTERVAL_SIZE					11U

#define SENS_ULP_CP_START_TOP_START_POSITION		9U			/*START_TOP Write 1 to start ULP coprocessor; it is active only when reg_ulp_cp_force_start_top = 1. (R/W)*/
#define SENS_ULP_CP_START_TOP_INTERVAL_SIZE			1U

#define SENS_ULP_CP_FORCE_START_TOP_START_POSITION 	8U			/*1: ULP coprocessor is started by SW, 0: ULP coprocessor is started by timer. (R/W)*/
#define SENS_ULP_CP_FORCE_START_TOP_INTERVAL_SIZE	1U

#define SENS_SAR2_PWDET_CCT_START_POSITION 			5U			/*SAR2_PWDET_CCT, PA power detector capacitance tuning. (R/W)*/
#define SENS_SAR2_PWDET_CCT_INTERVAL_SIZE			3U

#define SENS_SAR2_EN_TEST_START_POSITION			4U			/*SAR2_EN_TEST is active only when reg_sar2_dig_force = 0. (R/W)*/
#define SENS_SAR2_EN_TEST_INTERVAL_SIZE				1U

#define SENS_SAR2_BIT_WIDTH_START_POSITION 			2U			/*Bit width of SAR ADC2, 00: 9 bits, 01: 10 bits, 10: 11 bits, 11: 12 bits.(R/W)*/
#define SENS_SAR2_BIT_WIDTH_INTERVAL_SIZE			2U

#define SENS_SAR1_BIT_WIDTH_START_POSITION 			0U			/*Bit width of SAR ADC1, 00: 9 bits, 01: 10 bits, 10: 11 bits, 11: 12 bits. (R/W)*/
#define SENS_SAR1_BIT_WIDTH_INTERVAL_SIZE			2U

/*-------------------------------------------------------------------*/
/*---------------------SAR ADC1 control registers--------------------*/
/*-------------------------------------------------------------------*/
#define SENS_SAR_READ_CTRL_REG  		0x3FF48800

#define SENS_SAR1_DATA_INV_START_POSITION  	 28U		/*Invert SAR ADC1 data. (R/W)*/
#define SENS_SAR1_DATA_INV_INTERVAL_SIZE	 1U

#define SENS_SAR1_DIG_FORCE_START_POSITION   27U		/*1: SAR ADC1 controlled by DIG ADC1 CTR, 0: SAR ADC1 controlled by RTC ADC1 CTRL. (R/W)*/
#define SENS_SAR1_DIG_FORCE_INTERVAL_SIZE	 1U

#define SENS_SAR1_SAMPLE_BIT_START_POSITION  16U		/*Bit width of SAR ADC1, 00: for 9-bit, 01: for 10-bit, 10: for 11-bit, 11: for 12-bit. (R/W)*/
#define SENS_SAR1_SAMPLE_BIT_INTERVAL_SIZE	 2U

#define SENS_SAR1_SAMPLE_CYCLE_START_POSITION 8U 		/*Sample cycles for SAR ADC1. (R/W)*/
#define SENS_SAR1_SAMPLE_CYCLE_INTERVAL_SIZE  8U

#define SENS_SAR1_CLK_DIV_START_POSITION      0U		/*Clock divider. (R/W)*/
#define SENS_SAR1_CLK_DIV_INTERVAL_SIZE		  8U


/*--------------------------------------------------*/
#define SENS_SAR_MEAS_START1_REG  		0x3FF48854

#define SENS_SAR1_EN_PAD_FORCE_START_POSITION  		31U		/*1: SAR ADC1 pad enable bitmap is controlled by SW, 0: SAR ADC1 pad enable bitmap is controlled by ULP coprocessor. (R/W)*/
#define SENS_SAR1_EN_PAD_FORCE_INTERVAL_SIZE  		1U

#define SENS_SAR1_EN_PAD_START_POSITION  			19U		/*SAR ADC1 pad enable bitmap; active only when reg_sar1_en_pad_force = 1. (R/W)*/
#define SENS_SAR1_EN_PAD_INTERVAL_SIZE 				12U

#define SENS_MEAS1_START_FORCE_START_POSITION  		18U		/*1: SAR ADC1 controller (in RTC) is started by SW, 0: SAR ADC1 controller is started by ULP coprocessor. (R/W)*/
#define SENS_MEAS1_START_FORCE_INTERVAL_SIZE 		1U

#define SENS_MEAS1_START_SAR_START_POSITION  		17U		/*SAR ADC1 controller (in RTC) starts conversion; active only when reg_meas1_start_force = 1. (R/W)*/
#define SENS_MEAS1_START_SAR_INTERVAL_SIZE			1U

#define SENS_MEAS1_DONE_SAR_START_POSITION  		16U		/*SAR ADC1 conversion-done indication. (RO)*/
#define SENS_MEAS1_DONE_SAR_INTERVAL_SIZE			1U

#define SENS_MEAS1_DATA_SAR_START_POSITION  		0U		/*SAR ADC1 data. (RO)*/
#define SENS_MEAS1_DATA_SAR_INTERVAL_SIZE 			16U

/*-------------------------------------------------------------------*/
/*---------------------SAR ADC2 control registers--------------------*/
/*-------------------------------------------------------------------*/

#define SENS_SAR_READ_CTRL2_REG  		0x3FF48890

#define SENS_SAR2_DATA_INV_START_POSITION  	 29U		/*Invert SAR ADC2 data. (R/W)*/
#define SENS_SAR2_DATA_INV_INTERVAL_SIZE	 1U

#define SENS_SAR2_DIG_FORCE_START_POSITION   28U		/*1: SAR ADC2 controlled by DIG ADC2 CTR, 0: SAR ADC1 controlled by RTC ADC1 CTRL. (R/W)*/
#define SENS_SAR2_DIG_FORCE_INTERVAL_SIZE	 1U

#define SENS_SAR2_SAMPLE_BIT_START_POSITION  16U		/*Bit width of SAR ADC2, 00: for 9-bit, 01: for 10-bit, 10: for 11-bit, 11: for 12-bit. (R/W)*/
#define SENS_SAR2_SAMPLE_BIT_INTERVAL_SIZE	 2U

#define SENS_SAR2_SAMPLE_CYCLE_START_POSITION 8U 		/*Sample cycles for SAR ADC2. (R/W)*/
#define SENS_SAR2_SAMPLE_CYCLE_INTERVAL_SIZE  8U

#define SENS_SAR2_CLK_DIV_START_POSITION      0U		/*Clock divider. (R/W)*/
#define SENS_SAR2_CLK_DIV_INTERVAL_SIZE		  8U
/*---------------------------------------------------*/
#define SENS_SAR_MEAS_START2_REG  		0x3FF48894

#define SENS_SAR2_EN_PAD_FORCE_START_POSITION  		31U		/*1: SAR ADC2 pad enable bitmap is controlled by SW, 0: SAR ADC1 pad enable bitmap is controlled by ULP coprocessor. (R/W)*/
#define SENS_SAR2_EN_PAD_FORCE_INTERVAL_SIZE  		1U

#define SENS_SAR2_EN_PAD_START_POSITION  			19U		/*SAR ADC2 pad enable bitmap; active only when reg_sar2_en_pad_force = 1. (R/W)*/
#define SENS_SAR2_EN_PAD_INTERVAL_SIZE 				12U

#define SENS_MEAS2_START_FORCE_START_POSITION  		18U		/*1: SAR ADC2 controller (in RTC) is started by SW, 0: SAR ADC1 controller is started by ULP coprocessor. (R/W)*/
#define SENS_MEAS2_START_FORCE_INTERVAL_SIZE 		1U

#define SENS_MEAS2_START_SAR_START_POSITION  		17U		/*SAR ADC2 controller (in RTC) starts conversion; active only when reg_meas1_start_force = 1. (R/W)*/
#define SENS_MEAS2_START_SAR_INTERVAL_SIZE			1U

#define SENS_MEAS2_DONE_SAR_START_POSITION  		16U		/*SAR ADC2 conversion-done indication. (RO)*/
#define SENS_MEAS2_DONE_SAR_INTERVAL_SIZE			1U

#define SENS_MEAS2_DATA_SAR_START_POSITION  		0U		/*SAR ADC2 data. (RO)*/
#define SENS_MEAS1_DATA_SAR_INTERVAL_SIZE 			16U
/*-------------------------------------------------------------------*/
/*------------------ULP coprocessor configuration register-----------*/
/*-------------------------------------------------------------------*/
#define SENS_ULP_CP_SLEEP_CYC0_REG 		0x3FF48818			/*Sleep cycles for ULP coprocessor timer. (R/W)*/
/*-------------------------------------------------------------------*/
/*---------------Pad attenuation configuration registers-------------*/
/*-------------------------------------------------------------------*/
#define SENS_SAR_ATTEN1_REG 	 		0x3FF48834		/* 2-bit attenuation for each pad, 11: 1 dB, 10: 6 dB, 01: 3 dB, 00: 0 dB, [1:0] is used for ADC1_CH0, [3:2] is used for ADC1_CH1, etc. (R/W)*/
#define SENS_SAR_ATTEN2_REG  			0x3FF48838		/* 2-bit attenuation for each pad, 11: 1 dB, 10: 6 dB, 01: 3 dB, 00: 0 dB, [1:0] is used for ADC2s_CH0, [3:2] is used for ADC2_CH1, etc. (R/W)*/
/*-------------------------------------------------------------------*/
/*--------SAR ADC1 and ADC2 common configuration registers-----------*/
/*-------------------------------------------------------------------*/
#define APB_SARADC_CTRL_REG 		 	0x60002610

#define APB_SARADC_DATA_TO_I2S_START_POSITION  		26U	/*1: I2S input data is from SAR ADC (for DMA), 0: I2S input data is from GPIO matrix. (R/W)*/
#define APB_SARADC_DATA_TO_I2S_INTERVAL_SIZE		1U

#define APB_SARADC_DATA_SAR_SEL_START_POSITION  	25U	/*1: sar_sel will be coded by the MSB of the 16-bit output data, in this case, the resolution should not contain more than 11 bits; 0: using 12-bit SAR ADC resolution.(R/W)*/
#define APB_SARADC_DATA_SAR_SEL_INTERVAL_SIZE		1U

#define APB_SARADC_SAR2_PATT_P_CLEAR_START_POSITION 24U	/*Clears the pointer of pattern table for DIG ADC2 CTRL.(R/W)*/
#define APB_SARADC_SAR2_PATT_P_CLEAR_INTERVAL_SIZE	1U

#define APB_SARADC_SAR1_PATT_P_CLEAR_START_POSITION 23U /*Clears the pointer of pattern table for DIG ADC1 CTRL.(R/W)*/
#define APB_SARADC_SAR1_PATT_P_CLEAR_INTERVAL_SIZE	1U

#define APB_SARADC_SAR2_PATT_LEN_START_POSITION  	19U	/*SAR ADC2, 0 - 15 means pattern table length of 1 - 16. (R/W)*/
#define APB_SARADC_SAR2_PATT_LEN_INTERVAL_SIZE		4U

#define APB_SARADC_SAR1_PATT_LEN_START_POSITION  	15U	/*SAR ADC1, 0 - 15 means pattern table length of 1 - 16. (R/W)*/
#define APB_SARADC_SAR1_PATT_LEN_INTERVAL_SIZE		4U

#define APB_SARADC_SAR_CLK_DIV_START_POSITION  		7U	/*SAR clock divider. (R/W)*/
#define APB_SARADC_SAR_CLK_DIV_INTERVAL_SIZE		8U

#define APB_SARADC_SAR_CLK_GATED_START_POSITION  	6U	/*Reserved. Please initialize to 0b1 (R/W)*/
#define APB_SARADC_SAR_CLK_GATED_INTERVAL_SIZE		1U

#define APB_SARADC_SAR_SEL_START_POSITION  			5U	/*0: SAR1, 1: SAR2, this setting is applicable in the single SAR mode. (R/W)*/
#define APB_SARADC_SAR_SEL_INTERVAL_SIZE			1U

#define APB_SARADC_WORK_MODE_START_POSITION  		3U	/*0: single mode, 1: double mode, 2: alternate mode. (R/W)*/
#define APB_SARADC_WORK_MODE_INTERVAL_SIZE			2U

#define APB_SARADC_SAR2_MUX_START_POSITION  		2U	/*1: SAR ADC2 is controlled by DIG ADC2 CTRL, 0: SAR ADC2 is controlled by PWDET CTRL. (R/W)*/
#define APB_SARADC_SAR2_MUX_INTERVAL_SIZE			1U

#define APB_SARADC_START_START_POSITION  			1U	/*Reserved. Please initialize to 0 (R/W)*/
#define APB_SARADC_START_INTERVAL_SIZE				1U

#define APB_SARADC_START_FORCE_START_POSITION  		0U	/*Reserved. Please initialize to 0 (R/W)*/
#define APB_SARADC_START_FORCE_INTERVAL_SIZE		1U

/*-------------------------------------------------*/
#define APB_SARADC_CTRL2_REG 		 	0x60002614

#define APB_SARADC_SAR2_INV_START_POSITION  		10U	/*1: data to DIG ADC2 CTRL is inverted, 0: data is not inverted.(R/W)*/
#define APB_SARADC_SAR2_INV_INTERVAL_SIZE			1U

#define APB_SARADC_SAR1_INV_START_POSITION  		9U	/*1: data to DIG ADC1 CTRL is inverted, 0: data is not inverted.(R/W)*/
#define APB_SARADC_SAR1_INV_INTERVAL_SIZE         	1U

#define APB_SARADC_MAX_MEAS_NUM_START_POSITION  	1U	/*Max conversion number.(R/W)*/
#define APB_SARADC_MAX_MEAS_NUM_INTERVAL_SIZE		8U

#define APB_SARADC_MEAS_NUM_LIMIT_START_POSITION  	0U	/*Reserved. Please initialize to 0b1 (R/W)*/
#define APB_SARADC_MEAS_NUM_LIMIT_INTERVAL_SIZE		1U

/*-------------------------------------------------*/
#define APB_SARADC_FSM_REG 			 	0x60002618		/*Sample cycles.(R/W)*/
/*-------------------------------------------------------------------*/
/*-------------------SAR ADC1 pattern table registers----------------*/
/*-------------------------------------------------------------------*/
#define APB_SARADC_SAR1_PATT_TAB1_REG  	0x6000261C/*Pattern tables 0 - 3 for SAR ADC1, one byte for each pattern table: [31:28] pattern0_channel, [27:26] pattern0_bit_width, [25:24] pattern0_attenuation, [23:20] pattern1_channel, etc. (R/W)*/
#define APB_SARADC_SAR1_PATT_TAB2_REG  	0x60002620/*Pattern tables 4 - 7 for SAR ADC1, one byte for each pattern table: [31:28] pattern4_channel, [27:26] pattern4_bit_width, [25:24] pattern4_attenuation, [23:20] pattern5_channel, etc. (R/W)*/
#define APB_SARADC_SAR1_PATT_TAB3_REG  	0x60002624/*Pattern tables 8 - 11 for SAR ADC1, one byte for each pattern table: [31:28] pattern8_channel, [27:26] pattern8_bit_width, [25:24] pattern8_attenuation, [23:20] pattern9_channel, etc. (R/W)*/
#define APB_SARADC_SAR1_PATT_TAB4_REG 	0x60002628/*Pattern tables 12 - 15 for SAR ADC1, one byte for each pattern table: [31:28] pattern12_channel, [27:26] pattern12_bit_width, [25:24] pattern12_attenuation, [23:20] pattern13_channel, etc. (R/W)*/
/*-------------------------------------------------------------------*/
/*-------------------SAR ADC2 pattern table registers----------------*/
/*-------------------------------------------------------------------*/
#define APB_SARADC_SAR2_PATT_TAB1_REG 	0x6000262C/*Pattern tables 0 - 3 for SAR ADC2, one byte for each pattern table: [31:28] pattern0_channel, [27:26] pattern0_bit_width, [25:24] pattern0_attenuation, [23:20] pattern1_channel, etc. (R/W)*/
#define APB_SARADC_SAR2_PATT_TAB2_REG 	0x60002630/*Pattern tables 4 - 7 for SAR ADC2, one byte for each pattern table: [31:28] pattern4_channel, [27:26] pattern4_bit_width, [25:24] pattern4_attenuation, [23:20] pattern5_channel, etc. (R/W)*/
#define APB_SARADC_SAR2_PATT_TAB3_REG   0x60002634/*Pattern tables 8 - 11 for SAR ADC2, one byte for each pattern table: [31:28] pattern8_channel, [27:26] pattern8_bit_width, [25:24] pattern8_attenuation, [23:20] pattern9_channel, etc. (R/W)*/
#define APB_SARADC_SAR2_PATT_TAB4_REG   0x60002638/*Pattern tables 12 - 15 for SAR ADC2, one byte for each pattern table: [31:28] pattern12_channel, [27:26] pattern12_bit_width, [25:24] pattern12_attenuation, [23:20] pattern13_channel, etc. (R/W)*/

#endif
