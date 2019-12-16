#include <stdio.h>
int main (){
	int n;
	printf (" nhap n=\n");
	scanf ("%d",&n);
	int ary[n];
	for (int i=0;i<n;++i){
		printf ("nhap ary[%d]= \n",i);
		scanf ("%d",&ary[i]);
	}
	for (int i=0;i<n;++i){
		if (ary[i]<0)
		printf ("%d =0 \n",ary[i]);
	}
	return 0;
}
	
	
