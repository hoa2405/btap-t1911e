#include <stdio.h>
int main (){
	int n;
	printf ("nhap n= \n");
	scanf ("%d",&n);
	printf (" nhap %d phan tu cua mang :\n",n);
	int ary[n];
	for (  int i =0;i<n;++i){
		scanf ("%d",&ary[i]);	
	}	
	printf ("cac so le cua mang la : \n");
	for (int i=1;i<=n;++i){
		if (i%2!=0)
	printf ("%d \n",i);
	}
	return 0;
}
	
	

