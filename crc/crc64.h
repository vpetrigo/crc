#pragma once

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus  */

#include <stdint.h>

uint64_t crc64(const unsigned char *s, size_t l);
uint64_t crc64_update(uint64_t crc, const unsigned char *buf, size_t len);

#ifdef __cplusplus
}
#endif /* __cplusplus  */
