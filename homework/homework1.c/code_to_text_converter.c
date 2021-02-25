#include <stdio.h>
int main()
{
    int c;
    printf("Write your code in html:\n");
    while ((c = getchar()) != EOF)
{
    if(c==' '){
        printf("_");
        c=getchar();
    }
    
    if(c == '<')
    {
        do
        {
            c = getchar();
        } while(c != EOF && c != '>');
    }
    else
    {
        putchar(c);
    }
}
}