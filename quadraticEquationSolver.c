#include "quadraticEquationSolver.h"

#include <math.h>

float determinante(float a,float b,float c){
    return (float) pow(b, 2) - (4*a*c);
}

complexNumber calcolox1 (float a,float b,float c){
    float delta;
    delta=determinante(a,b,c);
    
    if(delta<0){
        
    }
}