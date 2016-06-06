 
 #include<stdio.h>
 main()
 {
     int n,rem,ori_int,res=0;
     scanf("%d",&n);
     ori_int=n;
     while(ori_int!=0)
     {
         rem=ori_int%10;
         res+=rem*rem*rem;
         ori_int/=10;
     }
     if(res==n)
    {
        printf("The number is an amstrong number\n");
    }
    else
    {
        printf("The number is not an amstrong number");
    }
     
    
    return 0;
    }
