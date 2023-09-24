#pragma once
#include "protocol.h"
void write_header(FILE* fptr, Header header);
void write_cstr(FILE* fptr, char* str);
