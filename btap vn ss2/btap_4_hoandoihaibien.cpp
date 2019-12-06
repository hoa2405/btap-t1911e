#include <stdio.h>
int main () {
	int x,y,z ;
	printf (" nhap x= \n");
	scanf ("%d",&x);
	printf (" nhap y= \n");
    scanf ("%d",&y);
    z = x ;
    x = y ;
    y = z ;
    printf ("x va y hoan doi vi tri cho nhau\n");
    printf ("x =  %d  \n",x);
    printf ("y =  %d  \n",y);
}
    
