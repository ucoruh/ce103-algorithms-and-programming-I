#include "pch.h"
#include "CppUnitTest.h"
#include "..\cpp-sample-lib\samplelib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace cppsampletest
{
	TEST_CLASS(cppsampletest)
	{
	public:

		TEST_METHOD(TestSumCorrect)
		{
			Assert::AreEqual(9, sum(4, 5));
		}

		TEST_METHOD(TestSumInCorrect)
		{
			Assert::AreEqual(10, sum(4, 5));
		}
	};
}
