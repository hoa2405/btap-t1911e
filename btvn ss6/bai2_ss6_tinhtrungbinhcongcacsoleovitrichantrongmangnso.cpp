#include <stdio.h>
int main(){
	int n,trungbinhcong,tong;
	printf ("nhap n= \n");
	scanf ("%d",&n);
	int ary[n];
	for (int i=0;i<n;++i){
		printf (" nhap ary[%d]\n",i);
		scanf ("%d",&ary[i]);
	}
	tong=0;
	int dem =0;
	for (int i=0;i<n;++i){
		if (ary[i]%2!=0&& i%2==0){
			dem++;
			tong+= ary[i];
		}
	}	
	if (dem >0){
		trungbinhcong =tong/dem;
		printf ("trung binh cong la: %d",trungbinhcong);
	}else{
		printf (" ko có so le nao o vi tri chan trong mang");
	}
	return 0;
}
	
