/*
*Programmer: Ayan Bin Moeen
*Desc: Practicing loops with dummy problems
*Date: 10/3/2023
*/
#include <stdio.h>
int main(){
int elements;
int i;
int j;
printf("Enter the number of elements: \n");
scanf("%d", &elements);
int num[elements];
i=0;
j=0;
while(i<elements){
    printf("Enter the number: \n", i+1);
    scanf("%d", &num[i]);

j = j + num[i];
    ++i;
    }
    printf("Sum is %d \n", j);
}
