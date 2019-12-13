#include <stdio.h>
int main(){
	int a,b,i;
	printf (" nhap 2 so a va b \n ");
	scanf ("%d",&a);
	scanf ("%d",&b);
	if(a!=b){
      	for(i=a;i>=1;i--)
     	if(a%i==0&&b%i==0){
     		printf("UCLN la : %d", i);
     		break;
     	}
    }else{
		printf (" UCLN la : %d",a);
	}
	return 0;
}

