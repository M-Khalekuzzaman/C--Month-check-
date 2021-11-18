#include<stdio.h>
int main()
{
    int number;
    printf("Enter an integer between 1 to 12 :");
    scanf("%d",&number);

    if(number ==1)
        printf("January");
    else if(number==2)
        printf("Feburay");
     else if(number ==3)
        printf("March");
    else if(number==4)
        printf("April");
       else  if(number ==5)
        printf("May");
    else if(number==6)
        printf("June");
        else
            printf("Not correct integer");
        getch();
}
