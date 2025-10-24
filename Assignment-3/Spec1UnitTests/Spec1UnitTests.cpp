#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../Spec1/Spec1.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Spec1UnitTests
{
    TEST_CLASS(Spec1UnitTests)
    {
    public:

        TEST_METHOD(TestPositiveValues)
        {
            double x = 5.5, y = 11.3;
            SmallerOf(&x, &y);
            Assert::AreEqual(5.5, x);
            Assert::AreEqual(5.5, y);
        }

        TEST_METHOD(TestNegativeValues)
        {
            double x = -3.2, y = -7.8;
            SmallerOf(&x, &y);
            Assert::AreEqual(-7.8, x);
            Assert::AreEqual(-7.8, y);
        }

        TEST_METHOD(TestMixedValues)
        {
            double x = -2.5, y = 4.1;
            SmallerOf(&x, &y);
            Assert::AreEqual(-2.5, x);
            Assert::AreEqual(-2.5, y);
        }

        TEST_METHOD(TestEqualValues)
        {
            double x = 3.14, y = 3.14;
            SmallerOf(&x, &y);
            Assert::AreEqual(3.14, x);
            Assert::AreEqual(3.14, y);
        }

        TEST_METHOD(TestZeroValues)
        {
            double x = 0.0, y = -1.0;
            SmallerOf(&x, &y);
            Assert::AreEqual(-1.0, x);
            Assert::AreEqual(-1.0, y);
        }

        TEST_METHOD(TestNullPointers)
        {
            double x = 5.0, y = 3.0;
            double original_x = x, original_y = y;
            
            SmallerOf(nullptr, &y);
            Assert::AreEqual(original_y, y);
            
            SmallerOf(&x, nullptr);
            Assert::AreEqual(original_x, x);
        }
    };
}
