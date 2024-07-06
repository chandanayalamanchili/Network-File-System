#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Insufficient arguments. Provide at least 3 words.\n");
        return 1;
    } else {
        int totalLength = 0;

        // Calculate the total length needed for the concatenated string
        for (int i = 3; i < argc; i++) {
            totalLength += strlen(argv[i]) + 1; // +1 for space
        }

        // Allocate memory for the concatenated string
        char *concatenated = (char *)malloc(totalLength);
        if (concatenated == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        // Construct the concatenated string
        strcpy(concatenated, "");
        for (int i = 3; i < argc; i++) {
            strcat(concatenated, argv[i]);
            strcat(concatenated, " ");
        }

        printf("%s\n", concatenated);
        free(concatenated);
        return 0;
    }
}
