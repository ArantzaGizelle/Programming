#include <stdio.h>
#define Tamano_Arreglo  100

      main()
{

      int c;  
      int i;  
          
      int s;   
      int  wn = 1;  
      int longer_word_length = 0;
      int long_word = 0;
      int caracteres[Tamano_Arreglo + 1] = { 0, 0 };  

      while ( (c = getchar()) != EOF)
{
      if( c == '\t'  || c == '\n' || c == ' ' )

{
      if ( longer_word_length < caracteres[wn])
{
      longer_word_length = caracteres[wn];
     long_word = wn;
}
      wn++;
}

else
      caracteres[wn]++;

}

      printf("Word number is: %d ", wn - 1);
      printf("\n\n");
      for ( s = longer_word_length; s >= 1; s-- )
     {
      for ( i = 1; i <= wn; i++ )
   {
      if ( caracteres[i] >= s )
      printf("* ");
      else
      printf("  ");
}

printf("\n");

}

printf("\n");
return 0;
}