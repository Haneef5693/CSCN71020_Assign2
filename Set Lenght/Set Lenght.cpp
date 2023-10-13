#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SetLenght
{
	TEST_CLASS(SetLenght)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int input = 18;
			SetLenght(18, 18);
			Assert::AreEqual(1, 18);
		}


		TEST_METHOD(TestMethod2)
		{
			int input = 25;
			SetLenght(25, 25);
			Assert::AreEqual(1, 25);
		}

		TEST_METHOD(TestMethod3)
		{
			int input = 98;
			SetLenght(98, 98);
			Assert::AreEqual(1, 98);
		}
	};
}
