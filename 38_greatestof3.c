 #include<stdio.h>
 main()
 {
      int a,b,c,big;
scanf("%d %d %d",&a,&b,&c);
big=(a>b&&a>c?a:b>c?b:c);
printf("\nThe biggest number is:%d",big);
    
    return 0;
    }
