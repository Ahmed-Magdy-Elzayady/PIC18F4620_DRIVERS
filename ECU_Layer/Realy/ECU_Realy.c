#include "ECU_Relay.h"

/**
 * 
 * @param _relay
 * @return 
 */
Std_ReturnType REALY_INIT(const relay_t *_relay) {

    Std_ReturnType ret = E_OK;
    if (NULL == _relay) {
    } else {
        pin_config_tt relay_obj = {
            .port = _relay->port, .pin = _relay->pin,
            .logic = _relay->status, .direction = GPIO_OUTPUT
        };
        GPIO_SET_PIN_DIRECTION(&relay_obj);
        GPIO_SET_PIN_VALUE(&relay_obj, _relay->status);
    }
    return ret;
}

Std_ReturnType REALY_SET_ON(const relay_t *_relay) {
    Std_ReturnType ret = E_OK;
    if (NULL == _relay) {
        ret = E_NOT_OK;
    } else {

        pin_config_tt relay_obj = {
            .port = _relay->port, .pin = _relay->pin,
            .logic = _relay->status, .direction = GPIO_OUTPUT
        };

        GPIO_SET_PIN_VALUE(&relay_obj, GPIO_HIGH);

    }

    return ret;

}

Std_ReturnType RELAY_SET_OFF(const relay_t *_relay) {

    Std_ReturnType ret = E_OK;
    if (NULL == _relay) {
        ret = E_NOT_OK;
    } else {

        pin_config_tt relay_obj = {
            .port = _relay->port, .pin = _relay->pin,
            .logic = _relay->status, .direction = GPIO_OUTPUT
        };

        GPIO_SET_PIN_VALUE(&relay_obj, GPIO_LOW);

    }

    return ret;
}