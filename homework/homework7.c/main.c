#include "registration.h"

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    header();
    int i;
    int x;
    int pintemporal;
    matrix = (int**)malloc(sizeof(int*) * USUARIOS);
    for (i = 0; i < USUARIOS; i ++){
            matrix[i] = (int*)malloc(sizeof(int) * 6);
            for (x=0; x<6; x++){
            matrix[i][x]=-1;
            }
    }
    int ex=0;
    int op=0;
    while(ex==0){
        int limite;
        limite=count();
        
        printf("INSTRUCTIONS:\n\n ");
        printf("(✔)%d registered workers\n\n", limite);
        printf("※Insert the number of the action you want to perform:\n") ;
        printf(" 1 |Job input(→)\n 2 |Job output(←)\n 3 |New worker(✔)\n 4 |Close(X)\n\n");
        
        scanf("%d", &op);
        if (op==1){
            
        printf("PIN:\n");
        scanf("%d", &pintemporal);
        
        if (pintemporal<=0){
            printf("Wrong (X)\n\n");
        }
        
            else if (pintemporal<=limite){
                if (matrix[pintemporal-1][1]==-1){
                    entradaosalida(pintemporal, 0);
                }
                else{
                    printf("(✔✔)already exists\n\n");
                }
            }
            else{
                printf("Wrong (X)\n\n");
            }
        }
        else if (op==2){
            
        printf("PIN?\n");
        scanf("%d", &pintemporal);
        
        if (pintemporal<=0){
            printf("Wrong (X)\n\n");
        }
        
            else if (pintemporal<=limite){
                
                if (matrix[pintemporal-1][1]!=-1){
                    entradaosalida(pintemporal, 1);
                }
                else{
                    printf("Wrong (X)\n\n");
                }
            }
            else{
                printf("Wrong (X)\n\n");
            }
        }
        else if (op==3){
            registrar();
        }
        else if (op==4){
            int flag=0;
            for (i=0; i<MAX; i++){
                if(matrix[i][0]*matrix[i][1]*matrix[i][2]>0&&matrix[i][3]*matrix[i][4]*matrix[i][5]<0){
                    flag=-1; 
                    printf("Wrong (X)\n\n");
                }
            }
            if (flag==0){
            horario();
            printf("ALL DONE FOR TODAY ;)\n\n");
            ex=1;
            }
        }
        else{
            printf("Wrong (X)\n\n");
        }
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
int count(){
    FILE* sistema = fopen("additional.txt", "r");
    char c;
    int count=0;
    while ((c = fgetc(sistema)) != EOF) {
    if (c == '\n') {
      count++; 
    }
    }
    
    return count;
}
/////////////////////////////////////////////////////////////////////////////////////////
void registrar(){
    int pin;
    pin=count()+1;
    char user[MAX];
    int Sun ;
    int Mon ;
    int Tue ;
    int Wed ;
    int Thu;
    int Fri ;
    int Sat ;
    int h;
    int min;
    int work;
    printf("PIN <%d>\n", pin);
    registrados++;
    printf("USER:\n");
    scanf("%s", user);
    
     do{
        printf("\nWorking days (1)yes (0)Not ⇒ Sun Mon Tue Wed Thu Fri Sat EXAMPLE: 1 0 0 1 1 1 0\n\n"); 
        scanf("%d %d %d %d %d %d %d", &Sun, &Mon, &Tue, &Wed, &Thu, &Fri, &Sat);
    } while(Sun+Mon+Tue+Wed+Thu+Fri+Sat==0||Sun !=0&&Sun !=1||Mon!=0&&Mon!=1||Tue!=0&&Tue!=1||Wed!=0&&Wed!=1||Thu!=0&&Thu!=1||Fri!=0&&Fri!=1||Sat!=0&&Sat!=1);
    
    do {
        printf("\nTime and Minute ⇒ EXAMPLE: 13 29\n\n");
        
        scanf("%d %d", &h, &min);
    } while(h<0||h>23||min<0||min>60);
        
    do {
        printf("\nSeconds worked\n");
        scanf("%d", &work);
    }while(work<=0||work>60);
    printf("(✔)(✔)\n\n");
    
    FILE* escribirsistema = fopen("additional.txt", "a");
    fprintf(escribirsistema, "%d %s %d %d %d %d %d %d %d %d %d %d\n",pin,user,Sun,Mon,Tue,Wed,Thu,Fri,Sat, h, min, work);
    fclose(escribirsistema);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void entradaosalida(int pin, int estado){
    int diferencia=0; 
    time_t tiempoahora;
    time(&tiempoahora);
    struct tm *mitiempo = localtime(&tiempoahora);
    int actualsec=mitiempo->tm_sec;
    int actualmin=mitiempo->tm_min;
    int actualhora=mitiempo->tm_hour;
    int actualyear=mitiempo->tm_year+1900;
    int actualmes=mitiempo->tm_mon+1;
    int actualdia=mitiempo->tm_mday;
    int actualwdia=mitiempo->tm_wday;
    if (estado==0){ 
    FILE* entrada = fopen("input.txt", "a");
    fprintf(entrada, "*For PIN :( %d ) %d %d/%d/%d %d:%d:%d\n", pin, actualwdia, actualdia, actualmes, actualyear, actualhora, actualmin, actualsec);
    fclose(entrada);
    matrix[pin-1][0]=actualhora;
    matrix[pin-1][1]=actualmin;
    matrix[pin-1][2]=actualsec;
    printf("(✔)(✔)\n\n");
    }
    if (estado==1){
    FILE* salida = fopen("output.txt", "a"); 
    fprintf(salida, "*For PIN :( %d ) %d %d/%d/%d %d:%d:%d\n", pin, actualwdia, actualdia, actualmes, actualyear, actualhora, actualmin, actualsec);
    fclose(salida);
    printf("(✔)(✔)\n\n");
    matrix[pin-1][3]=actualhora;
    matrix[pin-1][4]=actualmin;
    matrix[pin-1][5]=actualsec;
    FILE* reporte = fopen("report.txt", "a");
    if (totaldesalidas==0){
        
        fprintf(reporte, "※Report generated on "); 
            switch(actualwdia){
                case 0:
                fprintf(reporte, "Sunday");
                break;
                case 1:
                fprintf(reporte, "Monday");
                break;
                case 2:
                fprintf(reporte, "Tuesday");
                break;
                case 3:
                fprintf(reporte, "Wednesday");
                break;
                case 4:
                fprintf(reporte, "Thursday");
                break;
                case 5:
                fprintf(reporte, "Friday");
                break;
                case 6:
                fprintf (reporte, "Saturday");
                break;
            }
        fprintf(reporte, " %d/%d/%d\n", actualdia, actualmes, actualyear);
    } 
    
    diferencia=(matrix[pin-1][3]*3600+matrix[pin-1][4]*60+matrix[pin-1][5])-(matrix[pin-1][0]*3600+matrix[pin-1][1]*60+matrix[pin-1][2]);
    int horapin=matrix[pin-1][0];
    int minpin=matrix[pin-1][1];
    int segundopin=matrix[pin-1][2];                                                                             
    fprintf(reporte, "*User <%d> input at : <%d:%d:%d> on: <%d/%d/%d> work at: %d seg\n", pin, horapin, minpin, segundopin, actualdia, actualmes, actualyear, diferencia);
    fclose(reporte);
    matrix[pin-1][0]=-1;
    matrix[pin-1][1]=-1;
    matrix[pin-1][2]=-1;
    matrix[pin-1][3]=-1;
    matrix[pin-1][4]=-1;
    matrix[pin-1][5]=-1;
    
    totaldesalidas=9; 
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void header(){
    time_t tiempoahora;
    time(&tiempoahora);
    struct tm *mitiempo = localtime(&tiempoahora);
    switch(mitiempo->tm_wday){
        case 0:
        printf("» Sunday:");
        break;
        case 1:
        printf("» Monday:");
        break;
        case 2:
        printf("» Tuesday:");
        break;
        case 3:
        printf("» Wednesday:");
        break;
        case 4:
        printf("» Thursday:");
        break;
        case 5:
        printf("» Friday:");
        break;
        case 6:
        printf ("» Saturday:");
        break;
    }
    printf("     %d/%d/%d   ", mitiempo->tm_mday, mitiempo->tm_mon+1, mitiempo->tm_year+1900);
    printf(" %d:%d\n\n", mitiempo->tm_hour, mitiempo->tm_min);
    
}
//////////////////////////////////////////////////////////////////////////////////////////////////
void horario(){
    time_t tiempoahora;
    time(&tiempoahora);
    int pinl;
    char usuarioleido[MAX];
    int Sunh;
    int Monh;
    int Tueh;
    int Wedh;
    int Thuh;
    int Frih;
    int sath;
    int hl;
    int minl;
    int work;
    int i;
    struct tm *mitiempo = localtime(&tiempoahora);
    FILE* leersistema = fopen("additional.txt", "r");
    FILE* escribirhorario = fopen("registration.txt", "w");
    char c;
    int count;
    while (fscanf(leersistema, "%d %s %d %d %d %d %d %d %d %d %d %d\n", &pinl, usuarioleido, &Sunh, &Monh, &Tueh, &Wedh, &Thuh, &Frih, &sath, &hl, &minl, &work) == 12) {
    fprintf(escribirhorario, "※User <%s> ,PIN <%d> work at : %d:%d ,work in: <%d seg> work on :  ", usuarioleido, pinl,hl, minl, work);
    if (Sunh==1)
    fprintf(escribirhorario, "Sunday ");
    if (Monh==1)
    fprintf(escribirhorario, "Monday ");
    if (Tueh==1)
    fprintf(escribirhorario, "Tuesday ");
    if (Wedh==1)
    fprintf(escribirhorario, "Wednesday ");
    if (Thuh==1)
    fprintf(escribirhorario, "Thursday ");
    if (Frih==1)
    fprintf(escribirhorario, "Friday ");
    if (sath==1)
    fprintf(escribirhorario, "Saturday ");
    
    fprintf(escribirhorario, "\n\n");    
    }
    fclose(leersistema);
    fclose(escribirhorario);
}


