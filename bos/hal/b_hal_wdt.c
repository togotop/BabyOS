/**
 *!
 * \file        b_hal_wdt.c
 * \version     v0.0.1
 * \date        2020/03/25
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SWDTL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *******************************************************************************
 */
/*Includes ----------------------------------------------*/
#include "hal/inc/b_hal.h"

/**
 * \addtogroup B_HAL
 * \{
 */

/**
 * \addtogroup WDT
 * \{
 */

/**
 * \defgroup WDT_Private_Variables
 * \{
 */

/**
 * \}
 */

/**
 * \addtogroup WDT_Private_Functions
 * \{
 */

/**
 * \}
 */

/**
 * \addtogroup WDT_Exported_Functions
 * \{
 */
#if defined(__WEAKDEF)
__WEAKDEF int bMcuWdtStart(uint8_t timeout_s)
{
    return -1;
}

__WEAKDEF int bMcuWdtFeed()
{
    return -1;
}
#endif
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------

int bHalWdtStart(uint8_t timeout_s)
{
    return bMcuWdtStart(timeout_s);
}

int bHalWdtFeed()
{
    return bMcuWdtFeed();
}

/**
 * \}
 */

/**
 * \}
 */

/**
 * \}
 */

/************************ Copyright (c) 2019 Bean *****END OF FILE****/
