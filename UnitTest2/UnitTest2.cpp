#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int k = 0;
			int sum = 0;
			const int n = 21;
			int b[21] = { 28, 15, 82, 53, 53, 48, 41, 48, 77, 84, 16, 44, 52, 20, 73, 39, 62, 78, 48, 59, 54 };

			format_mas(b, n, sum, k, 0);

			Assert::AreEqual(10, k);
			Assert::AreEqual(540, sum);
		}
	};
}
