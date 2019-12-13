#include <stdio.h>
int main(){
	int s ,n;
	printf (" nhap n=\n");
    scanf ("%d",&n);
    if ( n==1 || n==2){
   		printf ("tong %d so dau tien trong day là  %d",n,n);
    }else{
    	for (int i=2;i<=n; ++i ){
    		s=2;
    		int a=1 , b=1,x ;
			for ( int dem=3;dem<= n;++dem){
				x=a+b;
				a=b;
				b=x;
				s+=x;
			}	
		}
		printf (" tong %d so dau tien trong day la %d \n",n,s);
	}
	return 0;
}
    
	
		
	
