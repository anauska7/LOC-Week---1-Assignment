#include<stdio.h> 
int main(){
int n;

printf("Enter a number \n");
scanf("%d",&n);

int r = n%2;

switch(r){
    case 0: printf("The number is even");
    break;
    case 1: printf("The number is odd");
    break;
}
return 0;
}