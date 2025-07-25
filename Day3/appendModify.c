#include <stdio.h>
#include <stdlib.h> // For exit() function

int main() {
    FILE *readFile, *writeFile;
    char textRead[100];

    // Open hello.txt for reading
    readFile = fopen("hello.txt", "r");

    if (readFile == NULL) {
        printf("Error opening hello.txt for reading!\n");
        exit(1);
    }

    // Open nitte.txt for writing
    writeFile = fopen("nitte.txt", "w");

    if (writeFile == NULL) {
        printf("Error opening nitte.txt for writing!\n");
        fclose(readFile); // Close already opened file
        exit(1);
    }

    // Read from hello.txt and write to nitte.txt line by line
    while (fgets(textRead, sizeof(textRead), readFile) != NULL) {
        fputs(textRead, writeFile);
    }

    printf("Contents of hello.txt copied to nitte.txt successfully!\n");

    fclose(readFile);
    fclose(writeFile);

    return 0;
}
