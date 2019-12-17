#include <stdio.h>
int main(){
	int n,i,j,temp;
	printf ("nhap n= \n");
	scanf ("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++){
		printf ("nhap arr[%d]= \n",i);
		scanf ("%d",&arr[i]);
	}
	int dem =0;
	for (int i=0; i<n; i++){
  		if (arr[i]%2!=0){
  			dem=i;
		}
	}
	if (dem >0){
		printf ("so le cuoi cung cua mang la %d",arr[dem]);
	}else{
		printf ("ko co so le nao trong mang");
	}
	
   	return 0;
}
   	
	


	
