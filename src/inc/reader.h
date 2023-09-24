#pragma once
#include "protocol.h"

Header read_header(FILE* fptr);
size_t read_strlen(FILE* fptr);
void read_cstr(FILE* fptr, size_t len, char* buf);