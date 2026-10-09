#include "pch.h"
#include "CppUnitTest.h"
#include "../PR05.3/FileName.cpp"  
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest051
{
	TEST_CLASS(UnitTest051)
	{
	public:

		TEST_METHOD(Test1)
		{
			double x = 2;
			double expected = (sin(2 * x) + 1) / (sin(x) + cos(x) * cos(x));
			double actual = f(x);
			Assert::AreEqual(expected, actual, 0.0001);
		}
		
		TEST_METHOD(Test2)
		{
			double x = 1;
			double expected = (sin(2.0) + 1) / (sin(1.0) + cos(1.0) * cos(1.0));  
			double actual = f(x);
			Assert::AreEqual(expected, actual, 0.0001);
		}

		TEST_METHOD(Test3)
		{
			double expected = 0.252612;
			double actual = f(0.5);
			Assert::AreEqual(expected, actual, 0.0001);
		}

		TEST_METHOD(Test4)
		{
			double actual = f(0);
			Assert::AreEqual(0.0, actual, 0.0001);
		}
	};
}
