#pragma once
#include <stdio.h>
#include <stdint.h>
#define u8 uint8_t
#define u16 uint16_t
#define PROGRAM_VERSION 0x0002

typedef struct Header
{
    u16 program_version;    
} Header;
