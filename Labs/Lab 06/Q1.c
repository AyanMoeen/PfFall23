/*
*Programmer: Ayan Bin Moeen
*Desc: Practicing loops with dummy problems
*Date: 10/3/2023
*/
#include<stdio.h>
int main (){
int n;
int i;
int sum=0;
printf("Enter number: \n");
scanf("%d",&n);
for(i=1; i<n; i++){
	
if(n%i==0){
	sum=sum+i;
}
}
printf("%d", sum);
}
