#ifndef DCC200_H
#define DCC200_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <sstream>

float readAndCalculateAverage(int n);
float readVectorAndCalculateAverage(int n, float arr[]);
int findCharInString(std::string str, char ch);
bool isPrime(int n);
int factorial(int n);
float sumPowers(float x, int n);
float calculatePi(int n);
float calculateEuler();
void printArithmeticTable();
float largestEvenValue(int n, float vet[]);
void readNegatives(int n, float vet[]);

#endif // DCC200_H
