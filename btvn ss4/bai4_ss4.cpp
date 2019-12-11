#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf ("nhap a \n");
	scanf ("%d",&a);
	int count=0;
	int b=a;
	while (b>10){
		b=(b-b%10)/10;
		count++;
	}
	b=0;
	for(int tg=a;count>=0;count--){
		b+= (tg%10)*pow(10,count);
		tg=(tg-tg%10)/10;
	}
	printf("so dao nguoc cua a = %d  la b = %d",a,b);
	return 0;
}

