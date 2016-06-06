#include <stdio.h>

main()
{
 char str[100];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int counter;
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
    gets(str);
  for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
    printf("\nSpecial Characters:%d",countSpecialChar);
 
    return 0;
}
