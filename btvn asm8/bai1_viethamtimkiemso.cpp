#include <stdio.h>
bool timkiemso (int a[],unsigned int x,int n){
	for (int i=0; i<x; i++){
	 	if (n==a[i]){
			return true;
		}	
		
	}
	return false;
}
		

int main (){
	int ary[5]={1,2,3,4,5};
	int x;
	printf ("nhap x= \n");
	scanf ("%d",&x);
	if (timkiemso(ary,5,x)){
	  	printf ("%d co nam trong mang",x);
	}else{
	  	printf ("%d ko nam trong mang",x);
	}
	return 0;
}
