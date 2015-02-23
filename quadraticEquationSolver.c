#include "quadraticEquationSolver.h"

#include <math.h>

float determinante(float a,float b,float c){
    return (float) pow(b, 2) - (4*a*c);
}

complexNumber calcolox1 (float a,float b,float c){
    complexNumber r;
    float delta;
    delta=determinante(a,b,c);
    
    if(delta<0){
        r.re = -b;
        r.im = sqrt(-delta);
    }
    else {
        r.re = (-b + sqrt(delta));
        r.im = 0;
    }
    r.re /= (2*a);
    r.im /= (2*a);
    
    return r;
}

complexNumber calcolox2 (float a,float b,float c){
    complexNumber r;
    float delta;
    delta=determinante(a,b,c);
    
    if(delta<0){
        r.re = -b;
        r.im = sqrt(-delta);
    }
    else {
        r.re = (-b - sqrt(delta));
        r.im = 0;
    }
    r.re /= (2*a);
    r.im /= (2*a);
    
    return r;
}