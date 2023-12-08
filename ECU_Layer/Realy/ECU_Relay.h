/* 
 * File:   ECU_Relay.h
 * Author: FuTuRe
 *
 * Created on December 8, 2023, 6:19 PM
 */

#ifndef ECU_RELAY_H
#define	ECU_RELAY_H
/*Include Section*/
#include"ECU_Realy_cfg.h"
#include"../../MCAL_Layer/GPIO/MCAL_GPIO.h"

/*Macro function*/



/*Macros declaration*/

#define RELAY_ON                    0x01
#define RELAY_OFF                   0x00

/*Datatype declaration*/

typedef struct {
    uint8_tt pin : 3;
    uint8_tt port : 3;
    uint8_tt status : 1;
    uint8_tt reserved : 1;
} relay_t;


/*Function Declaration*/

Std_ReturnType REALY_INIT(const relay_t *_relay);
Std_ReturnType REALY_SET_ON(const relay_t *_relay);
Std_ReturnType RELAY_SET_OFF(const relay_t *_relay);






#endif	/* ECU_RELAY_H */

