/*
*Programmer: Ayan Bin Moeen
*Desc: Practicing loops with dummy problems
*Date: 10/3/2023
*/
#include<stdio.h>
int main (){
int i;
int a=0;
int b=1;
int limit = 10000;
int sum=0;

for (i=0; i<limit; i++){
i=a+b;
if(i<10000){
	printf("%d\n", i);
	a=b;
	b=i;
	
	if (i%3==0 || i%5==0 ||i%7==0){
	sum=sum+i;}	
}
}

printf("The sum is %d", sum);
}
