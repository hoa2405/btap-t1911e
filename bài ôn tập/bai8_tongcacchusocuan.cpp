#include <stdio.h>
int main(){
	int n,s;
	printf ("nhap so nguyen duong :");
	scanf ("%d",&n);
	if (n<=0){
		printf ("so ko hop le");
	}else{
		int s=0,n2;
		for ( ;n!=0;){
			n2= n%10;
			s+=n2;
			n=n/10;
		}
		printf ("tong cac chu so bang : %d ",s);	
	}
	return 0;
}
	
