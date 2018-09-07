#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char**argv){

double years, weeks, days;
double iV, fV, time, aRR;

printf("Initial Value:\n");
scanf("%lf",&iV);
printf("Final Value:\n");
scanf("%lf",&fV);
printf("Years?\n");
scanf("%lf",&years);
printf("Weeks?\n");
scanf("%lf",&weeks);
printf("Days?\n");
scanf("%lf",&days);

time = years + (weeks/52.1429) + (days/365);
aRR = pow(fV/iV,1/time) - 1;
aRR *= 100;

printf("Annualized Rate of Return: %.3f percent\n",aRR);

return 0;
}
