#include <stdio.h>

// Create an enumeration for days
enum Day {
    SUNDAY,     // 0
    MONDAY,     // 1
    TUESDAY,    // 2
    WEDNESDAY,  // 3
    THURSDAY,   // 4
    FRIDAY,     // 5
    SATURDAY    // 6
};

int main() {
    // Array of strings to print the names
    const char *dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    enum Day d;

    // Print each day with its integer value
    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}
