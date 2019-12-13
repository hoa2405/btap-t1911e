#include <stdio.h>
int  main(){
	int a,b,s;
	printf ("nhap 2 so a,b:\n");
	scanf ("%d",&a);
	scanf ("%d",&b);
	if ( a>b){
		printf ("ko hop le");
	}else{
		for ( int i=a;i<=b;++i){
			s+=i;
		}
		printf ("tong cac so tu %d den %d la %d:",a,b,s);
	}
	return 0;
	}	
	

