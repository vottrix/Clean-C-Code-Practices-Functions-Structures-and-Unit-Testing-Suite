#include "pch.h"
#include "CppUnitTest.h"

// include the header
extern "C" {
#include "../Spec2/Spec2.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Spec2UnitTests
{
    TEST_CLASS(Spec2UnitTests)
    {
    public:
        // test for an array with positive values
        TEST_METHOD(TestPositiveValues)
        {
            double arr[] = { 8.2, 3.9, 12.1, 2.6, 9.7 };
            double result = SumOfMinMax(arr, 5);
            Assert::AreEqual(14.7, result, 0.0001);         // min is 2.6, max is 12.1, sum is 14.7
        }

        // test for an array with mixed values (positive and negative)
        TEST_METHOD(TestMixedValues)
        {
            double arr[] = { -7.1, 5.4, -3.3, 8.9, 0.0 };
            double result = SumOfMinMax(arr, 5);
            Assert::AreEqual(1.8, result, 0.0001);          // min is -7.1, max is 8.9, sum is 1.8
        }

        // test for an array with only negative values
        TEST_METHOD(TestNegativeValues)
        {
            double arr[] = { -10.2, -5.5, -12.3, -1.4, -7.8 };
            double result = SumOfMinMax(arr, 5);
            Assert::AreEqual(-13.7, result, 0.0001);        // min is -12.3, max is -1.4, sum is -13.7
        }

        // test for a single element array
        TEST_METHOD(TestSingleElement)
        {
            double arr[] = { 11.2 };        // only one element
            double result = SumOfMinMax(arr, 1);
            Assert::AreEqual(22.4, result, 0.0001);         // min and max are both 11.2, sum is 22.4
        }

        // test for an empty array
        TEST_METHOD(TestEmptyArray)
        {
            double* arr = nullptr;          // no elements
            double result = SumOfMinMax(arr, 0);
            Assert::AreEqual(0.0, result);          // empty array should return 0
        }

        // test for an array with extreme values
        TEST_METHOD(TestEdgeCases)
        {
            double arr[] = { DBL_MAX, DBL_MIN };        // array with max and min double values
            double result = SumOfMinMax(arr, 2);
            Assert::AreEqual(DBL_MAX + DBL_MIN, result, 0.0001);        // sum of max and min doubles
        }
    };
}
