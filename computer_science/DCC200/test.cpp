#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "DCC200.h"
#include "doctest.h"
using namespace std;

template<typename Func>
auto withInput(const string& input, Func func)
{
    stringstream ss(input);
    streambuf* old = cin.rdbuf(ss.rdbuf());
    auto result = func();
    cin.rdbuf(old);
    return result;
}

TEST_CASE("Module 00: C++ Revision") {
    // 00-01.cpp
	// 00-02.cpp
    {
        float avg = withInput("2 4 6", []() { return readAndCalculateAverage(3); });
        CHECK(avg == doctest::Approx(4.0).epsilon(0.001));
    }

    // 00-03.cpp
    {
        float avg = withInput("2 4 6", []() {
            float vet[3];
            return readVectorAndCalculateAverage(3, vet);
        });
        CHECK(avg == doctest::Approx(4.0).epsilon(0.001));
    }

    // 00-04.cpp
    {
        CHECK(findCharInString("hello, world", 'o') == 4);
        CHECK(findCharInString("hello, world", 'z') == -1);
    }

    // 00-05.cpp
    {
        CHECK(isPrime(17) == true);
        CHECK(isPrime(8) == false);
        CHECK(isPrime(1) == false);
    }

    // 00-06.cpp
	// 00-07.cpp
    {
        CHECK(factorial(5) == 120);
        CHECK(factorial(1) == 1);
    }

    // 00-08.cpp
    {
        CHECK(sumPowers(2, 3) == 15);
        CHECK(sumPowers(5, 0) == 1);
    }

    // 00-09.cpp
    {
        CHECK(calculatePi(1) == doctest::Approx(4.0).epsilon(0.001));
        CHECK(calculatePi(1000) == doctest::Approx(3.14059).epsilon(0.001));
    }

    // 00-10.cpp
    {
        double e = withInput("0.001", []() { return calculateEuler(); });
        CHECK(e == doctest::Approx(2.71828).epsilon(0.001));
    }

    // 00-12.cpp
    {
        float vals[] = {1.0f, 4.0f, 2.0f, 9.0f, 8.0f};
        CHECK(largestEvenValue(5, vals) == 8.0f);
    }

    // 00-13.cpp
    {
        bool res = withInput("5.0 -1.0 -2.0", []() {
            float vet[2];
            readNegatives(2, vet);
            return vet[0] == -1.0f && vet[1] == -2.0f;
        });
        CHECK(res == true);
    }
}

TEST_CASE("Module 01: Pointers") {
    // 01-01.cpp
    // 01-02.cpp
    // 01-03.cpp
    // 01-04.cpp
    {
        int a = 10, b = 20;
        swap(&a, &b);
        CHECK(a == 20);
        CHECK(b == 10);
    }

    // 01-05.cpp
    {
        int q = 0, r = 0;
        division(17, 5, &q, &r);
        CHECK(q == 3);
        CHECK(r == 2);
    }

    // 01-06.cpp
    {
        int vet[] = {1, -2, 3, 4, -5};
        int even = 0, odd = 0, negatives = 0;
        bool res = countAndClassifyNumbers(5, vet, &even, &odd, &negatives);
        CHECK(even == 2);
        CHECK(odd == 3);
        CHECK(negatives == 2);
        CHECK(res == true);
    }

    // 01-07.cpp
    {
		int vet_odd[5]  = {1, 2, 3, 4, 5};
		int vet_even[4] = {10, 20, 30, 40};
		reverse(vet_odd, 5);
		reverse(vet_even, 4);
		CHECK(vet_odd[0] == 5);
		CHECK(vet_odd[4] == 1);
		CHECK(vet_odd[2] == 3);
		CHECK(vet_even[0] == 40);
		CHECK(vet_even[3] == 10);
    }
}
