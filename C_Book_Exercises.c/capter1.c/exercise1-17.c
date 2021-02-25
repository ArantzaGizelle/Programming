#include<stdio.h>
  #define Tamano 1000

  void Imprime_Cadena(char [], int );

 
  int main()
  {           
  int c;
  int i = 0;
  char Arreglo[Tamano] = {0, 0, 0};

  printf("\nEnter a string, and if it is larger than eighty characters, it will print as output.\n");
  
  while ( (c = getchar()) != EOF )
  {                 
  Arreglo[++i] = c;
  }                  
 
  if ( i > 80 )
  
  Imprime_Cadena(Arreglo, i);

  if ( i > Tamano )

  printf("\nThe maximum length of the chain was exceeded, which is  %d  character. ", i);

 }           


 void Imprime_Cadena( char Cadena[], int tamano)

 {    

  int s = 1;
  for (s  = 1; s <= tamano; s++)
  { 
  printf("%c", Cadena[s]);
  }  

  printf("\n");
 }    