#include <stdio.h>
int main(){
	int s,n ;
	n=0;
	for (int i=1;n<100; ++i ){
		if ( i%2!=0){
		s=s+i;
		n++;
		}
	}
	printf (" tong 100 so le bang %d ",s);
	return 0;
}
