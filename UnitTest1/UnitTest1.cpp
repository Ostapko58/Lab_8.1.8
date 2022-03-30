#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.8/Lab_8.1.8.cpp"
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = ",--,--,,,-asda--,-,";
			string str2 = "*-*-,,*asda--*,";
			string dest;
			dest = Change(str);
			for (int i = 0; i < 15; i++)
			{
				Assert::AreEqual(dest[i], str2[i]);
			}

		}
	};
}
