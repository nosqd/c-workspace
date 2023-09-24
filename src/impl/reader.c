#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "protocol.h"
#include "reader.h"

Header read_header(FILE* fptr) {
    Header buf;
    fread(&buf, sizeof(Header), 1, fptr);
    return buf;
}
size_t read_strlen(FILE* fptr) {
    size_t buf;
    fread(&buf, sizeof(size_t), 1, fptr);
    return buf;
}
void read_cstr(FILE* fptr, size_t len, char* buf) {
    fread(buf, sizeof(char), len, fptr);
}