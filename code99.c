#include <stdio.h>
#include <string.h>

void convertDateFormat(char *date) {
    char month[3];
    char day[3];
    char year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    sscanf(date, "%2[0-9]/%2[0-9]/%4[0-9]", day, month, year);

    int monthIndex = atoi(month) - 1;

    if(monthIndex >= 0 && monthIndex < 12) {
        printf("%s-%s-%s\n", day, months[monthIndex], year);
    } else {
        printf("Invalid month\n");
    }
}

int main() {
    char date[] = "17/04/2025";
    convertDateFormat(date);
    return 0;
}
