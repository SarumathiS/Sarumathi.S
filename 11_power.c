#include <stdio.h>

int main()
{
    int base,power;
    long long res=1;
    //printf("Enter base number");
    scanf("%d",&base);
   //printf("Enter power");
   scanf("%d",&power);
    while(power!=0)
    {
        res*=base;
        --power;
    }
    printf("%lld",res);
    
    return 0;
}
