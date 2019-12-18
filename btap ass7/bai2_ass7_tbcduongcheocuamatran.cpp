#include <stdio.h>
int main(){
	int temp [4][4],tong;
	tong=0;
	float tbc;
	printf ("nhap cac phan tu cua ma tran:\n");
	for (int i=0;i<4;++i){
		for (int j=0;j<4;++j){
			printf ("a[%d][%d]= ",i,j);
			scanf("%d", &temp[i][j]);
      	}
      	printf ("\n");
    }
	for (int i=0;i<4;++i){
		for (int j=0;j<4;++j){
			if (i==j){
				tong=tong+temp[i][j];
			}
		}	
	}
	tbc=(float)tong/4;
	printf ("tbc duong cheo chinh la:%f",tbc);
	return 0;
}
	

