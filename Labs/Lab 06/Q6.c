/*
*Programmer: Ayan Bin Moeen
*Desc: Practicing loops with dummy problems
*Date: 10/3/2023
*/
#include <stdio.h>

int main(){
int n;
int t=21;
int i;
while(t>1){
printf("Pick a number of matchsticks (1, 2, 3, 4): \n");
scanf("%d",&n);
if(n<=4 && n>=1){

t=t-n;
printf("Matchsticks left: %d\n", t);

i=5-n;
printf("The computer picked: %d\n", i);

t=t-i;
printf("Matchsticks left: %d\n", t);
}

else{
printf("Please select matchsticks from 1 through 4\n");
}

}
printf("You lose\n");
}
