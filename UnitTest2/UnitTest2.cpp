#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\apple\source\repos\project1\Project1\Combination.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Combination c;
			int v;
			c.init(1, 3);
			v = c.combination();
			Assert::AreEqual(v, 3);
		}
	};
}
