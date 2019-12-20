#include <stdio.h>
int vitrisotrongdayF (int n){
	if (n==1 || n==2){
		printf ("so thu %d trong day la 1 \n",n);
	}else{
		int a=1,b=1,x;
		for ( int dem=3;dem<= n;++dem){
		x=a+b;
		a=b;
		b=x;
		}
		printf("so thu %d trong day la : %d \n", n,x);
	}	
	return n;
}


int main (){
	int a;
	vitrisotrongdayF (2);
	return 0;
}
