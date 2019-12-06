#include <stdio.h>
int main () {
 float a,b,c;
	printf (" nhap a= \n");
	scanf("%f",&a);
    printf (" nhap b= \n");
	scanf("%f",&b);
    printf (" nhap c= \n");
	scanf("%f",&c);
if (a<b) { 
   if (a<c) { 
     printf ("min = %f \n",a);
   }else{
     printf (" min = %f \n",c);
     }
}else{
   if (b<c) {
		printf (" min =%f \n",b);
		}else{
		printf (" min =%f \n",c);
	        }
	   }
}
