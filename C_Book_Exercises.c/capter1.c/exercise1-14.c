#include <stdio.h>                 
#define Tamano 256 
                  
                  
int main()                 
{                
                  
                  
int c;            
int frecuencia_caracteres[Tamano + 1] = { 0, 0, 0 };         
int i = 0;               
int s = 0;               
int t = 0;               
                  
while (( c = getchar()) != EOF )          
{                        
frecuencia_caracteres[c]++;              
}             

for ( s = 0; s <= Tamano; s++)          
{                  
if (frecuencia_caracteres[s] != 0 )
{  
putchar(s);

for ( t = 1; t <= frecuencia_caracteres[s]; t++)          
printf("*");                  

printf("\n");                  
} 
}                  
return 0;                 
}    