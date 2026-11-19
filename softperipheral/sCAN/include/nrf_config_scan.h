/*
 * Copyright (c) 2025 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef NRF_SCAN_CONFIG_H__
#define NRF_SCAN_CONFIG_H__

/**
 * @brief NRF_SCAN_ENABLED
 *
 * Boolean. Accepted values: 0 and 1.
 */
#ifndef NRF_SCAN_ENABLED
#define NRF_SCAN_ENABLED 0
#endif

/**
 * ,* @brief NRF_SCAN_RXFILTER_MAX_BUFFER_SIZE ,*
 * ,* Integer value. Maximum size of the RXFILTER buffer
 * ,*/
#ifndef NRF_SCAN_RXFILTER_MAX_BUFFER_SIZE
#define NRF_SCAN_RXFILTER_MAX_BUFFER_SIZE 4
#endif // NRF_SCAN_RXFILTER_MAX_BUFFER_SIZE

/**
 * @brief NRF_SCAN_MAX_DATA_LENGTH
 *
 * Integer value. Maximum number of bytes to send in a TX attempt
 */
#ifndef NRF_SCAN_MAX_DATA_LENGTH
#define NRF_SCAN_MAX_DATA_LENGTH 8
#endif // NRF_SCAN_MAX_DATA_LENGTH

/**
 * @brief NRF_SCAN_BARRIER_TIMEOUT_US
 *
 * Integer value. Maximum time in microseconds to wait for sCAN to acknowledge
 * a configuration, action or stop request before returning NRF_SCAN_ERROR_TIMEOUT.
 * Some requests are issued from interrupt context, so this is also the worst-case
 * time spent busy-waiting there.
 */
#ifndef NRF_SCAN_BARRIER_TIMEOUT_US
#define NRF_SCAN_BARRIER_TIMEOUT_US 20000
#endif // NRF_SCAN_BARRIER_TIMEOUT_US

#endif // NRF_SCAN_CONFIG_H__
