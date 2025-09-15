#include <cassert>
#include <cmath>
#include "statistics.h"
#include "test.h"

int main() {
    test1();
    test2();
    // If all assertions pass
    return 0;
}

void test2() {
    int arr[] = {10, 20, 30, 40, 50, 78, 89, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Test sum
    assert(sum(arr, n) == 317);

    // Test average
    assert(average(arr, n) == 15.85);
    // Test standardDeviation (should be approximately 27.74887385)
    double sd = standardDeviation(arr, n);
    assert(std::abs(sd - 27.74887385) < 1e-6);
}   


void test1()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Test sum
    assert(sum(arr, n) == 15);

    // Test average
    assert(average(arr, n) == 3.0);

    // Test standardDeviation (should be sqrt(2.0))
    double sd = standardDeviation(arr, n);
    assert(std::abs(sd - std::sqrt(2.0)) < 1e-6);

    // Test arrayMax
    assert(arrayMax(arr, n) == 5);

    // Test arrayMin
    assert(arrayMin(arr, n) == 1);

    // Test difference (max - min)
    assert(difference(arr, n) == 4);

    // Test outputArray (just call, no assert)
    outputArray(arr, n);
}

