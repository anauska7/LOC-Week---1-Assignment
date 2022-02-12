#include<stdio.h> 
int main(){
char name[30],branch[40],hobby[60];
int num;

printf("Enter your name \n");
scanf("%s",&name);

printf("Enter your branch \n");
scanf("%s",&branch);

printf("Enter the last 3 digits of your registration number \n");
scanf("%d",&num);

printf("Enter your hobby \n");
scanf("%s",&hobby);

printf("Name:%s \n",name);
printf("Branch:%s \n",branch);
printf("Registration number:%d \n",num);
printf("Hobby:%s \n",hobby);
return 0;
}