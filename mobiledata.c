/* NAME: SADAM ABDI MUHUMED 
REG:CT101/ G/29275
*/
#include <stdio.h>
#include<math.h>
int main(){
int choice;
printf("Select your preferred bundle(100mb,500mb,1gb,2gb): ");
scanf("%d", &choice);
printf("Enter your choice(1-4) ");
scanf("%d", &choice);

switch(choice){
case 1:
printf("You selected 100mb, cost=50 kes\n");break;
case 2:
printf("You selected 500mb, cost=200 kes\n");break;
case 3:
printf("You selected 1gb, cost=350 kes\n");break;
case 4:
printf("You selected 2gb, cost=600 kes\n");break;
}
return 0;
}