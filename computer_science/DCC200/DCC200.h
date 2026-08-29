#ifndef DCC200_H
#define DCC200_H

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

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
float largestEvenValue(int n, float arr[]);
void readNegatives(int n, float arr[]);

// 01 - Pointers
void swap(int *a, int *b);
void division(int num, int div, int *q, int *r);
bool countAndClassifyNumbers(int n, int arr[], int *even, int *odd, int *negatives);
void reverse(int arr[], int n);

// 02 - Dynamic Allocation
float dotProduct(int n, float x[], float y[]);
int *evenIndexes(int vet[], int n);
int *resize(int vet[], int n, int n_new);
void readValues(int n, int *sum, float *average, int *greatest, int *lowest);
int *intercalate(int n, int v1[], int v2[]);
void aboveAverage(int n);
int *subvector(int n, int *vet, int start, int end, int *sub_n);
int *extract(int *n, int **vet, int start, int end, int *sub_n);

#endif // DCC200_H
