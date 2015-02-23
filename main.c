#include <stdio.h>
#include <stdlib.h>

#include "complexNumbers.h"
#include "quadraticEquationSolver.h"

int main(int argc, char** argv) {
    
    float a,b,c;
    complexNumber x1,x2;
    
    printf("Inserisci coefficente a:");
    scanf("%f",&a);
    
    printf("Inserisci coefficente b:");
    scanf("%f",&b);
    
    printf("Inserisci coefficente c:");
    scanf("%f",&c);
    
    x1 = calcolox1(a,b,c);
    x2 = calcolox2(a,b,c);
       
    
    printf("\nx1: %s\nx2: %s\n", formatComplexNumber(x1), formatComplexNumber(x2));
    
    return (EXIT_SUCCESS);
}

