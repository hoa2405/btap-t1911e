#include <stdio.h>
int hangcogiatrimax (int a[][4],unsigned int n){
	int max,hang=0;

	for (int i=0;i<4;++i){
		int total=0;
		for ( int j=0;j<4;++j){
			total +=a[i][j];
		}
		if {i==0}{
			max =total;
		}
		if (total>max){
			max=total;
			hang =i;
		}
	}		
	return hang;	
}

int main (){
	int a[4][4]={1,5,7,5,4,3,4,5,6,7,8,9,7,6,5,4};
		printf ("hang co tong lon nhat la:%d",hangcogiatrimax);
	
	return 0;
}
