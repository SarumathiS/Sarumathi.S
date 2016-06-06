#include <stdio.h>

int main()
{
    int n,ori_int,rev_int=0,rem;
    scanf("%d",&n);
    ori_int=n;
    while(n!=0)
    {
        rem=n%10;
        rev_int=rev_int*10+rem;
        n=n/10;
    }
  if(ori_int==rev_int)
  {
      printf("The number is palindrome");
  }
  else
  {
      printf("The number is not palindrome");
  }
    return 0;
}
