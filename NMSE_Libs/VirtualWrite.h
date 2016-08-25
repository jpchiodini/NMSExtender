#pragma once
#include <stdint.h>

void VirtualSet(uintptr_t addr, int val, size_t length);
void VirtualWrite(uintptr_t addr, void* data, size_t buffer);
void VirtualWrite8(uintptr_t addr, uint8_t data);
void VirtualWrite16(uintptr_t addr, uint16_t data);
void VirtualWrite32(uintptr_t addr, uint32_t data);
void VirtualWrite64(uintptr_t addr, uint64_t data);