#ifndef __B_CONFIG_H__ 
#define __B_CONFIG_H__ 


#define HW_VERSION 211212
#define FW_VERSION 80106
#define FW_NAME "BabyOS"
#define TICK_FRQ_HZ 1000
#define VENDOR_UBUNTU 1
#define PCF8574_DEFAULT_OUTPUT 0
#define MATRIX_KEYS_ROWS 4
#define MATRIX_KEYS_COLUMNS 4
#define ESP12F_UART_RX_BUF_LEN 1024
#define ESP12F_CMD_BUF_LEN 128
#define ESP12F_CMD_TIMEOUT 5000
#define RS485_RX_BUF_LEN 128
#define RS485_RX_IDLE_MS 50
#define _485_USE_CALLBACK 1
#define _BOS_MODULES_ENABLE 1
#define _NETIF_ENABLE 1
#define REMOTE_ADDR_LEN_MAX 128
#define CONNECT_RECVBUF_MAX 10240
#define SERVER_MAX_CONNECTIONS 2
#define _SSL_ENABLE 1
#define _CJSON_ENABLE 1
#define CJSON_MEM_USE_BMALLOC 1
#define _HTTP_PARSER_ENABLE 1
#define _MBEDTLS_ENABLE 1
#define MBEDTLS_CONFIG_FILE "b_mbedtls_config.h"
#define MBEDTLS_DEBUG_LEVEL 1
#define _DEBUG_ENABLE 1
#define LOG_LEVEL_ALL 1
#define LOG_BUF_SIZE 100000
#define _LOG_VIA_UART 1
#define LOG_UART 0
#define _MEMP_ENABLE 1
#define MEMP_MAX_SIZE 102400
#define _BOS_SERVICES_ENABLE 1
#define _TCPIP_SERVICE_ENABLE 1
#define _NTP_SERVER_1 "ntp1.aliyun.com"
#define _NTP_SERVER_2 "ntp2.aliyun.com"
#define _NTP_SERVER_3 "ntp3.aliyun.com"
#define _HTTP_HOST_LEN_MAX 64
#define _HTTP_PATH_LEN_MAX 128


#include "b_type.h" 

#endif 

