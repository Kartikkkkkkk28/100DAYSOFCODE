#include <stdio.h>

// Enum with explicit integer values
enum Example {
    ALPHA = 5,
    BETA = 10,
    GAMMA = 20
};

int main() {
    printf("ALPHA = %d\n", ALPHA);
    printf("BETA = %d\n", BETA);
    printf("GAMMA = %d\n", GAMMA);

    return 0;
}
