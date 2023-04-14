#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12.4.Recur/Lab_12.4.Recur.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
	
		{				
			Elem* L = NULL;
			Insert(L, L, -1);
			Insert(L, L, 2);
			Insert(L, L, 1);
			Insert(L, L, -4);
			Insert(L, L, 3);
			Insert(L, L, -7);
			

			int t = Count(L, L, 0);
			Assert::AreEqual(t, 3);
		}

		
	};
}
