#include <stdio.h>

void reverse(int n){
	if(n==0){
		return;
	}
	printf("%d", n % 10);
	reverse (n/10);
}

int sumeven(int n){
	if (n==0){
		return 0;
	}
	int digit= n%10;
	if (digit % 2 == 0){
		return digit + sumeven(n/10);
	}
	return sumeven(n/10);
}



int main (){
	int n;
	printf ("enter your roll no");
	scanf("%d", & n);
	reverse(n);
	int sum;
	sum = sumeven(n);
	printf("\n The sum of even digits is %d",sum);
	return 0;
}
