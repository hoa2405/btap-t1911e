#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float dt,x,x1,x2;
	printf("giai phuong trinh a*2+bx+c=0\n");
	printf(" nhap a = \n");
	scanf("%d",&a);
	printf(" nhap b = \n");
	scanf("%d",&b);
	printf(" nhap c = \n");
	scanf("%d",&c);
	if(a==0){
		x=-c/b;
		printf("phuong trinh co nghiem duy nhat x = %f",x);
	}else{
		dt = b*b-4*a*c;
		if(dt<0){
			printf("phuong trinh vo nghiem");
		}else{
			if(dt>0){
				x1 = (-b+sqrt(dt))/(2*a);
				x2 = (-b-sqrt(dt))/(2*a);
				printf("phuong trinh co 2 nghiem phan biet x1 = %f; x2 = %f",x1,x2);
			}else{
				x1 = -b/(2*a);
				printf("phuong trinh co nghiem kep x1 = x2 = %f",x1);
			}	
		}	
	}	
	}
