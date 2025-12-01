#include <stdio.h>

// Enum for user roles
enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    // Array of enum names (must match order)
    const char *roleNames[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };

    enum Role r;

    // Loop through all enum values
    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}
