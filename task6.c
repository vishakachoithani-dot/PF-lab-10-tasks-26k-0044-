#include <stdio.h>
#include <string.h>

struct batters{
	char name[50];
	int runs;
	int balls;
};
int main(){
	struct batters records[5];
	int total = 0;
	int top_score =0, r,k;
	float best_strike =0.0;
	for (int i =0;i<5;r++){
		printf("enter the name: ");
		fgets(records[i].name,50,stdin);
		records[i].name[strcspn(records[i].name,"\n")] = '\0';
		printf("enter the runs: ");
		scanf("%d",&records[i].runs);
		int balls;
		printf("enter the balls: ");
		scanf("%d",&records[i].balls);
		total += records[i].runs;
		if (top_score<records[i].runs){
			top_score = records[i].runs;
			r = i;
		}
		float rate = 0.0;
		if (records[i].balls>0){
			rate = (records[i].runs *100.0)/records[i].balls;
		}
		
	
		if (best_strike<rate){
			best_strike = rate;
			k = i;
		}
		printf("%s\t %d  (%d)  SR: %.2f\n",records[i].name,records[i].balls,records[i].runs,rate);
		
	}
	printf("Team Total: %d\n",total);
	printf(" Team Total : %s (%d)\n",records[r].name,records[r].runs);
	printf("Best strike rate: %s (%.2f)\n",records[k].name,best_strike);
	
	
	
	return 0;
	
}
