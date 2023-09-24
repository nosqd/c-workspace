#include <stdio.h>
#include <string.h>
#include "writer.h"
#include "reader.h"

void writing_test(FILE* fptr) {
    Header header;
    header.program_version = PROGRAM_VERSION;
    write_header(fptr, header);
    
    char* cstr_example = "Hello, nosqd-c-files-fun!";
    write_cstr(fptr, cstr_example);
}
void reading_test(FILE* fptr) {
    Header header = read_header(fptr);

    size_t str_len = read_strlen(fptr);
    char str[str_len];
    read_cstr(fptr, str_len, str);

    printf("Loaded file with program version %d, and string \"%s\" \n", header.program_version, str);
}

int main() {
    FILE* fptr;
    if (!(fptr = fopen("file.bin", "wb"))) {
        printf("FATAL: failed to open file.bin to writing\n");
        return 1;
    }
    writing_test(fptr); 
    fclose(fptr);

    if (!(fptr = fopen("file.bin", "rb"))) {
        printf("FATAL: failed to open file.bin to writing\n");
        return 1;
    }
    reading_test(fptr);
    fclose(fptr);
}