#include <stdio.h>

main()
{
  char str[100];
   int i=0,l=0,f=1;
   gets(str);
   for(i=0; str[i]!='\0';i++)
   {
       if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
      l=l+1;
   }
   printf("The number of characters in the string are %d\n",l);
    
    return 0;
}
