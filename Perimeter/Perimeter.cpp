#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Perimeter
{
	TEST_CLASS(Perimeter)
	{
	public:
		
		TEST_METHOD(getPerimeter)
		{
		     // Perimeter of a rectangle = 2(l+w) where l=1 and w=1
			// This is testing perimeter function of a rectangle 
			int Result = 4;
			Result = Perimeter(1, 1);
			Assert::AreEqual(4, Result);
		}
	};
}
