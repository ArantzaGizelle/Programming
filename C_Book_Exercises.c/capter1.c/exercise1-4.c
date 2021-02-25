#include<stdio.h>
/*print Fahrenheit-Celsius table
    for fahr =0,20...,300;floating-point version*/
main()
{
    float celsius,fahr;
    int lower,upper,step;
    
    lower=0;    /*lower limit of temperature table*/
    upper=300;    /*upper limit*/
    step=20;    /*step size*/
    
    celsius=lower;
    printf("celsius\t fahrenheit\n------------------\n");
    while(celsius <=upper){
        fahr=((9.0/5.0)*celsius)+(32.0);
        printf("%4.0f%10.0f\n",celsius,fahr);
        celsius=celsius+step;
    }
}