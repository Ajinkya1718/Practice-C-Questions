/*WAP to replace capital letters in file by lowercase letter using command line
arguments & display the contents of file . */
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r+");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (isupper(ch)) {
            fseek(file, -1, SEEK_CUR);
            fputc(tolower(ch), file);
            fseek(file, 0, SEEK_CUR);
        }
    }

    // Reset the file pointer to the beginning of the file
    rewind(file);

    // Display the contents of the file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}

