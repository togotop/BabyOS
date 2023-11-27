#ifndef __B_CONFIG_H__ 
#define __B_CONFIG_H__ 


#define HW_VERSION 211212
#define FW_VERSION 80106
#define FW_NAME "BabyOS"
#define TICK_FRQ_HZ 1000
#define VENDOR_UBUNTU 1
#define _BOS_ALGO_ENABLE 1
#define _ALGO_BASE64_ENABLE 1
#define _ALGO_SHA1_ENABLE 1
#define _ALGO_SORT_ENABLE 1
#define _ALGO_UNICODE_ENABLE 1
#define _ALGO_MD5_ENABLE 1
#define _ALGO_CRC_ENABLE 1
#define _ALGO_CRC8_ENABLE 1
#define _ALGO_CRC8_ITU_ENABLE 1
#define _ALGO_CRC8_ROHC_ENABLE 1
#define _ALGO_CRC8_MAXIM_ENABLE 1
#define _ALGO_CRC16_IBM_ENABLE 1
#define _ALGO_CRC16_MAXIM_ENABLE 1
#define _ALGO_CRC16_USB_ENABLE 1
#define _ALGO_CRC16_MODBUS_ENABLE 1
#define _ALGO_CRC16_CCITT_ENABLE 1
#define _ALGO_CRC16_CCITT_FALSE_ENABLE 1
#define _ALGO_CRC16_X25_ENABLE 1
#define _ALGO_CRC16_XMODEM_ENABLE 1
#define _ALGO_CRC16_DNP_ENABLE 1
#define _ALGO_CRC32_ENABLE 1
#define _ALGO_CRC32_MPEG2_ENABLE 1
#define PCF8574_DEFAULT_OUTPUT 0
#define MATRIX_KEYS_ROWS 4
#define MATRIX_KEYS_COLUMNS 4
#define ESP12F_UART_RX_BUF_LEN 1024
#define RS485_RX_BUF_LEN 128
#define RS485_RX_IDLE_MS 50
#define _485_USE_CALLBACK 1
#define _BOS_MODULES_ENABLE 1
#define _ADCHUB_ENABLE 1
#define FILTER_BUF_SIZE 10
#define _ERROR_MANAGE_ENABLE 1
#define ERROR_Q_LENGTH 10
#define _MODBUS_ENABLE 1
#define MY_DEVICE_MODBUS_REG_NUM 36
#define SLAVE_ADDR 1
#define _PROTO_ENABLE 1
#define PROTO_FID_SIZE 4
#define PROTO_FLEN_SIZE 2
#define _PROTO_ENCRYPT_ENABLE 1
#define SECRET_KEY1 1
#define SECRET_KEY2 22
#define SECRET_KEY3 333
#define SECRET_KEY4 4444
#define _KV_ENABLE 1
#define _KV_MD5_ENABLE 1
#define _KV_ENCRYPT_ENABLE 1
#define _KV_ENCRYPT_KEY 111
#define _XMODEM128_ENABLE 1
#define _YMODEM_ENABLE 1
#define _MENU_ENABLE 1
#define MENU_ITEM_NUMBER 10
#define _PWM_ENABLE 1
#define _PARAM_ENABLE 1
#define _STATE_ENABLE 1
#define _IAP_ENABLE 1
#define MCUFLASH_BASE_ADDR 0x8000000
#define BOOT_START_ADDR 0x8000000
#define IAP_FLAG_ADDR 0x8014000
#define APP_START_ADDR 0x8014800
#define RECEIVE_FIRMWARE_MODE 1
#define IAP_FILE_CACHE 2
#define IAP_FW_SAVE_ADDR 0x0
#define _BACKUP_ENABLE 1
#define IAP_BACKUP_LOCATION 1
#define IAP_BACKUP_ADDR 0x32000
#define IAP_BACKUP_SIZE 0x14000
#define _WIFI_ENABLE 1
#define WIFI_Q_LEN 10
#define WIFI_DEVICE_NUMBER 1
#define WIFI_SEND_BUF_LEN 1024
#define WIFI_RECV_BUF_LEN 1024
#define _SELECT_ENABLE 1
#define SELECT_FDS_NUMBER 32
#define _NR_MICRO_SHELL_ENABLE 1
#define NR_SHELL_USER_NAME "nr@bos:"
#define NR_ANSI_LINE_SIZE 100
#define NR_SHELL_USER_NAME_MAX_LENGTH 30
#define NR_SHELL_CMD_PARAS_MAX_NUM 10
#define NR_SHELL_MAX_CMD_HISTORY_NUM 1
#define NR_SHELL_CMD_HISTORY_BUF_LENGTH 100
#define NR_SHELL_END_OF_LINE 1
#define NR_SHLL_FULL_ANSI 1
#define NR_SHELL_ECHO_ENABLE 1
#define _FLEXIBLEBUTTON_ENABLE 1
#define FLEX_BTN_SCAN_FREQ_HZ 50
#define FLEX_BTN_SHORT_XMS 1000
#define FLEX_BTN_LONG_XMS 3000
#define FLEX_BTN_LLONG_XMS 5000
#define MULTIPLE_CLICKS_INTERVAL_XMS 300
#define _UGUI_ENABLE 1
#define GUI_FONT_6X8 1
#define ENCODING_UTF_8 1
#define XBF_FILE_ADDR 0x0
#define _FS_ENABLE 1
#define _FS_TEST_ENABLE 1
#define FS_FATFS 1
#define _CJSON_ENABLE 1
#define CJSON_MEM_USE_BMALLOC 1
#define _QRCODE_ENABLE 1
#define _DEBUG_ENABLE 1
#define LOG_LEVEL_ALL 1
#define LOG_BUF_SIZE 256
#define _LOG_VIA_UART 1
#define LOG_UART 0
#define _MEMP_ENABLE 1
#define MEMP_MAX_SIZE 10240
#define _BOS_SERVICES_ENABLE 1
#define _PROTOCOL_SERVICE_ENABLE 1


#include "b_type.h" 

#endif 

