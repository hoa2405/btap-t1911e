#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	printf ("nhap a = \n");
	scanf ("%d", &a );
	printf ( " nhap b = \n");
	scanf ( "%d",&b);
	printf (" nhap c = \n");
	scanf ("%d", &c);
	if (( a<b+c)&& ( b<a+c) && ( c<a+b )){
		float S,d,h,p ;
		d = a+b+c;
		printf ("chu vi cua tam giac = %f \n",d);
		p = (a+b+c)/2;
		S = ( sqrt((p*(p-a)*(p-b)*(p-c))));
		printf ( " dien tich cua tam giac = %f \n",S);
	}else{
		printf (" a,b,c ko la ba canh cua tam giac");
	}
	return 0;
}
