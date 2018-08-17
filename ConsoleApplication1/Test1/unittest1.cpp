#include "stdafx.h"
#include "C:\Users\Kiran\Desktop\New folder (2)\ConsoleApplication1\ConsoleApplication1\DemoTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test1
{		

	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			DemoTest test;
			int t = 3;
			int d = test.add(1, 2);
			Assert::AreEqual(t, d);

		}
	public:
		TEST_METHOD(TestMethod2)
		{
			DemoTest test;
			int u = 6;
			int p = test.muliplication(2, 3);
			Assert::AreEqual(u, p);

		}
	public:
		TEST_METHOD(TestMethod3)
		{
			DemoTest test;
			int v = 2;
			int q = test.substraction(5, 3);
			Assert::AreEqual(v, q);

		}
	public:
		TEST_METHOD(TestMethod4)
		{
			DemoTest test;
			int w = 4;
			int r = test.division(20, 5);
			Assert::AreEqual(w, r);

		}

	};
}