#include<stdio.h>               
#define TAMANO 1000             
               
int obtenerlinea(char[TAMANO + 1], int);             
void imprime(char[], int);             
               
int main()              

{            
printf("\nEste programa imprime las lineas en reversa. \n");        
printf("Introduzca texto: ");             
               
char cadena[TAMANO + 1];            
int caracteres_recibidos = 0;            
               
caracteres_recibidos = obtenerlinea( cadena, TAMANO);           
               
printf("\nEl numero de caracteres introducidos es: %d\n", caracteres_recibidos);        
               
imprime( cadena, caracteres_recibidos);             
               
return 0;              
}          
              
int obtenerlinea( char entrada[], int longitud)          
{           

int c = 0;            
int contador = 0;            
int i = 1;            
               
printf("\nIntroduzca una linea y se imprimira de forma inversa.\n");       
               
while ( (c = getchar()) != EOF )        
{            
if ( contador++ < longitud )          
entrada[i++] = c;             
               
}            
               
return i;              
               
}          
               
void imprime( char cadena_a_imprimir[], int j)          
              
{          
printf("\nAqui esta la linea en reversa:\n");          
int contador = 0;            
char c = 0;            

for ( contador = j; contador >= 1; --contador)       
{           
c = cadena_a_imprimir[contador];             
putchar(c);               
}            
               
printf("\n\n");               
               
return;               
}           
               