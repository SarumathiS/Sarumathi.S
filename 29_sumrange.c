#include <stdio.h>

main()
{
     int index,b_no, e_no, sum=0;
   //  printf("Enter 1st number:");
     scanf("%d", &b_no);
     //printf("Enter last number:");
     scanf("%d", &e_no);
     index = b_no;
     for(; index <= e_no; index ++)
     sum = sum + index;
  printf("The sum of numbers between %d and %d is: %d", b_no, e_no,sum);

    
    return 0;
}
