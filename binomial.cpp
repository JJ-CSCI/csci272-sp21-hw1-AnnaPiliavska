#include "binomial.h"
#include "catch.hpp"
    
Binomial::Binomial() : Binomial(1.0, 1, 1.0, 1) {}
Binomial::Binomial(float coefficient1) : Binomial(coefficient1, 1, 1.0, 1) {
    /*coefficient[1] = coefficient1;
    power[1] = 1;
    coefficient[2] = 1.0;
    power[2] = 1;*/
}
Binomial::Binomial(float coefficient1, int power1) : Binomial(coefficient1, power1, 1.0, 1) {
    /*coefficient[1] = coefficient1;
    coefficient[2] = 1.0;
    power[2] = 1;

    if (power1 < 1)
        power[1] = 1;
    else 
      power[1] = power1; */
}
Binomial::Binomial(float coefficient1, int power1, float coefficient2) : Binomial(coefficient1, power1, coefficient2, 1) {
    /*coefficient[1] = coefficient1;
    power[1] = power1;
    coefficient[2] = coefficient2;
    power[2] = 1;

    if (power1 < 1)
        power[1] = 1;
    else 
      power[1] = power1; */
}
Binomial::Binomial(float coefficient1, int power1, float coefficient2, int power2) {
    if (power1 < 1)
        power[1] = 1;
    else 
        power[1] = power1;

    if (power2 < 1)
        power[2] = 1;
    else 
        power[2] = power2;

    coefficient[1] = coefficient1;
    coefficient[2] = coefficient2;
}
float Binomial::GetCoefficient(float indexCoefficient) { 
    if (indexCoefficient == 1) {
        indexCoefficient = coefficient[1];
        return coefficient[1];
    } 
    else if (indexCoefficient == 2) {
        indexCoefficient = coefficient[2]; 
        return coefficient[2];
    }
    else 
        return -1;
}   
int Binomial::GetPower(int indexPower) {
    if (indexPower == 1) {
        indexPower = power[1];
        return power[1];
    }
    else if (indexPower == 2) {
        indexPower = power[2];
        return power[2];
    }
    else 
        return -1;
}
int Binomial::SetPower(int indexPower, int Power) {
    if (Power < 0)  
        Power = 1;
        
    if (indexPower == 1) {
        power[1] = Power;
        return 0;
    }
    else if (indexPower == 2) {
        power[2] = Power;
        return 0;
    }
    else 
        return -1;
}
int Binomial::Add(Binomial object) {
    if (power[1] != object.power[1])
        return -1;
    if (power[1] == object.power[1]) {
      coefficient[1] = coefficient[1] + object.coefficient[1];
      coefficient[2] = coefficient[2] + object.coefficient[2];
      return 0;
    }
}
void Binomial::Multiply(float coef) {
    coefficient[1] = coef * coefficient[1];
    coefficient[2] = coef * coefficient[2];
}
void Binomial::Multiply(float coef, int pow) {
    coefficient[1] = coef * coefficient[1];
    power[1] = pow + power[1];
    coefficient[2] = coef * coefficient[2];
    power[2] = pow + power[2];
}