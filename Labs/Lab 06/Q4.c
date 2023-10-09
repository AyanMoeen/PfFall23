/*
*Programmer: Ayan Bin Moeen
*Desc: Practicing loops with dummy problems
*Date: 10/3/2023
*/
#include <stdio.h>
int main(){
int elements;
int number[elements];
int i;
printf("Enter the number of elements: \n");
scanf("%d", &elements);

i=0;
int j=0;
while(i<elements){
    printf("Enter the element: \n");
    scanf("%d", &number[i]);

while(j<elements){
    j = j + number[i];
    i++;
    }
}
printf("Sum is %d \n", j);
}
