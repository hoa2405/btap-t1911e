#include <stdio.h>
int main (){
	int mat1 [4][3],mat2 [4][3],mat3[4][3];
	printf ("nhap cac phan tu cua ma tran 1:\n");
	for (int i=0;i<4;++i){
		for (int j=0;j<3;++j){
			printf ("a[%d][%d]= ",i,j);
			scanf("%d", &mat1[i][j]);
      	}
    }
    printf ("nhap cac phan tu cua ma tran 2:\n");
    for (int i=0;i<4;++i){
		for (int j=0;j<3;++j){
			printf ("a[%d][%d]= ",i,j);
			scanf("%d", &mat2 [i][j]);
      	}
    }
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++) {
         mat3[i][j] = mat1[i][j] + mat2[i][j];
      	}
	}
   	printf("tong hai ma tran la: \n");
   	for (int i = 0; i < 4; i++) {
      	for (int j = 0; j < 3; j++) {
         printf("%d\t", mat3[i][j]);
      	}
      	printf ("\n");
  	}
	return 0;
}
