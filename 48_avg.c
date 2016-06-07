#include<stdio.h>
main()
{
    int n,i;
    float num[50],sum=0.0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&num[i]);
        sum+=num[i];
    }
    avg=sum/n;
    printf("The average is:");
    printf("%.2f",avg);
    return 0;
    
}
