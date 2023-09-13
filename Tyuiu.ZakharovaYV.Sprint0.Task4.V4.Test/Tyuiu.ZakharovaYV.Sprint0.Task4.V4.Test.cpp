#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZakharovaYV.Sprint0.Task4.V4.Lib/Tyuiu.ZakharovaYV.Sprint0.Task4.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			// Init
			ISprint0Task4* service = new Service();

			int a = 2;
			int b = 3;
			int c = 7;
			int d = 4;
			int f;

			//run
			f = service ->Calculate(a, b, c, d);

			// Valid
			Assert::AreEqual(34, f);
		}
	};
};
