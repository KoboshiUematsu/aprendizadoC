#include <stdio.h>

int main (){

    int x, y, z, r;
    char o;

    printf("valor1: ");
    scanf("%i", &x);

    printf("operador: ");
    scanf(" %c", &o);

    printf("valor2: ");
    scanf("%i", &y);

   switch (o){
    
       case '+':

    z = x + y;
    printf("soma: %i ", z);
    break;

       case '-':

    z = x - y;
    printf("resultado: %i", z);
    break;

       case '*':

    z = x * y;
    printf("resultado: %i", z);
    break;

       case '/': 

    z = x / y;
    r = x % y;
    printf("divisao: %i ", z);
    printf("sobra: %i", r);
    break;

       default:
    printf("operacao invalida");
    return 404;
    break;
   }


return 0;
}