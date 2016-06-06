 #include<stdio.h>
 main()
 { 
     char str1[50],str2[50];
     int i=0,j=0;
     gets(str1);
     gets(str2);
     while(str1[i]!=NULL)
     i++;
     while(str2[j]!=NULL)
     {
         str1[i]=str2[j];
         j++;
         i++;
         
     }
     str1[i]=NULL;
     printf("%s",str1);
    return 0;
    }
