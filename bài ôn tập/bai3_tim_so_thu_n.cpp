#include <stdio.h>
int main(){
	int n;
	printf ("nhap so n= \n");
	scanf ("%d",&n);
	int a=1 , b=1, x;
	if ( n==1 || n==2){
		printf ("so thu %d trong day la 1 \n",n);
	}else{
		for ( int dem=3;dem<= n;++dem){
		x=a+b;
		a=b;
		b=x;
		}
		printf("so thu %d trong day la : %d \n", n,x);
	}	
	
	return 0;
}
