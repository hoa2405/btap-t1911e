#include <stdio.h>
#include <math.h>
int main (){
	int a,b ;
    printf (" nhap a= \n ");
    scanf ( "%d",&a);
    printf (" nhap b= \n ");
    scanf ( "%d",&b);
    if ( a>= b) {
    	printf (" x= %f \n ",(float)a/b);
    }else{
    	printf (" y= %d \n ",a*b);
	}
	return 0;
}
