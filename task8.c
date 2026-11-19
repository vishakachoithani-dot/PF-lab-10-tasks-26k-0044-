#include <stdio.h>
struct order{
	int id;
	char customer[50];
	float amount;
	char status;
};
void calculateDiscount(struct order o){
	if (o.amount >= 2000){
		o.amount = o.amount - (o.amount*0.10);
	}
	printf("After tryDiscount: %.2f", o.amount);
	}

void updatedOrder(struct order o){
	if (o->amount >= 2000){
		o->amount = o->amount - (o->amount * 0.10);
		o->status = 'D';	
	}
	else{
		o->status = 'P';
	}
}
int main(){
	struct order o[3] = {{1501,"Hamza",2250.00,'D'},
	{1502,"Ayesha",2250.00,'D'},
	{1503,"Bilal",2250.00,'D'}
};
calculateDiscount(o);
updatedDiscount(o);
int total = 0;
for (int i =0; i<3,i++){
	printf("%d  |  %s |  Rs. %.2f  | %c",o[i].id,o[i].customer,o[i].amount,o[i].status);
}
}
