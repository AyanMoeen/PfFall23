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
    i++;
}

i=elements-1;
while(i>=0){
    printf("%d", num[i]);
    i--;
}
}
