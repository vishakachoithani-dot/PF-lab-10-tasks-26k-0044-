#include<stdio.h>
int isodd(int n);
int iseven(int n){
	printf("is even(%d)",n);
	if (n==0){
		return 1;
	}
	return isodd(n-1);
}

int isodd(int n){
	printf("is odd(%d)",n);
	if (n==0){
		return 0;
	}
	return iseven(n-1);
}

int main(){
	int s,even;
	printf("enter second");
	scanf("%d", &s);
	even = iseven(s);
	if (even==1){
		printf("\n %d second is GREEN\n",s);
	}
	else{
		printf("\n%d second is RED\n",s);
	}
	
	return 0;
}

