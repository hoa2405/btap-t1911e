#include <stdio.h>
int main (){
	int n,t ;
	printf (" nhap ngay \n");
	scanf ( "%d",&n);
	printf ( " nhap thang \n");
	scanf ( "%d",&t);
	int a[12];
	a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
	a[2]=28;
	a[4]=a[6]=a[9]=a[11]=30;
	int x=0;
	for(int i=1;i<=12;i++){
		if(t>i){
			x+=a[i];
		}
	}
	x+=n;
	int y = x%7;
	if (y==7){
		printf ("Ngay %d, thang %d la ngay thu %d trong nam va la chu nhat",n,t,x);
	}else{
		printf ("Ngay %d, thang %d la ngay thu %d trong nam va la thu %d",n,t,x,y+1);
	}
}
