#include <stdio.h>;
int main (){
	int a;
	printf ( " nhap a= \n");
	scanf ( "%d",&a);
	if ( a>=2 && a <= 8){
		if ( a>=2 &&  a<=7){
			printf (" a la mot thu trong tuan va la thu %d \n ",a);
		}else{
			printf (" a la chu nhat");
		}
	}else{
		printf (" a = %d  ko la 1 thu trong tuan",a);
	}
}

