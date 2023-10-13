#include "pch.h"
#include "CppUnitTest.h"

extern "C" int add(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ002Area
{
	TEST_CLASS(REQ002Area)
	{
	public:
		
		TEST_METHOD(getArea)
		{
			// Area of a rectangle = w*l where l=1 and w=1
		   // This is testing perimeter function of a rectangle 
			int Result = 0;
			Result = Area(1, 1);
			Assert::AreEqual(1, Result);
		}
	};
}
