#pragma once

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus  */

#include <stddef.h>
#include <stdint.h>

uint32_t crc32(const unsigned char *s, size_t len);
uint32_t crc32_update(uint32_t crc, const unsigned char *buf, size_t len);

#ifdef __cplusplus
}
#endif /* __cplusplus  */
