#define MAX 100
  
  typedef struct treenode {
     char* user; 
     char* password; //PWD

  struct treenode* leftChild;
  struct treenode* rightChild;
     unsigned int depth;
} node;

  char linea[MAX], password[MAX], user[MAX];
     int saca();
void get (char l[MAX],char p[MAX],char u[MAX]);
     node* insert(char* u, char* p, node* pos, int d); // ✓  add user
void alpha(node* position); // (ABC) alphabetic order
void delete(node* position, char* u, char* p, int* n); // x eliminate user