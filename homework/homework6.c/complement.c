#include "tree.h"
#include <string.h>

 void get (char l[MAX],char p[MAX],char u[MAX]){
          int a = 4, b = 0, c=0;
          
    while (l[a]!=' '&&l[a]!='\t'){
        u[b]=l[a];
        b++;
        a++;
 }
    
    u[b]='\0';
    int longer = strlen(u);
    a++;
    
    
    while (l[a]!=' '&&l[a]!='\t'&&l[a]!='\0'){
       p[c]=l[a];
       c++;
       a++;
    }
    
    p[c]='\0';
    int longer2 = strlen(p);
}