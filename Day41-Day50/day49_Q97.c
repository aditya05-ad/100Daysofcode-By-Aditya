//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    printf("%c", str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != '\0' && str[i+1] != '\n')
            printf(" %c", str[i+1]);
        i++;
    }

    printf("\n");
    return 0;
}
