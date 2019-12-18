#include <stdio.h>
int main (){
	int mat[4][3],matcv[3][4];
	printf ("nhap cac phan tu cua ma tran:\n");
	for (int i=0;i<4;++i){
		for (int j=0;j<3;++j){
			printf ("a[%d][%d]= ",i,j);
			scanf("%d", &mat[i][j]);
      	}
      	printf ("\n");
    }
	for (int i=0;i<4;++i){
		for (int j=0;j<3;++j){
			matcv[i][j]=mat[j][i];
			
		}
	}
	printf("ma tran chuyen vi la: \n");
   	for (int i = 0; i < 3; i++) {
      	for (int j = 0; j < 4; j++) {
         printf("%d\t", matcv[i][j]);
      	}
      	printf ("\n");
  	}
	return 0;
}



