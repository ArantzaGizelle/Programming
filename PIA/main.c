#include <stdio.h> 
#include <math.h> //necessary for some area and perimeter formulas
#include "estandar.h"//standard figure variables
#include  "no_estandar.h"//non-standard figure variables
int main()
{
printf("\nSelect the type of figure to evaluate: \n\n ");//figure type selector
printf("S = Standard \n N = Non-standard \n L = Leave\n\n");
ch=getchar();

switch(ch) {
////////////////////////////////////////////////
     case 'L': puts("Good work, up next !!! \n");//exits the program
 return 0;

break;
////////////////////////////////////////////////////////
default: printf("Upss!!! remember that it is in CAPITALS ");//Error rememberer
    return 0;
break;


 /////////////////////////////////////////////////
case 'S': puts("You have chosen the option STANDARD\n");// standard figures

while ((op = getchar()) != EOF) {//creates a loop

printf("\nSelect the figure to evaluate: \n\n ");
printf("0 = Leave \n 1 = Square \n 2 = Triangle \n 3 = Circle \n 4 = Trapezoid \n 5 = Rectangle \n 6 = Rhombus \n 7 = Polygon with +5 sides  \n\n");

scanf("%i",&op);//saves a user data
switch(op){// types of standard figures
	case 1:
    printf("*SQUARE\n");//square area and perimeter
    printf("How much are their sides equal?\n");
    printf(" _____________\n");
    printf("|             |\n");
    printf("|             |\n");
    printf("|             |\n");
    printf("|             |\n");
    printf("|             |\n");
    printf("|_____________|   L=");
    scanf( " %f",&ladoCuadrado);
    perimetro1 =  ladoCuadrado*4;
    printf("\nTHE PERIMETER IS: %f ",perimetro1);
    area1 = pow (ladoCuadrado,2);// the pow raises the variable to a power
    printf("    THE AREA IS: %f\n\n", area1 );
    break;

    case 2:
    printf("*TRIANGLE \n");//area triangle and perimeter
    printf("How much is the base?\n\n");
    printf("      / %c\n",92);
    printf("     /   %c\n",92);
    printf("    /     %c\n",92);
    printf("   /       %c\n",92);
    printf("  /         %c\n",92);
    printf(" /           %c\n",92);
    printf("/_____________%c   B=",92);
    scanf("%f",&baseTriangulo);
    printf("\nHow much is the height?\n \n");
    printf("      /|%c\n",92);
    printf("     / | %c\n",92);
    printf("    /  |  %c     H=",92);
    scanf("%f",&alturaTriangulo);
    printf("   /   |   %c\n",92);
    printf("  /    |    %c\n",92);
    printf(" /     |     %c\n",92);
    printf("/______|______%c\n\n",92);

    perimetro2=baseTriangulo+(alturaTriangulo*2);
    printf("THE PERIMETER IS:%f ",perimetro2);
    area2=(baseTriangulo*alturaTriangulo)/2;
    printf("     THE AREA IS:%f \n\n",area2);
    break;

    case 3:
    printf("*CIRCLE \n");//area and perimeter circle
    printf("How much is the radio? \n");
    printf(" \n");
    printf("     .   .      \n");
    printf("  .          .\n");
    printf(" .            .\n");
    printf(" .      ------.     r=");
     scanf("%f",&radio);
    printf(" .            . \n");
    printf("  .         . \n");
    printf("     .   .   \n\n");

    area3= 3.1416 * pow(radio,2);
    perimetro3= 2*3.1416*radio;
    printf("THE PERIMETER IS:%f ",perimetro3);
    printf("     THE AREA IS:%f \n\n",area3);
    break;

    case 4:
    printf("*TRAPEZOID\n");//trapeze area and perimeter
    printf("How much is the larger base?\n");
    printf("      _________________\n");
    printf("     /                  %c\n",92);
    printf("    /                    %c\n",92);
    printf("   /                      %c\n",92);
    printf("  /                        %c\n",92);
    printf(" /                          %c\n",92);
    printf("/____________________________%c    B=",92);

    scanf("%f",&baseMayor);
    printf("\nHow much is the lower base? \n");
    printf("      _________________      b=");
    scanf("%f",&baseMenor);
    printf("     /                  %c\n",92);
    printf("    /                    %c\n",92);
    printf("   /                      %c\n",92);
    printf("  /                        %c\n",92);
    printf(" /                          %c\n",92);
    printf("/____________________________%c\n\n",92);
    
    printf("How much is the height? \n");
    printf("      _________________\n");
    printf("     /         |        %c\n",92);
    printf("    /          |         %c\n",92);
    printf("   /           |          %c      h=",92);
    scanf("%f",&alturaTrapecio);
    printf("  /            |           %c\n",92);
    printf(" /             |            %c\n",92);
    printf("/______________|_____________%c\n\n",92);
    
    perimetro4=baseMayor+baseMenor+(2*alturaTrapecio);
    printf("THE PERIMETER IS:%f ",perimetro4);
    area4=alturaTrapecio*((baseMayor+baseMenor)/2);
    printf("     THE AREA IS:%f \n\n",area4);
    break;

    case 5:
    printf("*RECTANGLE \n");//rectangular area and perimeter
    printf("How much is the base?\n");
    printf(" ______________________\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|______________________|   B=");
    scanf("%f",&baseRectangulo);
    printf("\nHow much is the height? \n");
    printf(" ______________________\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |   H=");
     scanf("%f",&alturaRectangulo);
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|______________________|\n\n");
   
    perimetro5=(baseRectangulo*2)+(alturaRectangulo*2);
    printf("THE PERIMETER IS:%f ",perimetro5);
    area5=baseRectangulo*alturaRectangulo;
    printf("      THE AREA IS:%f \n\n",area5);
    break;

    case 6:
    printf("*RHOMBUS \n");//rhombus area and perimeter
    printf("How much is the larger diagonal? \n\n");
    printf("      /|%c\n",92);
    printf("     / | %c\n",92);
    printf("    /  |  %c\n",92);
    printf("   /   |   %c\n",92);
    printf("  /    |    %c\n",92);
    printf(" /     |     %c\n",92);
    printf("/      |      %c      D=",92);
        scanf("%f",&DiagonalMayor);
    printf("%c      |      /\n",92);
    printf(" %c     |     /\n",92);
    printf("  %c    |    /\n",92);
    printf("   %c   |   /\n",92);
    printf("    %c  |  /\n",92);
    printf("     %c | /\n",92);
    printf("      %c|/\n\n",92);
    printf("How much is the smaller diagonal? \n\n");
    printf("      / %c\n",92);
    printf("     /   %c\n",92);
    printf("    /     %c\n",92);
    printf("   /       %c\n",92);
    printf("  /         %c\n",92);
    printf(" /           %c\n",92);
    printf("/_____________%c       d=",92);
     scanf("%f",&DiagonalMenor);
    printf("%c             /\n",92);
    printf(" %c           /\n",92);
    printf("  %c         /\n",92);
    printf("   %c       /\n",92);
    printf("    %c     /\n",92);
    printf("     %c   /\n",92);
    printf("      %c /\n\n",92);
    printf("How much are their sides equal?\n \n");
    printf("      / %c\n",92);
    printf("     /   %c\n",92);
    printf("    /     %c\n",92);
    printf("   /       %c\n",92);
    printf("  /         %c\n",92);
    printf(" /           %c\n",92);
    printf("/             %c\n",92);
    printf("%c             /\n",92);
    printf(" %c           /\n",92);
    printf("  %c         /\n",92);
    printf("   %c       /        L=",92);
    scanf("%f",&ladoRombo);
    printf("    %c     /\n",92);
    printf("     %c   /\n",92);
    printf("      %c /\n\n",92);
    perimetro6=4*ladoRombo;
    printf("THE PERIMETER IS:%f ",perimetro6);
    area6=(DiagonalMayor+DiagonalMenor)/2;
    printf("       THE AREA IS:%f  \n\n",area6);
    break;


    case 7:
    printf("*POLYGON WITH +5 SIDES \n");//POLYGON WITH +5 SIDES area and perimeter
    printf("How many sides does it have? \n");
    printf("      _________\n");
    printf("     /         %c\n",92);
    printf("    /           %c\n",92);
    printf("   /             %c\n",92);
    printf("   %c             /  \n",92);
    printf("    %c           /    \n",92);
    printf("     %c_________/    #L=",92);
    scanf("%f",&numLados);
    printf("\nHow much are their sides equal? \n");
    printf("      _________\n");
    printf("     /         %c\n",92);
    printf("    /           %c\n",92);
    printf("   /             %c\n",92);
    printf("   %c             /  \n",92);
    printf("    %c           /    \n",92);
    printf("     %c_________/    L=",92);
    scanf("%f",&ladoPoligono);
    printf("\nHow much is the apotema? \n");
    printf("      _________\n");
    printf("     /         %c\n",92);
    printf("    /           %c\n",92);
    printf("   /             %c\n",92);
    printf("   %c      |      /  \n",92);
    printf("    %c     |     /    \n",92);
    printf("     %c____|____/    A=",92);
    scanf("%f",&apotema);
    perimetro7= ladoPoligono * numLados;
    printf("\nTHE PERIMETER IS:%f ",perimetro7);
    area7=(perimetro7*apotema )/ 2;
    printf("         THE AREA IS:%f \n\n",area7);
    break;
    
    case 0:// ends the program
    printf("ALL READY!!! COME BACK WHEN YOU WANT \n");
      return 0;
      break;
    
    default: printf("Upss!!! Try again ");// terminates the program, there is an error
    return 0;

}
}
break;
///////////////////////////////////////////////////////

case 'N': puts("You’ve chosen the option NOT STANDARD. \n");// non-standard figures

printf( "\nPERIMETER OF A NON-STANDARD FIGURE:\n " );
   
   acumulador = 0;
     
    do   //accumulator of sides of a non-standard figure, at the end adds them to give the perimeter
    {
        printf( "\nEnter the value of one side : " );
        scanf( "%f", &numero );
        getchar();//parses the typed letter until the user presses an enter
        acumulador += numero;// increases by several units depending on how many times it is repeated

        printf( "\nWant to enter another value?\n  Y=Yes   N=Not   :" );
        fflush( stdin );// empty keyboard buffer
        scanf( "%c", &seguir );
        getchar();
    } while ( seguir != 'N' );//safe entering numbers unless the user enters an N

    printf( "\nTHE PERIMETER IS: %f\n\n", acumulador );//gives accumulator result

}

 printf("\nAREA OF A NON-STANDARD FIGURE\n\n");//accumulates the area of the figures that make up the non-standard figure regardless of the number of figures
 printf("By which figures is composed?\n\n  # Write only the figures that make up your geometric figure\n  # The figures you don’t need just add a zero \n\n");
 
acumulador1=0,acumulador2=0,acumulador3=0,acumulador4=0,acumulador5=0,acumulador6=0,acumulador7=0;
printf("*SQUARE\n");//cumulative area of the square
    do {
    printf("How much are their sides equal?\n");
    printf(" _____________\n");
    printf("|             |\n");
    printf("|             |\n");
    printf("|             |\n");
    printf("|             |\n");
    printf("|             |\n");
    printf("|_____________|   L=");
fflush( stdin );
    scanf("%f",&ladoCuadrado);
    area1 = (pow (ladoCuadrado,2));
    acumulador1 += area1;
       } while ( ladoCuadrado != 0);//safe entering sides of different shapes unless user enters 0
 getchar();

    printf("\n*TRIANGLE \n");//cumulative area of the triangle
    do{
    printf("How much is the base?\n");
    printf("      / %c\n",92);
    printf("     /   %c\n",92);
    printf("    /     %c\n",92);
    printf("   /       %c\n",92);
    printf("  /         %c\n",92);
    printf(" /           %c\n",92);
    printf("/_____________%c   B=",92);
    fflush( stdin );
    scanf("%f",&baseTriangulo);
    printf("\nHow much is the height? \n");
    printf("      /|%c\n",92);
    printf("     / | %c\n",92);
    printf("    /  |  %c     H=",92);
     fflush( stdin );
    scanf("%f",&alturaTriangulo);
    printf("   /   |   %c\n",92);
    printf("  /    |    %c\n",92);
    printf(" /     |     %c\n",92);
    printf("/______|______%c\n\n",92);
    area2=((baseTriangulo*alturaTriangulo)/2);
    acumulador2 += area2;
    } while (baseTriangulo != 0);
 getchar();

    printf("*CIRCLE \n");//cumulative area of the circle
    do{
    printf("How much is the radio? \n");
    printf(" \n");
    printf("     .   .      \n");
    printf("  .          .\n");
    printf(" .            .\n");
    printf(" .      ------.     r=");
        fflush( stdin );
     scanf("%f",&radio);
    printf(" .            . \n");
    printf("  .         . \n");
    printf("     .   .   \n\n");
    area3= (3.1416 * pow(radio,2));
acumulador3 += area3;
     } while ( radio != 0);
 getchar();

    printf("*TRAPEZOID\n");//accumulated area of the trapezium
    do{
    printf("How much is the larger base?\n");
    printf("      _________________\n");
    printf("     /                  %c\n",92);
    printf("    /                    %c\n",92);
    printf("   /                      %c\n",92);
    printf("  /                        %c\n",92);
    printf(" /                          %c\n",92);
    printf("/____________________________%c    B=",92);
    fflush( stdin );
    scanf("%f",&baseMayor);
    printf("\nHow much is the lower base? \n");
    printf("      _________________      b=");
       fflush( stdin );
    scanf("%f",&baseMenor);
    printf("     /                  %c\n",92);
    printf("    /                    %c\n",92);
    printf("   /                      %c\n",92);
    printf("  /                        %c\n",92);
    printf(" /                          %c\n",92);
    printf("/____________________________%c\n\n",92);
    printf("How much is the height? \n");
    printf("      _________________\n");
    printf("     /         |        %c\n",92);
    printf("    /          |         %c\n",92);
    printf("   /           |          %c      h=",92);
       fflush( stdin );
    scanf("%f",&alturaTrapecio);
    printf("  /            |           %c\n",92);
    printf(" /             |            %c\n",92);
    printf("/______________|_____________%c\n\n",92);
    area4=(alturaTrapecio*((baseMayor+baseMenor)/2));
acumulador4 += area4;
    } while ( baseMayor != 0);
 getchar();


    printf("\n*RECTANGLE \n");//cumulative area of the rectangle
    do{
    printf("How much is the base?\n");
    printf(" ______________________\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|______________________|   B=");
    fflush( stdin );
    scanf("%f",&baseRectangulo);
    printf("\nHow much is the height? \n");
    printf(" ______________________\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |   H=");
         fflush( stdin );
     scanf("%f",&alturaRectangulo);
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|______________________|\n\n");
    area5=(baseRectangulo*alturaRectangulo);
    acumulador5 += area5;
    } while ( baseRectangulo != 0);
 getchar();


     printf("*RHOMBUS \n");//cumulative area of the rhombus
     do{
    printf("How much is the larger diagonal? \n");
    printf("      /|%c\n",92);
    printf("     / | %c\n",92);
    printf("    /  |  %c\n",92);
    printf("   /   |   %c\n",92);
    printf("  /    |    %c\n",92);
    printf(" /     |     %c\n",92);
    printf("/      |      %c      D=",92);
        fflush( stdin );
        scanf("%f",&DiagonalMayor);
    printf("%c      |      /\n",92);
    printf(" %c     |     /\n",92);
    printf("  %c    |    /\n",92);
    printf("   %c   |   /\n",92);
    printf("    %c  |  /\n",92);
    printf("     %c | /\n",92);
    printf("      %c|/\n\n",92);
    printf("How much is the smaller diagonal? \n");
    printf("      / %c\n",92);
    printf("     /   %c\n",92);
    printf("    /     %c\n",92);
    printf("   /       %c\n",92);
    printf("  /         %c\n",92);
    printf(" /           %c\n",92);
    printf("/_____________%c       d=",92);
     fflush( stdin );
     scanf("%f",&DiagonalMenor);
    printf("%c             /\n",92);
    printf(" %c           /\n",92);
    printf("  %c         /\n",92);
    printf("   %c       /\n",92);
    printf("    %c     /\n",92);
    printf("     %c   /\n",92);
    printf("      %c /\n\n",92);
    area6=((DiagonalMayor+DiagonalMenor)/2);
acumulador6 += area6;
    } while ( DiagonalMayor != 0);
 getchar();


    printf("*POLYGON WITH +5 SIDES \n");//cumulative area of the +5 sided polygon
    do{
    printf("How many sides does it have? \n");
    printf("      _________\n");
    printf("     /         %c\n",92);
    printf("    /           %c\n",92);
    printf("   /             %c\n",92);
    printf("   %c             /  \n",92);
    printf("    %c           /    \n",92);
    printf("     %c_________/    #L=",92);
    fflush( stdin );
    scanf("%f",&numLados);
    printf("\n\nHow much are their sides equal? \n");
    printf("      _________\n");
    printf("     /         %c\n",92);
    printf("    /           %c\n",92);
    printf("   /             %c\n",92);
    printf("   %c             /  \n",92);
    printf("    %c           /    \n",92);
    printf("     %c_________/    L=",92);
    fflush( stdin );
    scanf("%f",&ladoPoligono);
    printf("\n\nHow much is the apotema? \n");
    printf("      _________\n");
    printf("     /         %c\n",92);
    printf("    /           %c\n",92);
    printf("   /             %c\n",92);
    printf("   %c      |      /  \n",92);
    printf("    %c     |     /    \n",92);
    printf("     %c____|____/    A=",92);
    fflush( stdin );
    scanf("%f",&apotema);
    perimetro7= ladoPoligono * numLados;
    area7=(perimetro7*apotema )/ 2;
acumulador7 += area7;
    } while ( numLados != 0);
 getchar();

 areaTotal=acumulador1+acumulador2+acumulador3+acumulador4+acumulador5+acumulador6+acumulador7;//sum the total of all the accumulators of the geometric figures by which it is composed
 printf("\n\nTHE AREA IS: %f \n",areaTotal);//prints the total area


}

