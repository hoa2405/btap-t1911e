#include <stdio.h>
int main(){
	int n,x,a,b;
	printf ("nhap so a= \n");
	scanf ("%d",&n);
	if ( n<2){
		printf ("ko co so nao thuoc day fibonacci nho hon va gan %d nhat \n",n);
	}else if(n<3){
		printf ("so fibonaci nho hon va gan %d la 1",n);
	}else if(n<4){
		printf ("so fibonaci nho hon va gan %d la 2",n);
	}else{
		for (  ;x<= n;){
		x=a+b;
		a=b;
		b=x;
		}
		printf(" so fibonaci nho hon va gan %d la: %d \n", n,x-a);
	}
	return 0;
}	
	
