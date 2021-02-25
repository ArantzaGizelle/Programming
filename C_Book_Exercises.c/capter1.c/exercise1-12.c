# include <stdio.h>
int main()
{     
   int c;
   int previous = 'b'; 

   while ((c = getchar()) != EOF)
{       

   if ( ' ' != c && '\n' != c && '\t' != c)
{      
   previous = 'l';
   putchar(c);
}      
   else
{   
   if ( 'l' == previous ) 
{  
   printf("\n");
   previous = 'b';        
}      
}
}        

}      