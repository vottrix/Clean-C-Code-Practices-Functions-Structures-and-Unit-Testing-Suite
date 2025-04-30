#include "pch.h"
#include "CppUnitTest.h"

// include the header for SmallerOf
extern "C" {
#include "../Spec1/Spec1.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Spec1UnitTests
{
    TEST_CLASS(Spec1UnitTests)
    {
    public:

        // test when both values are positive and different
        TEST_METHOD(TestPositiveValues)
        {
            // set x to 5.5 and y to 11.3
            double x = 5.5, y = 11.3;

            // call SmallerOf, which should set both x and y to 5.5
            SmallerOf(&x, &y);

            // assert that x and y are both equal to 5.5 now
            Assert::AreEqual(x, 5.5);
            Assert::AreEqual(y, 5.5);
        }

        // test when both values are negative
        TEST_METHOD(TestNegativeValues)
        {
            // set x to -9.5 and y to -4.0
            double x = -9.5, y = -4.0;

            // smallerOf should set both x and y to -9.5
            SmallerOf(&x, &y);

            // check if both values are correctly set to -9.5
            Assert::AreEqual(x, -9.5);
            Assert::AreEqual(y, -9.5);
        }

        // test when one value is zero
        TEST_METHOD(TestZero)
        {
            // set x to 0.0 and y to 15.8
            double x = 0.0, y = 15.8;

            // after calling SmallerOf, both x and y should be 0.0
            SmallerOf(&x, &y);

            // assert both values are 0.0
            Assert::AreEqual(x, 0.0);
            Assert::AreEqual(y, 0.0);
        }

        // test when both values are the same
        TEST_METHOD(TestEqualValues)
        {
            // set x and y to the same value, 8.8
            double x = 8.8, y = 8.8;

            // after SmallerOf, both x and y should still be 8.8
            SmallerOf(&x, &y);

            // verify that both remain 8.8
            Assert::AreEqual(x, 8.8);
            Assert::AreEqual(y, 8.8);
        }

        // test for extreme cases (large and small doubles)
        TEST_METHOD(TestEdgeCases)
        {
            // set x to DBL_MAX (largest possible double) and y to DBL_MIN (smallest possible double)
            double x = DBL_MAX, y = DBL_MIN;

            // SmallerOf should set both to DBL_MIN, the smaller value
            SmallerOf(&x, &y);

            // check if both x and y are set to DBL_MIN
            Assert::AreEqual(x, DBL_MIN);
            Assert::AreEqual(y, DBL_MIN);
        }
    };
}