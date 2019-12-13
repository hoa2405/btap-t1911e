#include <stdio.h>
int main(){
	int n,i;
	printf ( "nhap so nguyen duong :");
	scanf ("%d",&n);
	if ( n<=0){
		printf ("ko hop le");
	}else{
		for ( i=0;n>=1;++i){
			n=n/10;
		}
		printf ("so nguyen duong vua nhap co %d chu so \n",i);
	}
	return 0;
}
	
	
