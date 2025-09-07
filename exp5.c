#include<stdio.h>
int main (){
    int l1,b1,l2,b2,l3,b3;
    int p1,p2,p3,max;
    printf("enter l1 and b1 : \n");
    scanf("%d %d \n", &l1,&b1);
    printf("enter l2 and b2 : \n");
    scanf("%d %d \n");
    printf("enter l3 and b3 : \n");
    scanf("%d %d \n ", &l3 , &b3);
    p1 = 2*(l1+b1);
    p2=2*(l2+b2);
    p3=2*(l3+b3);
    max = (p1>p2)?((p1>p3)?p1:p3):((p2>p3)?p2:p3);
    printf("perimeter of rectangle 1 is : %d \n" ,p1);
    printf("perimeter of rectangle 2 is : %d \n", p2);
    printf("perimeter of rectangle 3 is : %d \n" , p3);
    printf("\n largest perimeter is %d \n ", max);
    return 0;
    

}
