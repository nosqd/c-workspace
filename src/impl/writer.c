#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "protocol.h"
#include "writer.h"

void write_header(FILE* fptr, Header header) {
    fwrite(&header, sizeof(Header), 1, fptr);
}

void write_cstr(FILE* fptr, char* str) {
    size_t str_len = strlen(str);

    fwrite(&str_len, sizeof(size_t), 1, fptr);
    fwrite(str, sizeof(char), str_len, fptr);
}
