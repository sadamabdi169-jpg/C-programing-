/* NAME: SADAM ABDI MUHUMED 
REG:CT101/ G/29275/25

*/
#include<stdio.h>

int main(){
int i=0;

int totalweekly_revenue =0;
float daily_revenue=0;
int revenue [7];

printf ("Enter daily revenue ");
for(i=0; i<7;i++){

printf ("\nDay%d:", i+1);//display days on the screen 
scanf ("%d", &revenue [i]);//prompt the user to enter revenue 
totalweekly_revenue =totalweekly_revenue +revenue [i];
}

daily_revenue =totalweekly_revenue/7.0;
printf ("avarage dailyrevenue =%.2f\n", daily_revenue);
printf ("total weekly revenue=%d\n", totalweekly_revenue);
return 0;
}

    