#include "pch.h"
#include "CppUnitTest.h"

extern "C" int Perimeter(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001Perimeter
{
	TEST_CLASS(REQ001Perimeter)
	{
	public:
		
		TEST_METHOD(getPerimeter)
		{
			// Perimeter of a rectangle = l+l+w where l=1 and w=1
		   // This is testing perimeter function of a rectangleint getPerimeter(int *length, int *width) 
			int Result = 0;
			Result = Perimeter(1, 1);
			Assert::AreEqual(4, Result);

		}
	};
}
