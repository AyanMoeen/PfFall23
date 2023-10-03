/*
*Programmer: Ayan Bin Moeen
*Desc: Practicing loops with dummy problems
*Date: 10/3/2023
*/
#include<stdio.h>
int main (){
	int num1;
	int num2;
	int LCM;
	int GCD;
	printf("Enter the first number: \n");
	scanf("%d", &num1);
	printf("Enter the second number: \n");
	scanf("%d", &num2);
	
//LCM
	if(num1>num2){
		LCM=num1;
}
	else{
		LCM=num2;
		}
	while(LCM){
	if(LCM%num1==0 && LCM%num2==0){
		printf("LCM is %d\n", LCM);
		break;
	}
		LCM++;
}
//end LCM

//Start GCD
int i=1;
while (i<=num1 || i<=num2){
	if(num1%i==0 && num2%i==0){
	GCD=i;
	}
	i++;
}
printf("GCD is %d\n", GCD);
}
