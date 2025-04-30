#include "pch.h"
#include "CppUnitTest.h"

// include the header
extern "C" {
#include "../Spec3/Spec3.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Spec3UnitTests
{
    TEST_CLASS(Spec3UnitTests)
    {
    public:
        // test with positive values
        TEST_METHOD(TestPositiveValues)
        {
            double arr1[] = { 4.0, 3.0, 6.0, 9.0 };         // first input array
            double arr2[] = { 2.0, 1.0, 5.0, 8.0 };         // second input array
            double arr3[4] = { 0.0 };           // result array

            MultiplyTwoArraysIntoThird(arr1, arr2, arr3, 4);

            // expected results after multiplication
            double expected[] = { 8.0, 3.0, 30.0, 72.0 };
            for (int i = 0; i < 4; i++)
            {
                Assert::AreEqual(expected[i], arr3[i], 0.0001);         // tolerance for floating-point comparison
            }
        }

        // test with negative values
        TEST_METHOD(TestNegativeValues)
        {
            double arr1[] = { -2.0, 3.0, -6.0, 8.0 };       // first input array with negative values
            double arr2[] = { 2.0, -1.0, 4.0, -7.0 };       // second input array with mixed values
            double arr3[4] = { 0.0 };

            MultiplyTwoArraysIntoThird(arr1, arr2, arr3, 4);

            // expected results after multiplication
            double expected[] = { -4.0, -3.0, -24.0, -56.0 };
            for (int i = 0; i < 4; i++)
            {
                Assert::AreEqual(expected[i], arr3[i], 0.0001);
            }
        }

        // test with zeros
        TEST_METHOD(TestZeros)
        {
            double arr1[] = { 0.0, 0.0, 0.0, 0.0 };         // first input array with all zeros
            double arr2[] = { 5.0, 4.0, 3.0, 2.0 };         // second input array with positive values
            double arr3[4] = { 0.0 };

            MultiplyTwoArraysIntoThird(arr1, arr2, arr3, 4);

            // expected result: all zeros
            double expected[] = { 0.0, 0.0, 0.0, 0.0 };
            for (int i = 0; i < 4; i++)
            {
                Assert::AreEqual(expected[i], arr3[i], 0.0001);
            }
        }

        // test with a single element
        TEST_METHOD(TestSingleElement)
        {
            double arr1[] = { 7.0 };        // single element in the first array
            double arr2[] = { 8.0 };        // single element in the second array
            double arr3[1] = { 0.0 };       // result array

            MultiplyTwoArraysIntoThird(arr1, arr2, arr3, 1);

            // expected result after multiplication
            double expected[] = { 56.0 };
            Assert::AreEqual(expected[0], arr3[0], 0.0001);
        }

        // test with mixed positive and negative values
        TEST_METHOD(TestMixedValues)
        {
            double arr1[] = { -5.0, 7.0, -8.0, 3.0 };       // first input array with mixed values
            double arr2[] = { 6.0, -4.0, 2.0, -9.0 };        // second input array with mixed values
            double arr3[4] = { 0.0 };

            MultiplyTwoArraysIntoThird(arr1, arr2, arr3, 4);

            // expected results after multiplication
            double expected[] = { -30.0, -28.0, -16.0, -27.0 };
            for (int i = 0; i < 4; i++)
            {
                Assert::AreEqual(expected[i], arr3[i], 0.0001);
            }
        }

        // test with large arrays
        TEST_METHOD(TestLargeArray)
        {
            const int size = 1000;

            // allocate large arrays dynamically
            double* arr1 = new double[size];
            double* arr2 = new double[size];
            double* arr3 = new double[size];

            // initialize arrays
            for (int i = 0; i < size; ++i)
            {
                arr1[i] = i + 1;        // fill arr1 with increasing values
                arr2[i] = (i + 1) * 2;       // fill arr2 with double those values
            }

            // call the function
            MultiplyTwoArraysIntoThird(arr1, arr2, arr3, size);

            // check the results
            for (int i = 0; i < size; ++i)
            {
                double expected = arr1[i] * arr2[i];
                Assert::AreEqual(expected, arr3[i], 0.0001);        // compare each result
            }

            // good habit to ALWAYS clean up dynamically allocated memory
            delete[] arr1;
            delete[] arr2;
            delete[] arr3;
        }
    };
}