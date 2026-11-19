// task 5
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int test_box(int i,int j,char str[]);
int main(){
	char sentence[100];
	char sen1[100];
	printf("Enter the sentence: ");
	fgets(sentence,sizeof(sentence),stdin);
	int i;
	for(i = 0;i<strlen(sentence);i++){
		sen1[i] = tolower(sentence[i]);
		}
	sen1[i]='\0';
	char sen2[100];
	int j = 0;
	for(int i = 0;i<strlen(sen1);i++){
		if (isalnum(sen1[i])){
			sen2[j] = sen1[i];
			j++;
		}
	}
	sen2[j]='\0';
	int result = test_box(0,strlen(sen2)-1,sen2);
	(result)? printf("Mirror box"):printf("Normal box");
	return 0;
}

int test_box(int i,int j,char sen2[]){
	if (i==j || i>j){
		return 1;
	}
	if (sen2[i] != sen2[j]){
		return 0;
	}
	
	return test_box(i+1,j-1,sen2);
}
