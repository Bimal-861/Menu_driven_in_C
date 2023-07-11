#include<stdio.h>
typedef struct{
	int (*ptr)(int,int);
	int n1;
	int n2;
}billCalculator;

int amountBill(int n,int n1){
	switch(n){
	
		case 1:return (n1*60);
				break;
		case 2:return (n1*100);
				break;	
		case 3:return (n1*80);
				break;
		default:
			printf("Enter a valid choice");

	}
}



int main(){
	int ch,n;
	billCalculator c;
	c.ptr=amountBill;
	int bill=0;
	printf("Welcome to hotel XYZ !!!\nDo you want to display item\n1.Yes\n0.No");
	scanf("%d",&ch);
	
	while(ch){
	
		printf("Enter The Food you want:\n1.Chow-->$60\n2.Biriyani-->$100\n3.Kabab-->$80\n");
		scanf("%d",&c.n1);
		printf("Enter How Many Quantity you want:\n");
		scanf("%d",&(c.n2));
		bill+=c.ptr(c.n1,c.n2);
		printf("Do you want More Items :\n1.Yes\n0.No\n");
		scnaf("%d",&n);
		ch=n;
	}
	printf("Your Order Delivered Shortly....\n");
	printf("The total bill is :%d",bill);
	
}

