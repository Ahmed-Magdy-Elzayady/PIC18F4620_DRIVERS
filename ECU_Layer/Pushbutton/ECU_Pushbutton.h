/* 
 * File:   ECU_Pushbutton.h
 * Author: FuTuRe
 *
 * Created on December 2, 2023, 5:11 PM
 */

#ifndef ECU_PUSHBUTTON_H
#define	ECU_PUSHBUTTON_H
/*include section*/

#include "ECU_PushButton_cfg.h"
#include "./../../MCAL_Layer/GPIO/MCAL_GPIO.h"



/*Macro Declaration*/


/*Function like macro*/

/*data type declaration*/

typedef enum {
    
    BUTTON_NOT_PRESED=0,
    BUTTON_PRESED
}button_status_t;

typedef enum{
    ACTIVE_LOW=0,
    ACTIVE_HIGH
}button_connection_type_t;


typedef struct {
    
    pin_config_tt btn_pin ;
    button_status_t btn_status;
    button_connection_type_t btn_connection;
} button_config_t;

/*function declaration */
Std_ReturnType PUSH_BUTTON_INIT(const button_config_t *_button_config);
Std_ReturnType PUSH_BUTTON_READ_STATUS(const button_config_t *_button_config,button_status_t *_btn_status);


#endif	/* ECU_PUSHBUTTON_H */

