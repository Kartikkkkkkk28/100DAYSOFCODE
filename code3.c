#include<stdio.h>
int main(){
    int length;
    int breadth;
    printf("enter length :\n");
    scanf("%d", &length);
    printf("enter breadth : \n");
    scanf("%d", &breadth);
    int perimeter = 2*(length + breadth);
    int area = length * breadth ;
    printf("perimeter of a rectangle : %d \n", perimeter);
    printf("area of a rectangle : %d \n",area);
    return 0;




}