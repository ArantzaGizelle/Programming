#include <stdio.h>

int main()

{          

int c;
int b = 0;
int t = 0;
int n = 0;

while( (c = getchar()) != EOF )
{      
   
if (' ' == c)
{
b++;
}

if ('\t' == c)
{
t++;
}

if ('\n' == c)
{
n++;
}
  
}               

printf("\nEl numero de espacios en blanco es: %d", b);
printf("\nEl numero de tabuladores es: %d", t);
printf("\nEl numero de caracteres de nueva linea es: %d", n);


} 