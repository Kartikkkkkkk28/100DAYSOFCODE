#include<stdio.h>
int main() {
    // leap year
    int year , days , leap;

    printf("Enter a year: ");
    scanf("%d", &year); 
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    days = (year - 1 )*365 + (year - 1)/4 - (year - 1)/100 + (year - 1)/400;
     if (days % 7 == 0) {
        printf("The year starts on a monday.\n");
    } else if (days % 7 == 1) {
        printf("The year starts on a tuesday.\n");
    } else if (days % 7 == 2) {         
        printf("The year starts on a wednesday.\n");
    } else if (days % 7 == 3) {
        printf("The year starts on a thursday.\n");
    } else if (days % 7 == 4) {
        printf("The year starts on a friday.\n");
    } else if (days % 7 == 5) {
        printf("The year starts on a saturday.\n");
    } else if (days % 7 == 6) {
        printf("The year starts on a sunday.\n");
    }


    return 0;
}
