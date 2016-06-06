#include <stdio.h>

main()
{
      int c1=0,c2=0,i;
    for(i=1;i<=15;i++)
       c1=c1+ i;
    for(i=15;i<=45;i++)
        c2=i%2==0 ? c2 : c2+i;
   printf("\n%d",c1);
   printf("\n%d",c2);
    return 0;
}
