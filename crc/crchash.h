/*
** The crc hash is licensed under the Apache License, Version 2.0, and a copy of the license is included in this file.
**
**Author:Wang Yaofu voipman@qq.com
**Description: The header file of class CrcHash.
*/

#pragma once

#include <cstdint>
#include <string>

namespace common
{
// string => 0x0000-0xffff
uint16_t Hash16(const std::string &key);
uint16_t Hash16(const unsigned char *cpKey, size_t iKeyLen);

// string => 0x00000000-0xffffffff
uint32_t Hash32(const std::string &key);
uint32_t Hash32(const unsigned char *cpKey, size_t iKeyLen);

// string => 0x0000000000000000-0xffffffffffffffff
uint64_t Hash64(const std::string &key);
uint64_t Hash64(const unsigned char *cpKey, size_t iKeyLen);
} // namespace common
