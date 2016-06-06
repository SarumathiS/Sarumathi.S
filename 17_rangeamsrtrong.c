 
 #include<stdio.h>
 main()
 {
    int n1, n2, i, temp1, temp2, remainder, n = 0, result = 0;
    scanf("%d %d", &n1, &n2);
    printf("Armstrong numbers between %d an %d are: ", n1, n2);

    for(i = n1+1; i<n2; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2%10;
            result += remainder*remainder*remainder;
            temp2 /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        n = 0;
        result = 0;

    }
    return 0;
    }
