#include <stdio.h>
#include <math.h>
double perimeter(double a,double b,double c){
	return (a+b+c)/2;
}
int main (){
	double a,b,c,p,S,P;
	do{
		printf ("nhap vao 3 canh cua tam giac :\n");
		printf ("a= ");
		scanf ("%lf",&a);
		printf ("b= ");
		scanf ("%lf",&b);
		printf ("c= ");
		scanf ("%lf",&c);
		if (a+b<=c||a+c<=b||b+c<=a||a<=0||b<=0||c<=0){
			printf("\nday ko phai tam giac, vui long nhap lai! \n");
		}
	}while ((a>b+c) || (b>a+c) || (c>a+b)|| a<=0||b<=0||c<=0);
	if (a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0){
		printf ("chu vi cua tam giac la: \t %lf \n",perimeter(a,b,c)*2);
		S=(double)(sqrt((perimeter(a,b,c)*(perimeter(a,b,c)-a)*(perimeter(a,b,c)-b)*(perimeter(a,b,c)-c))));
		printf ("dien tich cua tam giac la: \t %lf \n",S);
	}
	return 0;
			
}


	
	
	
