#include <stdio.h>
int vitrisotrongdayF (int n){
	if (n<1) return 0;
	if (n<3)	return 1;
	if (n=3)  return 2;
	int a=1,b=1,x;
	for ( int dem=3;dem<= n;++dem){
		x=a+b;
		a=b;
		b=x;
	}
	return x;
}
		



int main (){
	int a;
	vitrisotrongdayF (10);
	printf ("so thu 10 trong day fibo la:%d ",vitrisotrongdayF);
	return 0;
}
