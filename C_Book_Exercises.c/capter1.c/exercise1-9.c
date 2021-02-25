#include<stdio.h>

int main()
{                    

int anterior;
int c;

while ( (c = getchar()) != EOF )
{                  

if (' ' != c )

{  
if ('\t' != c ) 
{       
putchar(c);
anterior = 'l';  
}  
}       


if ( ' ' == c )
{       

if ( 'l' == anterior ) 
{
printf(" ");
anterior = 'b';   
}
}      

if ( '\t' == c ) 
{       

if ( 'l' == anterior )  
{
printf(" ");
anterior = 'b';   
}
}      

}                

}                    