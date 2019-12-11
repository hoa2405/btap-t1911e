#include <stdio.h>;
int main (){
    int a,b,c ;
	do {
	printf (" nhap 3 so la 3 canh cua tam giac \n");
	printf ("nhap a = \n");
	scanf ("%d",&a);
	printf ( " nhap b = \n");
	scanf ("%d",&b);
	printf (" nhap c = \n");
	scanf ("%d",&c);
	}while ((a>=b+c) || (b>=a+c) || (c>=a+b));
	return 0;
}
