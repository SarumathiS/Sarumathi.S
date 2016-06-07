#include<stdio.h>
main()
{
    char str[100];
   int f=0,i;
   scanf("%[^\n]s",str);
  for(i=0; str[i]!=NULL; i++)
   {
      if(str[i]==' ')
      {
   f+=1;
      }
   }
   printf("The number of words in the string are %d",f+1);
    return 0;
    
}
