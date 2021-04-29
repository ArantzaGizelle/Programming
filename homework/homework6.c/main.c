#include "tree.h"
#include <stdio.h>
#include <ctype.h> 
#include <string.h> 
#include <stdlib.h> 

  node* insert(char* u, char* p, node* pos, int d) {
  node* temp;
    if (pos == NULL) {
    pos = (node*)malloc(sizeof(node));
    pos->user = u;
    pos->password = p;//PWD
    pos->depth = d;
    printf ("✓user: <%s> ✓PWD: <%s>\n\n", u, p);
    
  } else {
      
    if (strcmp(pos->user, u) == 0) {
      
    if (pos->password!=NULL){
    printf("✓✓user\n\n");
      
    }else{
        
    pos->password = p;
    printf ("✓user: <%s> ✓PWD:  <%s>\n\n", u, p);
      }
    
        
    } else if (strcmp(pos->user, u)>0) { 
        
    temp = insert(u, p, pos->leftChild, d + 1);
    if (pos->leftChild == NULL) {
	pos->leftChild = temp;
      }
      
    } else if (strcmp(pos->user, u)<0){
        
    temp = insert(u, p, pos->rightChild, d + 1); 
    if (pos->rightChild == NULL) {
	pos->rightChild = temp;
      }
    }
  }
  return pos;
}

   void alpha(node* position) {
   
   if (position != NULL) {
   alpha(position->leftChild);
   
   if (position->password!=NULL){
    printf("%s ", position->user);
    }
    alpha(position->rightChild);
  }
}

void delete(node* position, char* u, char* p, int* n){
    
    if (position != NULL) {
        
        delete (position->leftChild, u, p, n);
        delete (position->rightChild, u, p, n);
        if (strcmp(position->user, u) == 0&&strcmp(position->password, p) == 0){
            position->password=NULL;
            printf("X User %s \n\n", u);
            *n = 1;
        }
        
    }
}

int main() {
  extern char linea[];
  node* n = NULL;
  node* tree = NULL; 
  int i;
  int l = 0;
  char* u;
  char* p;
  int indicador=0;
  int contadorespacios =0; 
  int j;
  
  printf("INSTRUCTION FOR USE:\n\n");
  printf("*Register new user   (✓)   : add user PWD → Example: add Luis 123\n");
  printf("*Eliminate user      (x)   : del user PWD → Example: del Luis 123\n");
  printf("*Alphabetical order (ABC)  : check\n\n");
  
  while ((l = saca()) == 0) {
      contadorespacios=0;
    for (j=0; j<MAX; j++){
        if (linea[j]==' '||linea[j]=='\t'){
            contadorespacios++;
        }
    }
    if (strstr(linea, "del") != NULL&&strlen(linea)>=7&&contadorespacios==2) { 
      get(linea, password, user);
      u = (char*)malloc(sizeof(int*) * strlen(user));
      p = (char*)malloc(sizeof(int*) * strlen(password));
      for (i=0; i<strlen(user);i++){
          u[i]=user[i];
      }
      for (i=0; i<strlen(password);i++){
          p[i]=password[i];
      }
      
      indicador=0;
      delete(tree, u, p, &indicador);
      if (indicador==0){
          printf("WRONG\n\n");
      }

      indicador=0;
      contadorespacios=0;
    }
    
    else if (strstr(linea, "add") != NULL&&strlen(linea)>=7&&contadorespacios==2) { 
      get(linea, password, user);
      u = (char*)malloc(sizeof(int*) * strlen(user));
      p = (char*)malloc(sizeof(int*) * strlen(password));
      for (i=0; i<strlen(user);i++){
          u[i]=user[i];
      }
      for (i=0; i<strlen(password);i++){
          p[i]=password[i];
      }
     
      if (strlen(password)>0&&strlen(user)>0){
      n = insert(u,p, tree, 0); 
	  if (tree == NULL) {
	    tree = n; 
	    }
	   contadorespacios=0;
      }
      else if (strlen(password)<=0||strlen(user)<=0){
          printf ("WRONG\n\n");
      }
      }
      
    else if (strstr(linea, "check") != NULL&&strlen(linea)==5) {
      alpha(tree);
      printf(":(ABC)\n\n");
      contadorespacios=0;
    }
    else{
        printf("WRONG\n\n");
        contadorespacios=0;
    }
  }
  
  return 0;
}

int saca() { 
          
  extern char linea[];
  int c, i = 0;

  for (; i < MAX - 1 && (c = getchar()) != EOF && c != '\n';) {
        linea[i++] = c;
  }
  linea[i] = '\0'; 
  return c == EOF;
}

