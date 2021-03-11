
//This code could be made thanks to the explanation of Angel Raul Chavez
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {
    
  int c;
  
  int n = FALSE;//number
  int p = FALSE;//parenthesis
  int q = FALSE; //quotes
  
  printf("insert your information:\n");
  
  while ((c = getchar()) != EOF) {
      
    switch(c){  //in parentheses the variable to check in this case the c
          
      case  '[':
          p=TRUE;
          putchar(c);
          break;
          
      case  ']':
          p=FALSE;
          putchar(c);
          break;
          
      case  '(':
          p=TRUE;
          putchar(c);
          break;
          
      case  ')':
          p=FALSE;
          putchar(c);
          break;
          
      case  '{':
          p=TRUE;
          putchar(c);
          break;
          
      case  '}':
          p=FALSE;
          putchar(c);
          break;
          
      case  '<':
          p=TRUE;
          putchar(c);
          break;
          
      case  '>':
          p=FALSE;
          putchar(c);
          break;
          
      case  '\"':
          putchar(c);
          q++;
          break;

       case  '\'':
          putchar(c);
          q++;
          break;

    default:  //if different from parentheses
    
        if(c!='.'&&c!=':'&&c!='\?'&&c!='!'&&c!='-'&&c!=';'&&c!='_'){//eliminates the signs of punctuation
            if (p==TRUE||q==TRUE){
            putchar(c);
            }
            
            else{
                
                if (q==2){
                    q=0;
                }
                if (c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){//the numbers to be used are identified
                    n++;
                }else{
                  n=0;
                }
                if (n==1){
                    putchar('X');
                }
                if (n==0){
                    putchar(c);
                }
              }
            }
          }
        }
    return 0;
  }