#include <stdio.h>
#include <math.h>
int main(){
	int a ;
	printf (" nhap so a= \n");	
	scanf ("%d",&a);
	if (a<2){
   		printf (" %d ko phai so nguyen to \n",a);
	}else{
		int i=0;
		for (int uoc=2;uoc<=sqrt(a);++uoc){
			if (a%uoc==0);
			++i;
		}
	    if (i==0){
			printf("%d la so nguyen to \n",a);
		}else{
		 	printf ("%d ko phai so nguyen to \n",a);
		}
	}
  	return 0;
}



