#include<stdio.h>

int convertir( int);

main()
{        

float fahr, celsius;
int lower, upper, step;
lower = 0;
upper = 300;
step = 20;
fahr = lower;

while ( fahr <= upper )
{  
celsius = convertir( fahr);
printf("%10.0f%11.1f\n", fahr, celsius );
fahr = fahr + step;
}    

return;
}          


int convertir( int fahrenheit )

{    
return (5.0/9.0)*(fahrenheit - 32);
}    