/*this code was made thanks to the instructions of the program book and video tutorials*/

#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>

#define MAXOP 100 
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

int main()
{
    /*                     modified parts
    --------------------------------------------------------*/
    int type;
    int cn=0;/*amount of numbers*/
    int cl=0;/*number of letters*/
    int ce=0;/*number of errors*/

    double op2;
    char s[MAXOP];
    int le=0;/*found letter*/
    int q=0;/*question*/
    int a=0;/*allocation*/
    int ne =0;/*number found*/
    int m=0; /*move*/
    int yes=0;/*answer yes*/
    int no=0; /*answer no*/
    int wrong=0;

    int ABC[26]={0}; /*alphabet*/
    int c[26]={0}; /*counter*/
    
     printf ("INSERT NUMBERS\n");
     while ((type = getop(s)) != EOF) {
        if (m==0) {
        switch (tolower(type)) { /*converts a given letter to lowercase*/
            case NUMBER:
            printf("NUMBER: %s\n",s);
            push(atof(s));/*converts a string into a floating point numerical representation*/
            ne = atof(s);
            cn++;
            break;
            case '+':
            push(pop() + pop());
            break;
            case '*':
            push(pop() * pop());
            break;
            case '-':
            op2 = pop();
            push(pop() - op2);
            break;
            case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("wrong:  divisor  0\n");

            break;
            case '\n':
            if (!a&&!q){ /*becomes an operation*/
            printf("\t%.8g\n", pop());
            /*a cycle is generated*/
            a=0;
            le=0;
            q=0;
            ne =0;
            cn=0;
            cl=0;
            ce=0;
            }
            else if (a==1&&!q&&cn==1&&cl==1){ 
            if (c[le]==0){
                ABC[le]=ne;
                printf("allocation made\n");
                c[le]++; 
                
                a=0;
                le=0;
                q=0;
                pop();
                pop();
                ne=0;
                cn=0;
                cl=0;
                ce=0;

            }

            else{

                m=1;
                printf("overwrite the variable?\ny --> YES\nn-->NO\n");
                pop();
                pop();
            }
            }

            else if (a==1&&q==1&&cn==1&&cl==1){
                ABC[le]=ne;
                pop();
                pop();
                printf("allocation made\n");
                c[le]++; 
                
                a=0;
                le=0;
                q=0;
                ne=0;
                cn=0;
                cl=0;
                ce=0;
            }
            else{
                printf("wrong: your input is not well\n");
                a=0;
                le=0;
                q=0;
                ne=0;
                cn=0;
                cl=0;
                pop();
                pop();
                ce=0;
            }

            break;
            case '=':
            a=1;
            break;
            case ':':
            q=1;
            break;
            default:
            if (type>=97&&type<=122){
                push(ABC[type-97]);
                le=type-97;
                cl++;

            }
            else {
            ce++;
            printf("wrong: is not a command %s\n", s);
            }
            break;
        }

     }

     else {

     switch (tolower(type)) {
     case 'y':
     yes++;
     push(0); /*becomes a constant*/
     break;
     case 'n':
     no++;
     push(0); 
     break;
     case '\n':
     if (yes==1&&no==0&&wrong==0){
        ABC[le]=ne;
        pop();
        printf("allocation made\n");
        c[le]++;
        
        a=0;
        le=0;
        q=0;
        ne=0;
        no=0;
        yes=0;
        wrong=0;
        m=0;
        cn=0;
        cl=0;
        ce=0;

     }
     else if (yes==0&&no==1&&wrong==0){
        pop();
        printf("You forgot to make the assignment\n");
        
        a=0;
        le=0;
        q=0;
        ne=0;
        no=0;
        yes=0;
        m=0;
        wrong=0;
        cn=0;
        cl=0;
        ce=0;

     }
     else{
        pop();
        printf("wrong: your input is not well\n\n");
        printf("overwrite the variable?\ny --> YES\nn-->NO\n");
        no=0;
        yes=0;
        wrong=0;
        cn=0;
        cl=0;
        ce=0;
     }
     break;
     default:
     wrong++;
     break;
     }
     }
    }
    return 0;
}
/*-------------------------------------------------------------*/
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++]=f;
    else
        printf("wrong:space full, cant push %g\n",f);
}

double pop(void)
{
    if(sp>0)
        return val[--sp];
    else
    {
        printf("wrong: empty space\n");
        return 0.0;
    }
}

#include<ctype.h>

int getch(void);
void ungetch(int);

int getop(char s[])
{
    int i,c;

    while((s[0] = c = getch()) == ' ' || c =='\t')
        ;
    s[1] = '\0';
    
    
    /*                     modified parts
    --------------------------------------------------------*/
    i = 0;
    if(!isdigit(c) && c!='.' && c!='-'){ /*check if the passed character is a digit*/
        if (!isalpha(c)) /*checks whether a character is an alphabet or not*/
        return c; 
        if (isalpha(c)){
        return tolower(c);
        }

    }

    if(c=='-')
        if(isdigit(c=getch()) || c == '.')
            s[++i]=c;
        else
        {
            if(c!=EOF)
                ungetch(c);
            return '-';
        }

    if(isdigit(c))
        while(isdigit(s[++i] =c =getch()))
            ;

    if(c=='.')
        while(isdigit(s[++i] = c=getch()))
            ;
/*----------------------------------------------------*/
    s[i] = '\0';
    if(c!=EOF)
        ungetch(c);
    return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("ungetch:character saturation\n");
    else
        buf[bufp++] = c;
}