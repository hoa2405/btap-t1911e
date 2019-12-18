#include <stdio.h>
 int main(){
 	int ary[10];
 	for (int i=1;i<=10;++i){
 		printf ("ary[%d]= \n",i);
 		scanf ("%d",&ary[i]);
	}
	for ( int i=1;i<=10;++i){
 	int tmp = ary[i],nghich_dao=0;
		for (; tmp !=0; tmp/=10)
		{
			nghich_dao = nghich_dao*10+tmp%10;
		}
		printf("Nghich dao: %d\n",nghich_dao);
	}
	return 0;
}
