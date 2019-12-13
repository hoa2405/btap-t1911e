#include <stdio.h>
#include <math.h>
int main(){
	int n ;
	printf (" nhap so n= \n");	
	scanf ("%d",&n);
	printf("cac so nguyen to nho hon %d la : \n",n);
	for (int i = 2; i < n; i++){
	 	int j,dem=0;
		for ( j=1;j<=i;++j){
			if (i % j==0)
			dem++;
		}
		if (dem==2)
			printf ("%d \n",i);
	}
  	return 0;
}
		

            
            
            
            
