 #include<stdio.h>
 main()
 { int a[10],gre,i;
    for (i = 0; i < 10; i++) {
    	scanf("%d", &a[i]);
    }
    gre = a[0];
    for (i=0; i<10; i++) {
	if (a[i]>gre) {
	gre= a[i];
    }
    }
    printf("Greatest of ten numbers is %d", gre);
    
    return 0;
    }
