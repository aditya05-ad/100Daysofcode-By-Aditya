//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    printf("\n--- Student Records ---\n");

    struct Student temp;
    while (fscanf(fp, "%s %d %d", temp.name, &temp.roll, &temp.marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               temp.name, temp.roll, temp.marks);
    }

    fclose(fp);
    return 0;
}