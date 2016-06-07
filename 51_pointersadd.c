#include <stdio.h>

int main()
{
    int n1,n2,*ptr1,*ptr2,res;
    scanf("%d %d",&n1,&n2);
    ptr1=&n1;
    ptr2=&n2;
    res=*ptr1 + *ptr2;
    printf("Sum of pointer is:%d",res);
    return 0;
}
