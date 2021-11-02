#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1Rec/Lab_06_1_Rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT61Rec
{
	TEST_CLASS(UT61Rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const int k = 3;
			int a[k] = { 1, 2, 3 };
			t = Sum(a, k, 0);
			Assert::AreEqual(t, 6.);
		}
	};
}
