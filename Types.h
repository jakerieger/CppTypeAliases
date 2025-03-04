// Author: Jake Rieger
// Created: 6/4/2024.
//

#pragma once

#include <cstdint>
#include <cstddef>
#include <vector>
#include <memory>

using u8   = uint8_t;
using u16  = uint16_t;
using u32  = uint32_t;
using u64  = uint64_t;
using i8   = int8_t;
using i16  = int16_t;
using i32  = int32_t;
using i64  = int64_t;
using f32  = float;
using f64  = double;
using byte = u8;

using ByteArray = std::vector<u8>;

template<typename T>
using Unique = std::unique_ptr<T>;

template<typename T>
using Shared = std::shared_ptr<T>;