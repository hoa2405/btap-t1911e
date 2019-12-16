#include <stdio.h>
int main(){
	int n;
	printf ("nhap n= \n");
	scanf ("%d",&n);
	printf (" nhap %d phan tu cua mang :\n",n);
	int ary[n];
	for ( int i =0;i<n;++i){
	scanf ("%d",&ary[i]);
	}
	int max,min;
	max =min= ary[0];
	for (int i=1;i<n;++i){
		if (ary[i]>max){ 
			max= ary[i];
		}
		if (ary[i]<min){
			min =ary[i];
		}
	}
	int n_max,n_min;
	n_max=n_min= ary[0];
	for (int i = 0; i < n; ++i){
		if(ary[i]<max){
			n_max = ary[i];
			break;
		}
	}
	for (int i = 0; i < n; ++i){
		if(ary[i]>min){
			n_min = ary[i];
			break;
		}
	}
	for (int i=1;i<n;++i){
		if (ary[i]>n_max && ary[i] < max){ 
			n_max= ary[i];
		}	
		if (ary[i]<n_min && ary[i]>min){
			n_min=ary[i];
		}
	}
	printf ("so gan lon nhat trong mang la:%d \nso gan nho nhat trong mang la:%d ",n_max,n_min);
	return 0;
}	
	
			
		





