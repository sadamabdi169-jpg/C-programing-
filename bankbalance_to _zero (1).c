/* NAME: SADAM ABDI MUHUMED 
REG:CT101/ G/29275
subtracting withdrawal amount from balance until it becomes zero 

*/
#include <stdio.h>
int main (){
// declaration of variable 
int amount;
//Ask the user to enter amount 
printf ("Enter amount ");
scanf ("%d",&amount);

int balance=5000;
// loop balance from 5000 to 0
while(balance>0){
balance=balance-amount ;
//display subtraction of amount from balance until zero 
printf ("%d-%d\n",balance,amount);
}



return 0;
}