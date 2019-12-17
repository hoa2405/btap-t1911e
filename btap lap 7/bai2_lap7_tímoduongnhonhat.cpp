#include <stdio.h>
int main (){
	int n,min;
	printf ("nhap n= \n");
	scanf ("%d",&n);
	int ary[n];
	for (int i=0; i<n; i++){
		printf ("nhap ary[%d]= \n",i);
		scanf ("%d",&ary[i]);
	}
	
	for (int i=0; i<n; i++){
		if  (ary[i]>0){
			min=ary[i];
			break;
		}
	}
	int dem =0;
	for (int i=0; i<n; i++){
		if (ary[i]>0 && ary[i]<min){
		dem ++;
		min=ary[i];
		}
	}
	
		
	if (dem>0){
		printf ("so duong nho nhat trong mang la:%d",min);
	}else{
		printf ("ko co so duong nao trong mang");
	}
	

	return 0;
}				
	

	


		
	


