# define OK 0
   # define ERROR -1
   # define FALSO 0
   # define VERDADERO 1
   # define LLENA 1
   # define PILAMAX 100
   # define ADENTRO 1
   # define AFUERA 0
   # include <stdio.h>

   int superior = -1;   

   int pila[PILAMAX];

   empujar( int nuevo )

   {              


   if ( superior + 1 >= PILAMAX )

   return( LLENA);


   pila[ ++superior ] = nuevo;

   return( OK);


   }             


   int extraer()
   {                

   return( pila[superior--] );

   }               


   int vacio()


  {              

  if( superior < 0 )
  return(VERDADERO);

  return(FALSO);

  }                  


   int Revisa_Parentesis( int datos[])

   { 

   int i;
   int comentario = AFUERA;

   for ( i = 0; datos[i] !=  0; i++ )



    {              

     switch( datos[i])

     {              

     case '{':

     case '[':

     case '(':



     if ( AFUERA == comentario )

     {
     empujar( datos[i]);

     break;

     }

     case '}':

     if ( AFUERA == comentario )

     {

     if (vacio() || extraer() != '{')

     return (ERROR);
     break;

     }

     case ']':

     if ( AFUERA == comentario )

     {

     if (vacio() || extraer() != '[')

     return (ERROR);
     break;

     }

     case ')':

     if ( AFUERA == comentario )

     {

     if (vacio() || extraer() != '(')

     return (ERROR);
     break;

     }


     case '/':

     if ( AFUERA == comentario )

     {

     if ( '*' == datos[i + 1]  )

     comentario = ADENTRO;

     }

     if (ADENTRO == comentario)

     if ( '*' == datos[ i - 1])

     comentario = AFUERA;

     break;

     }          

    }                    

    if ( ADENTRO == comentario )


    return (ERROR);

    if ( vacio())

    return (OK);

    return (ERROR);

   }    


   int main()

   {             
   int cadena[PILAMAX];

   int c;
   int x = 0;

   int j;
   
   printf("\nEste programa funciona como una especie de preprocesador. ");
   printf("\nPor favor introduzca una cadena con comentarios y le dire si ");
   printf(" los parentesis, corchetes, llaves o comentarios estan bien cerrados o no.\n");
   
   
   while( (c = getchar()) != EOF )

   cadena[ x++ ] = c;

   j = Revisa_Parentesis( cadena);

   if ( OK == j  )
   printf("\nLos parentesis estan bien escritos.\n");

   else

   if( ERROR == j )

   printf("\nLos parentesis estan mal escritos.\n");

   }     