#include "DCC200.h"
using namespace std;

struct TestResults {
    int passed = 0;
    int failed = 0;
} g_results;

#define TEST(expr) \
do { \
cout << #expr << " ... "; \
if (expr) { \
cout << "PASS" << endl; \
g_results.passed++; \
} else { \
cout << "FAIL" << endl; \
g_results.failed++; \
} \
} while(0)

template<typename Func>
auto withInput(const string& input, Func func)
{
	stringstream ss(input);
	streambuf* old = cin.rdbuf(ss.rdbuf());
	auto result = func();
	cin.rdbuf(old);
	return result;
}

int main()
{
	// 00-1.cpp
	// 00-2.cpp
    TEST(abs(withInput("2 4 6", []()
		{
			return readAndCalculateAverage(3);
		}) - 4.0) < 0.001);

	// 00-3.cpp
    TEST(abs(withInput("2 4 6", []()
		{
			float vet[3];
			return readVectorAndCalculateAverage(3, vet);
		}) - 4.0) < 0.001);

	// 00-4.cpp
	TEST(findCharInString("hello, world", 'o') == 4);
	TEST(findCharInString("hello, world", 'z') == -1);

	// 00-5.cpp
	TEST(isPrime(17) == true);
	TEST(isPrime(8) == false);
	TEST(isPrime(1) == false);

	// 00-6.cpp
	// 00-7.cpp
	TEST(factorial(5) == 120);
	TEST(factorial(1) == 1);

	// 00-8.cpp
	TEST(sumPowers(2, 3) == 15);
	TEST(sumPowers(5, 0) == 1);

	// 00-9.cpp
	TEST(abs(calculatePi(1) - 4.0) < 0.001);
	TEST(abs(calculatePi(1000) - 3.14059) < 0.001);

	// 00-10.cpp
	TEST(abs(withInput("0.001", []()
		{
			return calculateEuler();
		}) - 2.71828) < 0.001);

	// 00-11.cpp
	// 00-12.cpp
	TEST(largestEvenValue(5, (float[]){1.0, 4.0, 2.0, 9.0, 8.0}) == 8.0);

	// 00-13.cpp
	TEST(withInput("5.0 -1.0 -2.0", []()
		{
			float vet[2];
			readNegatives(2, vet);
			return vet[0] == -1.0 && vet[1] == -2.0;
		}));

	int total = g_results.passed + g_results.failed;
	cout << "PASS:\t" << g_results.passed << "/" << total << endl;
	cout << "FAIL:\t" << g_results.failed << "/" << total << endl;

	return 0;
}
