/**
  ******************************************************************************
  * @file    USB_Device/DFU_Standalone/Inc/usbd_dfu_flash.h
  * @author  MCD Application Team
  * @brief   Header for usbd_dfu_flash.c file.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_DFU_FLASH_H_
#define __USBD_DFU_FLASH_H_

/* Includes ------------------------------------------------------------------*/
#include "usbd_dfu.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Base address of the Flash sectors */
#define ADDR_FLASH_SECTOR_0      ((uint32_t)0x08000000) /* Base @ of Sector 0, 16 Kbytes */
#define ADDR_FLASH_SECTOR_1      ((uint32_t)0x08004000) /* Base @ of Sector 1, 16 Kbytes */
#define ADDR_FLASH_SECTOR_2      ((uint32_t)0x08008000) /* Base @ of Sector 2, 16 Kbytes */
#define ADDR_FLASH_SECTOR_3      ((uint32_t)0x0800C000) /* Base @ of Sector 3, 16 Kbytes */
#define ADDR_FLASH_SECTOR_4      ((uint32_t)0x08010000) /* Base @ of Sector 4, 64 Kbytes */
#define ADDR_FLASH_SECTOR_5      ((uint32_t)0x08020000) /* Base @ of Sector 5, 128 Kbytes */
#define ADDR_FLASH_SECTOR_6      ((uint32_t)0x08040000) /* Base @ of Sector 6, 128 Kbytes */
#define ADDR_FLASH_SECTOR_7      ((uint32_t)0x08060000) /* Base @ of Sector 7, 128 Kbytes */
#define ADDR_FLASH_SECTOR_8      ((uint32_t)0x08080000) /* Base @ of Sector 8, 128 Kbytes */
#define ADDR_FLASH_SECTOR_9      ((uint32_t)0x080A0000) /* Base @ of Sector 9, 128 Kbytes */
#define ADDR_FLASH_SECTOR_10     ((uint32_t)0x080C0000) /* Base @ of Sector 10, 128 Kbytes */
#define ADDR_FLASH_SECTOR_11     ((uint32_t)0x080E0000) /* Base @ of Sector 11, 128 Kbytes */
#define ADDR_FLASH_SECTOR_12     ((uint32_t)0x08100000) /* Base @ of Sector 12, 128 Kbytes */
#define ADDR_FLASH_SECTOR_13     ((uint32_t)0x08120000) /* Base @ of Sector 13, 128 Kbytes */
#define ADDR_FLASH_SECTOR_14     ((uint32_t)0x08140000) /* Base @ of Sector 14, 128 Kbytes */
#define ADDR_FLASH_SECTOR_15     ((uint32_t)0x08160000) /* Base @ of Sector 15, 128 Kbytes */

/* Exported macro ------------------------------------------------------------*/
extern USBD_DFU_MediaTypeDef  USBD_DFU_Flash_fops;

/* Exported functions ------------------------------------------------------- */

#endif /* __USBD_DFU_FLASH_H_ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
