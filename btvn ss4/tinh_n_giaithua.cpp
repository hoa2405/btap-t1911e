#include <stdio.h>
int main (){
	int n,gt;
	n>0;
	gt =1;
	printf (" nhap n \n");
	scanf ("%d",&n);
 	for ( int i=1;i <= n; ++i){
 		gt=gt*i;
	}
	printf (" giai thua cua %d = %d \n",n,gt);
	return 0;
}
