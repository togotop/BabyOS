/**
 *!
 * \file        b_mod_ssl.h
 * \version     v0.0.1
 * \date        2020/05/16
 * \author      Bean(notrynohigh@outlook.com)
 *******************************************************************************
 * @attention
 *
 * Copyright (c) 2020 Bean
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *******************************************************************************
 */
#ifndef __B_MOD_SSL_H__
#define __B_MOD_SSL_H__

#ifdef __cplusplus
extern "C" {
#endif

/*Includes ----------------------------------------------*/
#include <stdint.h>

#include "b_config.h"

#if (defined(_SSL_ENABLE) && (_SSL_ENABLE == 1))
#include "thirdparty/mbedtls/bos_mbedtls/mbedtls/bignum.h"
#include "thirdparty/mbedtls/bos_mbedtls/mbedtls/ctr_drbg.h"
#include "thirdparty/mbedtls/bos_mbedtls/mbedtls/debug.h"
#include "thirdparty/mbedtls/bos_mbedtls/mbedtls/entropy.h"
#include "thirdparty/mbedtls/bos_mbedtls/mbedtls/platform.h"
#include "thirdparty/mbedtls/bos_mbedtls/mbedtls/rsa.h"
#include "thirdparty/mbedtls/bos_mbedtls/mbedtls/ssl.h"
#include "thirdparty/mbedtls/bos_mbedtls/mbedtls/x509.h"

/**
 * \addtogroup BABYOS
 * \{
 */

/**
 * \addtogroup MODULES
 * \{
 */

/**
 * \addtogroup SSL
 * \{
 */

/**
 * \defgroup SSL_Exported_TypesDefinitions
 * \{
 */
typedef struct
{
    const uint8_t *pbuf;
    uint32_t       len;
} bSSLCert_t;

typedef void *bSSLHandle_t;

/**
 * \}
 */

/**
 * \defgroup SSL_Exported_Defines
 * \{
 */
#define SSLHANDLE_IS_INVALID(h) ((h) == NULL)
/**
 * \}
 */

/**
 * \defgroup SSL_Exported_Functions
 * \{
 */
bSSLHandle_t bSSLInit(const char *hostname, bSSLCert_t *cert);
int          bSSLDeinit(bSSLHandle_t ssl);

/**
 * \brief
 * \param ssl
 * \param sockfd
 * \return int (< 0: error) (0: success) (1: in progress)
 */
int bSSLHandshake(bSSLHandle_t ssl, int sockfd);

int bSSLRecv(bSSLHandle_t ssl, uint8_t *pbuf, uint16_t buf_len, uint16_t *rlen);
int bSSLSend(bSSLHandle_t ssl, uint8_t *pbuf, uint16_t buf_len, uint16_t *wlen);

/**
 * \}
 */

/**
 * \}
 */

/**
 * \}
 */

/**
 * \}
 */

#endif

#ifdef __cplusplus
}
#endif

#endif

/************************ Copyright (c) 2020 Bean *****END OF FILE****/
