#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "UIBK Photonics"
#define PRODUCT_NAME "Interferometer Controller"
#define VOLUME_LABEL "SAMD21BOOT"
#define INDEX_URL "https://uibk.ac.at/exphys/photonik"
#define BOARD_ID "SAMD21G18A-Interferometer-v0"

#define USB_VID 0x04D8 // Microchip
#define USB_PID 0xEB1F // Sublicense. Please don't reuse this for your projects.

#define BOARD_RGBLED_CLOCK_PIN            PIN_PA00
#define BOARD_RGBLED_DATA_PIN             PIN_PA01

#endif
