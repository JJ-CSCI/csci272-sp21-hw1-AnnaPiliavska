#ifndef BINOMIAL_H
#define BINOMIAL_H

class Binomial {
private:
    float coefficient[3] {0, 1.0, 1.0};
    int power[3] {0, 1, 1};
public:
    Binomial();
    Binomial(float);
    Binomial(float, int);
    Binomial(float, int, float);
    Binomial(float, int, float, int);
    float GetCoefficient(float);
    int GetPower(int);
    int SetPower(int, int);
    int Add(Binomial);
    void Multiply(float);
    void Multiply(float, int);
};
#endif