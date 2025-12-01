#include <stdio.h>

// Enum for user roles
enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r = USER;   // Change this to ADMIN or GUEST to test

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Hello User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! Please login to access more features.\n");
            break;

        default:
            printf("Unknown role.\n");
    }

    return 0;
}
