//C file Function

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX_CHARS 100

void write_to_file(const char *filename) {
    FILE *fptr;
    char sentence[MAX_CHARS];

    printf("Enter a sentence (up to %d characters): ", MAX_CHARS);
    fgets(sentence, MAX_CHARS, stdin);

    fptr = fopen("C:\\Users\\USER\\OneDrive\\Documents\\Attachments\\C-programs\\data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file");
         exit(1);
    }

    fputs(sentence, fptr);
    fclose(fptr);
    printf("Sentence written to file.\n");
}

void read_from_file(const char *filename) {
    FILE *fptr;
    char sentence[MAX_CHARS];

    fptr = fopen("C:\\Users\\USER\\OneDrive\\Documents\\Attachments\\C-programs\\data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file");
        exit(1);
    }

    fgets(sentence, MAX_CHARS, fptr);
    printf("Content of the file:\n%s", sentence);

    fclose(fptr);
}

void append_to_file(const char *filename) {
    FILE *fptr;
    char sentence[MAX_CHARS];

    printf("Enter a sentence to append (up to %d characters): ", MAX_CHARS);
    fgets(sentence, MAX_CHARS, stdin);

    fptr = fopen("C:\\Users\\USER\\OneDrive\\Documents\\Attachments\\C-programs\\data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file");
         exit(1);
    }

    fputs(sentence, fptr);
    fclose(fptr);
    printf("Sentence appended to file.\n");
}

int main() {
    char filename[] = "data.txt";

    write_to_file ("C:\\Users\\USER\\OneDrive\\Documents\\Attachments\\C-programs\\data.txt");
    read_from_file("C:\\Users\\USER\\OneDrive\\Documents\\Attachments\\C-programs\\data.txt");
    append_to_file("C:\\Users\\USER\\OneDrive\\Documents\\Attachments\\C-programs\\data.txt");

    return 0;
}
