#include<stdio.h>
int main(){
    float radius ;
    printf("enter radius: \n");
    scanf("%f",&radius);
    float circumference = 2*3.14*radius;
    float area = 3.14*radius*radius;
    printf("circumference of  circle is : %f \n ",circumference);
    printf("area of circle is : %f \n",area);
    return 0;

}
