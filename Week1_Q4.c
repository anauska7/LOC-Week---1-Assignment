#include<stdio.h>
int main()
{   int no1,no2,sm,sub,mul;float div;
   int choice;
    scanf("%d %d",&no1,&no2);
    printf("1.add\n2.sub\n3.divide\n4.multiply");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
         sm=no1+no2;
         printf("%d",sm);
         break;
        case 2:
          sub=no1-no2;
          printf("%d",sub);
          break;
        case 3:
          div=no1/no2;
          printf("%f",div);
          break;
        case 4:
          mul=no1*no2;
          printf("%d",mul);
          break;
        default:
          printf("invalid choice");


    }
    return 0;
}