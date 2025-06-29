#pragma once

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus  */

#include <stdint.h>

uint16_t crc16(const unsigned char *buf, size_t len);
uint16_t crc16_update(uint16_t crc, const unsigned char *buf, size_t len);

#ifdef __cplusplus
}
#endif /* __cplusplus  */
