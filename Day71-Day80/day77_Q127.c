//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    int ch;

    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");

    if (fin == NULL) {
        printf("Error: input.txt not found!\n");
        return 0;
    }
    if (fout == NULL) {
        printf("Error creating output.txt!\n");
        fclose(fin);
        return 0;
    }

    while ((ch = fgetc(fin)) != EOF) {

        ch = toupper(ch);
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion complete! Data written to output.txt\n");

    return 0;
}
