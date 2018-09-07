
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Code Written By Sam Rilett

int main(int argc, char **argv){

double aR, aI, iR;


printf("Please Enter Angle of Incidence:\n");
scanf("%lf",&aI);
printf("Please Enter Index of Refraction:\n");
scanf("%lf",&iR);

//Error Checking Here:

printf("Angle of incidence is: %.2f degrees\n",aI);
printf("Index of refraction is: %.2f\n",iR);


aI = aI * M_PI / 180;

aR = (1/iR)*sin(aI);
aR = asin(aR);

aR = aR * 180 / M_PI;

printf("Angle of refraction: %.2f degrees\n",aR);


return 0;
}
