#include <stdio.h>
int main() {
    int totalseconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalseconds);
    hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = totalseconds % 60;
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
