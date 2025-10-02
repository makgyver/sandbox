#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "analyzer.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <filename> <option>\n", argv[0]);
        printf("Options:\n");
        printf("  -l    Count lines\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    if (strcmp(argv[2], "-l") == 0) {
        printf("Lines: %d\n", count_lines(fp));
    } else {
        printf("Unknown option: %s\n", argv[2]);
    }

    fclose(fp);
    return 0;
}
