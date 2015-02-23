#include "quadraticEquationSolver.h"

#include <math.h>

float determinante(float a,float b,float c){
    float d;
    d= (float) pow(b, 2) - (4*a*c);
    return d;
}

