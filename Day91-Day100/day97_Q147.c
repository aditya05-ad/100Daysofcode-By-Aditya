//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp1, emp2;

    scanf("%s %d %f", emp1.name, &emp1.id, &emp1.salary);

    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 0;
    }

    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    fread(&emp2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee Data Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           emp2.name, emp2.id, emp2.salary);

    return 0;
}
