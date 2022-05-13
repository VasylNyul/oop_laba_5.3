#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_5.3/A.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest53
{
	TEST_CLASS(oopUnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			A q(3);
			Assert::AreEqual(q.get_x(), 3);
		}
	};
}
