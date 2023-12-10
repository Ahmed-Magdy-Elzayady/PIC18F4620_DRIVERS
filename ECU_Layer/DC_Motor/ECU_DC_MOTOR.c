#include "ECU_DC_MOTOR.h"






Std_ReturnType DC_MOTOR_INIT(const dc_motor_config_t *_dc_motor){
    
    Std_ReturnType ret=E_NOT_OK;
    if(NULL==_dc_motor){
        
        ret=E_NOT_OK;
    }
    else {
        
        GPIO_SET_PIN_DIRECTION(&(_dc_motor->dc_motor_cfg[0]));
         GPIO_SET_PIN_DIRECTION(&(_dc_motor->dc_motor_cfg[1]));
        
    }
    
    
    return ret;
    
}


Std_ReturnType DC_MOTOR_TURN_RIGHT(const dc_motor_config_t *_dc_motor){
    
    
    Std_ReturnType ret=E_NOT_OK;
    if(NULL==_dc_motor){
        
        ret=E_NOT_OK;
    }
    else {
        
        GPIO_SET_PIN_VALUE(&(_dc_motor->dc_motor_cfg[0]),GPIO_HIGH);
        GPIO_SET_PIN_VALUE(&(_dc_motor->dc_motor_cfg[1]),GPIO_LOW);
        
        
          ret=E_OK;
    }
    return ret;
    
}
Std_ReturnType DC_MOTOR_TURN_LEFT(const dc_motor_config_t *_dc_motor){
    
    
    Std_ReturnType ret=E_NOT_OK;
    if(NULL==_dc_motor){
        
        ret=E_NOT_OK;
    }
    else {
        
        GPIO_SET_PIN_VALUE(&(_dc_motor->dc_motor_cfg[0]),GPIO_LOW);
        GPIO_SET_PIN_VALUE(&(_dc_motor->dc_motor_cfg[1]),GPIO_HIGH);
        
          ret=E_OK;
    }
    return ret;
    
    
}
Std_ReturnType DC_MOTOR_STOP(const dc_motor_config_t *_dc_motor){
    
    
    
    Std_ReturnType ret=E_NOT_OK;
    if(NULL==_dc_motor){
        
        ret=E_NOT_OK;
    }
    else {
       GPIO_SET_PIN_VALUE(&(_dc_motor->dc_motor_cfg[0]),GPIO_LOW);
          GPIO_SET_PIN_VALUE(&(_dc_motor->dc_motor_cfg[1]),GPIO_LOW);
       
        ret=E_OK;
    }
    
    
    return ret;
    
    
    
}
