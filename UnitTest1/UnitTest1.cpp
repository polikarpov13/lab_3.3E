#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/3/lab_3.3E/lab_3.3E/Object.cpp"
#include "../../../../../політех/ооп/3/lab_3.3E/lab_3.3E/Triad.cpp"
#include "../../../../../політех/ооп/3/lab_3.3E/lab_3.3E/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date a(11, 12, 13);
			Assert::AreEqual(11.0, a.getFirst());
		}
	};
}
