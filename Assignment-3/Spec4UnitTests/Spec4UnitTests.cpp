#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <sstream>

// include the header for student records
extern "C" {
#include "../Spec4/Spec4.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Spec4UnitTests
{
    TEST_CLASS(Spec4UnitTests)
    {
    public:
        // test for a student with a middle initial
        TEST_METHOD(TestWithMiddleInitial)
        {
            Student students[1] = {
                {"236342643", {"Michael", "B", "Jordan"}}
            };

            std::string expected = "236342643 - Jordan, Michael B.\n";
            std::ostringstream output;
            std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();       // save old buffer
            std::cout.rdbuf(output.rdbuf());            // redirect output to ostringstream

            PrintStudentRecords(students, 1);

            std::cout.rdbuf(oldCoutStreamBuf);          // restore old buffer

            // compare the expected and actual outputs
            Assert::AreEqual(expected.c_str(), output.str().c_str());
        }

        // test for a student without a middle name
        TEST_METHOD(TestWithoutMiddleName)
        {
            Student students[1] = {
                {"123421355", {"Elon", "", "Musk"}}
            };

            std::string expected = "123421355 - Musk, Elon\n";
            std::ostringstream output;
            std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();       // save old buffer
            std::cout.rdbuf(output.rdbuf());        // redirect output to ostringstream

            PrintStudentRecords(students, 1);

            std::cout.rdbuf(oldCoutStreamBuf);          // restore old buffer

            Assert::AreEqual(expected.c_str(), output.str().c_str());
        }

        // test for a student with a full middle name
        TEST_METHOD(TestWithFullMiddleName)
        {
            Student students[1] = {
                {"789075643", {"Steve", "Jobs", "Apple"}}
            };

            std::string expected = "789075643 - Apple, Steve J.\n";
            std::ostringstream output;
            std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();       // save old buffer
            std::cout.rdbuf(output.rdbuf());        // redirect output to ostringstream

            PrintStudentRecords(students, 1);

            std::cout.rdbuf(oldCoutStreamBuf);          // restore old buffer

            Assert::AreEqual(expected.c_str(), output.str().c_str());
        }

        // test for another student with middle initial
        TEST_METHOD(TestWithMiddleInitial2)
        {
            Student students[1] = {
                {"448475490", {"Robert", "Downey", "Junior"}}
            };

            std::string expected = "448475490 - Junior, Robert D.\n";
            std::ostringstream output;
            std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();       // save old buffer
            std::cout.rdbuf(output.rdbuf());        // redirect output to ostringstream

            PrintStudentRecords(students, 1);

            std::cout.rdbuf(oldCoutStreamBuf);          // restore old buffer

            Assert::AreEqual(expected.c_str(), output.str().c_str());
        }
    };
}
