#include <stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Possitive");
    }
    else if(a==0)
    {
        printf("a is zero");

    }
    else 
    {
        printf("Negative");
    }
    getch();
}
