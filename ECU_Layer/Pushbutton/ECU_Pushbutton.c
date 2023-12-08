/*
 * File:   ecu_button.c
 * Author: Ahmed
 *
 * Created on January 28, 2021, 7:00 PM
 */

#include "ECU_Pushbutton.h"

Std_ReturnType PUSH_BUTTON_INIT(const button_config_t *_button_config){
  Std_ReturnType ret = E_OK;
  if (NULL == _button_config){

    ret = E_NOT_OK;
  }
  else{
    GPIO_SET_PIN_DIRECTION(&(_button_config->btn_pin));
  }
  return ret;
}

Std_ReturnType PUSH_BUTTON_READ_STATUS(const button_config_t *_button_config, button_status_t *_btn_status){

  Std_ReturnType ret = E_NOT_OK;
  logic_tt pin_value=0;
  if (NULL == _button_config || NULL == _btn_status){
    ret = E_NOT_OK;
  }
  else{

    GPIO_READ_PIN_VALUE(&(_button_config->btn_pin),&pin_value);
    if (ACTIVE_HIGH == _button_config->btn_connection){
      if (GPIO_HIGH == pin_value){
        *_btn_status = BUTTON_PRESED;
      }
      else{
        *_btn_status = BUTTON_NOT_PRESED;
      }
    }
    else if (ACTIVE_LOW == _button_config->btn_connection){

      if (GPIO_HIGH == pin_value){

       *_btn_status = BUTTON_NOT_PRESED;
      }
      else{

       *_btn_status = BUTTON_PRESED;
      }
    }
    
    else{/*nothing*/}
    ret=E_OK;
  }
  return ret;
}