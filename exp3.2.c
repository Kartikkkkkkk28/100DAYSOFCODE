#include<stdio.h>
int main(){
    int i , p=0 , n=0, z=0 ;
    char a ='Y';
    while (a=='Y')
    printf("enter next no : \n");
    scanf("%d", &i);
    if(i>0)
    p++;
    else if (i<0)
    n++;
    else 
    z++;
    char c;
    printf("enter any char if you want to stop");
    scanf("%c",&a);

return 0;
}
