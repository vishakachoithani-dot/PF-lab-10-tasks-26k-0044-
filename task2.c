#include <stdio.h>
static int calls=0;
int ways (int n){
 	calls++;
 	if (n<=1){
 		return 1;
	 }
	return ways(n-1)+ ways(n-2);
}

int main (){
	int a;
	calls=0;
	int stairs;
	printf("enter number of stairs: ");
	scanf("%d",&stairs);
	a=ways(stairs);
	printf("n=%d | ways = %d | calls = %d",stairs,a,calls);
	return 0;
}
