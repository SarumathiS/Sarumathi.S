 #include<stdio.h>
 main()
 { char string1[50],string2[50];
int i,temp=0;
gets(string1);
gets(string2);
for(i=0;(string1[i]!='\0')||(string2[i]!='\0');i++)
{
if(string1[i]!=string2[i])
{
temp=1;
break;
}
}
if(temp == 0)
printf("Both strings are same.");
else
printf("Both strings are not same.");
    return 0;
    }
