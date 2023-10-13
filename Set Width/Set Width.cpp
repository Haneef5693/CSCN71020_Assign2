#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SetLenght
{
	TEST_CLASS(SetWidth)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int input = 65;
			SetWidth(65, 65);
			Assert::AreEqual(1, 65);
		}


		TEST_METHOD(TestMethod2)
		{
			int input = 52;
			SetWidth(52, 52);
			Assert::AreEqual(1, 52);
		}

		TEST_METHOD(TestMethod3)
		{
			int input = 33;
			SetWidth(33, 33);
			Assert::AreEqual(1, 33);
		}
	};
}