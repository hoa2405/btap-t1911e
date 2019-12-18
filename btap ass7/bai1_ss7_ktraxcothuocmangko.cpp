#include <stdio.h>
int main (){
	int n,x,i;
	printf ("nhap n= \n");
	scanf ("%d",&n);
	printf ("nhap cac phan tu cua n: \n");
	int arr[n];
	for (int i=0; i<n; i++){
		scanf ("%d",&arr[i]);
	}
	printf ("nhap x= \n");
	scanf ("%d",&x);
	int dem=-1;
	for (int i=0; i<n; i++){
	 	if (x==arr[i]){
			dem=i;
			
	 		}
	}
	if (dem >-1){
		printf ("x nam trong mang va x vi tri thu %d \n",dem);
	}else{
		printf ("x ko nam trong mang");
	}
	return 0;
}	
	
	
	
