#include <stdio.h>
#define max 2000
void imprime(char lineas[],int caracteres);
     int main(void)
{
     int a,i=0;
     char linea[max]={0,0};

     while((a=getchar())!=EOF){
     linea[i]=a;
     i++;
   }
     imprime(linea,i);
    return 0;
}

    void imprime(char lineas[],int caracteres){
    int i=0,k=0,l=0,j=0,m=0,z=0,b=0;
    char imprimir[max]={0,0,0};

   for(i=0,j=1;i<=caracteres-1;i++,j++){
   if(lineas[i]=='\n'){
   for(l=0,z=1;z<=j;l++,m++,z++){
    imprimir[l]=lineas[m];
 }
    imprimir[l]='\0';
    b=0;
    for(k=j-2;k>=0 && (imprimir[k]==' ' || imprimir[k]=='\t');k--){
    imprimir[k]='\0';
    b++;
 }
    if(b==1)
    printf("%s \n",imprimir);
        else if(k>=0){
   k++;
      imprimir[k]='\n';
    printf("%s",imprimir);
  }
    j=z=0;
   }
 }
}