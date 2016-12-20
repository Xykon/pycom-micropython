/*
 * Copyright (c) 2016, Pycom Limited.
 *
 * This software is licensed under the GNU GPL version 3 or any
 * later version, with permitted additional terms. For more information
 * see the Pycom Licence v1.0 document supplied with this file, or
 * available at https://www.pycom.io/opensource/licensing
 */

#ifndef PYCOM_CONFIG_H_
#define PYCOM_CONFIG_H_

/******************************************************************************
 DEFINE CONSTANTS
 ******************************************************************************/

/******************************************************************************
 DEFINE TYPES
 ******************************************************************************/
typedef struct {
    uint8_t lora_mac[8];
    uint32_t heartbeat_color[1];
    uint32_t error_color[1];
    uint8_t dummy[48];

} pycom_config_t;

/******************************************************************************
 DECLARE PUBLIC FUNCTIONS
 ******************************************************************************/
void config_init0 (void);

bool config_set_lora_mac (const uint8_t *mac);

void config_get_lora_mac (uint8_t *mac);

bool config_set_heartbeat_color (const uint32_t *hbc);

void config_get_heartbeat_color (uint32_t *hbc);

bool config_set_error_color (const uint32_t *errc);

void config_get_error_color (uint32_t *errc);


#endif /* PYCOM_CONFIG_H_ */
