#include <stdio.h>
int main(){
	int n,i;
	printf ("nhap n= \n");
	scanf ("%d",&n);
	int ary[n];
	for (i=0;i<n;++i){
		printf ("nhap ary[%d]= \n",i);
		scanf ("%d",&ary[i]);
		for ( int j=0;j<i;j++){
			if (ary[i]==ary[j])
			--i;
		}
	}
	return 0;
}
	
	
	
	
	
	
