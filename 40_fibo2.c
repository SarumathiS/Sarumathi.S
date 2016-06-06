 #include<stdio.h>
 main()
 {
     int i, n, t1 = 0, t2 = 1, nt= 0;
    scanf("%d",&n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (i=3; i <= n; ++i)
    {
       nt= t1 + t2;
        t1 = t2;
        t2 = nt;
        printf("%d, ",nt);
    }
    
    return 0;
    }
