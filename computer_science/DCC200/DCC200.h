#ifndef DCC200_H
#define DCC200_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <sstream>

// 00 - C++ Revision
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

// 01 - Pointers
void swap(int* a, int* b);
void division(int num, int div, int* q, int* r);
bool countAndClassifyNumbers(int n, int vet[], int* even, int* odd, int* negatives);
void reverse(int vet[], int n);

#endif // DCC200_H
