#include "analyzer.h"
#include <ctype.h>

// Count the number of lines in the file
int count_lines(FILE *fp) {
    int lines = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    rewind(fp); // reset file pointer
    return lines;
}

