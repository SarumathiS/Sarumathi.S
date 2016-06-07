#include<stdio.h>
main()
{
    int rem,quo,num,bin[100],i=1,j;
    scanf("%d",&num);
    quo=num;
    while(quo!=0)
    {
        bin[i++]=quo%2;
        quo/=2;
    }
    for(j=i-1;j>0;j--)
    {
        printf("%d",bin[j]);
    }
    return 0;
    
}
