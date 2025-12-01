#include <stdio.h>

// Enum for months
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month m;

    for (m = JANUARY; m <= DECEMBER; m++) {
        printf("%d - ", m);

        switch (m) {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("31 days\n");
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("30 days\n");
                break;

            case FEBRUARY:
                printf("28 or 29 days\n");
                break;
        }
    }

    return 0;
}
