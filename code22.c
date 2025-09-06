<<<<<<< HEAD
#include <stdio.h>

int main() {
    double costprice, sellingprice, profitloss, percentage;

    printf("Enter Cost Price: ");
    scanf("%lf", &costprice);

    printf("Enter Selling Price: ");
    scanf("%lf", &sellingprice);
    profitloss = sellingprice - costprice;
    if (profitloss > 0) {
        percentage = (profitloss / costprice) * 100.0;
        printf("Profit Percentage: %.2lf%%\n", percentage);
    } else if (profitloss < 0) {
        percentage = (-profitloss / costprice) * 100.0;
        printf("Loss Percentage: %.2lf%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
=======
#include <stdio.h>

int main() {
    double costprice, sellingprice, profitloss, percentage;

    printf("Enter Cost Price: ");
    scanf("%lf", &costprice);

    printf("Enter Selling Price: ");
    scanf("%lf", &sellingprice);
    profitloss = sellingprice - costprice;
    if (profitloss > 0) {
        percentage = (profitloss / costprice) * 100.0;
        printf("Profit Percentage: %.2lf%%\n", percentage);
    } else if (profitloss < 0) {
        percentage = (-profitloss / costprice) * 100.0;
        printf("Loss Percentage: %.2lf%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
>>>>>>> 955887b0aa6e935bc9039484d7176dd3b52f4397
}