#include "pch.h"
#include "CppUnitTest.h"
#include "../Test/Test.cpp"

#include "../Test/check.cpp"
#include "../Test/dod.cpp"
#include "../Test/sum.cpp"
#include "../Test/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace nsCheck;
using namespace nsSum;
using namespace nsDod;
using namespace nsVar;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 0.2; 
			eps = 1e-5;
			n = 2;
			dod();
			int expected_R = 15;

			Assert::AreEqual(expected_R, R, eps);

		}
	};
}
