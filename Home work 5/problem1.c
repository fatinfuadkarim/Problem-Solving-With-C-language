#include <stdio.h>

int max(int x , int y){

 return x>y ? x : y;

}

int main( void )
{
	int x , y , z;

   scanf("%d%d%d",&x,&y,&z);

   printf("maximum integer  : %d" , max(x,max(y,z)));

	return 0;
}



