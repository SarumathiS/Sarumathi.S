 #include<stdio.h>
 main()
 { 
    int input = 0;
    input = getnumber();
    if(!((input <= 9) && (input >= 1)))
    {
        printf("\nYou entered number is not in range");
        input = getnumber();
    }
    printf("\nThe number you entered is %d",input);
    return 0;
    }
 int getnumber() 
    {    
    int number;
    scanf("%d",&number);
    return (number);
}
