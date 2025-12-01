#include <stdio.h>

// Enum for gender
enum Gender {
    MALE,
    FEMALE
};

// Struct containing enum
struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p = {"Kartik", MALE};   // Change to FEMALE to test

    printf("Name: %s\n", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}
