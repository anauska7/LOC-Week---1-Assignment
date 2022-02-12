#include<stdio.h> 
int main(){
       float rad,dia,circ,area;
       printf("enter the radius:");
       scanf("%f",&rad);
       dia=2*rad;circ=2*3.1416*rad;area=3.1416*rad*rad;
       printf("diameter:%f\n",dia);
       printf("area:%f\n",area);
       printf("Circumference:%f\n",circ);
         
return 0;
}
