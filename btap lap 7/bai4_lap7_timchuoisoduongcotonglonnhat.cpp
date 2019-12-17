#include <stdio.h>
int main (){
	int n;
	printf ("nhap n= \n");
	scanf ("%d",&n);
	printf ("nhap cac phan tu cua n: \n");
	int ary[n],count = 0,max_count=0;
	for (int i = 0; i < n; ++i){
	scanf ("%d",&ary[i]);
		if(ary[i]>0){
			count+=ary[i];
			if(count > max_count){
				max_count = count;
			}
		}else{
			count =0;
		}	
	}
	printf("max: %d\n",max_count);
	return 0;
}

	
