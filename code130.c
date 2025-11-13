#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    // Writing to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("How many students? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Reading from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s  Roll: %d  Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
