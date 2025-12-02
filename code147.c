#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e_write[3], e_read[3];
    FILE *fp;
    int i;

    // Input employee data
    for (i = 0; i < 3; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e_write[i].name);
        printf("ID: ");
        scanf("%d", &e_write[i].id);
        printf("Salary: ");
        scanf("%f", &e_write[i].salary);
    }

    // Write to binary file
    fp = fopen("emp.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(e_write, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("emp.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(e_read, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Display read data
    printf("\n--- Data read from file ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", e_read[i].name);
        printf("ID: %d\n", e_read[i].id);
        printf("Salary: %.2f\n", e_read[i].salary);
    }

    return 0;
}
