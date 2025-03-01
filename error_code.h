#ifndef _ERROR_CODE_H_
#define _ERROR_CODE_H_

#define INVALID_SOFTWARE_TYPE 1
#define INVALID_SOFTWARE_NUMBER 2
#define INVALID_SOFTWARE_ALPHABET_EQUIVALENT 3
#define INVALID_SOFTWARE_VERSION 4
#define INVALID_SOFTWARE_DOWNLOAD_FILE_TYPE 5

#define MAX_MSG 100

#include <stdio.h>

void error(char msg[MAX_MSG], int error_code)
{
    printf("%s Error code: %d\n", msg, error_code);
}

#endif