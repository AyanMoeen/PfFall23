/*
*Programmer: Ayan Bin Moeen
*Desc: Practicing loops with dummy problems
*Date: 10/3/2023
*/
#include <stdio.h>
int main(){
int a;
int b;

printf("Enter a:\n");
scanf("%d", &a);
printf("Enter b:\n");
scanf("%d", &b);

int i=a;
while(i<=b){
if(i<=9){
switch(i){
case 0:
    printf("zero\n");
    break;
case 1:
    printf("one\n");
    break;
case 2:
    printf("two\n");
    break;
case 3:
    printf("three\n");
    break;
case 4:
    printf("four\n");
    break;
case 5:
    printf("five\n");
    break;
case 6:
    printf("six\n");
    break;
case 7:
    printf("seven\n");
    break;
case 8:
    printf("eight\n");
    break;
case 9:
    printf("nine\n");
    break;
}
}
else if(i%2==0){
printf("even\n");}
else{
printf("odd\n");
}
i++;
}
}
