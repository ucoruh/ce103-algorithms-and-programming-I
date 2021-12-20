#include "pch.h"
#include "CppUnitTest.h"
#include "..\\CE103-HW2-Lib\CE103-HW2-Lib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CE103HW2LibTest
{
	TEST_CLASS(CE103HW2LibTest)
	{
	public:

		TEST_METHOD(ce103_strlen_test_1)
		{
			char a[20] = "HelloWorldd";
			Assert::AreEqual(ce103_strlen(a), 11);
		}

		TEST_METHOD(ce103_strlen_test_2)
		{
			char a[20] = "Programmm";
			Assert::AreEqual(ce103_strlen(a), 9);
		}

		TEST_METHOD(ce103_strlen_test_3)
		{
			char b[20] = { 'P','r','o','g','r','a','m','m','\0' };
			Assert::AreEqual(ce103_strlen(b), 8);
		}

		TEST_METHOD(ce103_fibonacciNumber_test_1)
		{
			Assert::AreEqual(ce103_fibonacciNumber(1), 0);
		}

		TEST_METHOD(ce103_fibonacciNumber_test_2)
		{
			Assert::AreEqual(ce103_fibonacciNumber(3), 1);
		}

		TEST_METHOD(ce103_fibonacciNumber_test_3)
		{
			Assert::AreEqual(ce103_fibonacciNumber(7), 8);
		}

		TEST_METHOD(ce103_fibonacciNumber_test_4)
		{
			Assert::AreEqual(ce103_fibonacciNumber(32), 1346269);
		}

		TEST_METHOD(ce103_strrev_test_1)
		{
			char orig[] = "HelloWorldd";
			char rev[] = "ddlroWolleH";
			
			Assert::AreEqual(ce103_strrev(orig), rev);
		}

		TEST_METHOD(ce103_strrev_test_2)
		{
			char orig[] = "Computerr";
			char rev[] = "rretupmoC";

			Assert::AreEqual(ce103_strrev(orig), rev);
		}

		TEST_METHOD(ce103_strrev_test_3)
		{
			char orig[] = "New Worldd";
			char rev[] = "ddlroW weN";

			Assert::AreEqual(ce103_strrev(orig), rev);
		}


		TEST_METHOD(ce103_strcat_test_1)
		{
			char a1[30] = "Helloo";
			char a2[30] = "World";
			char a3[30] = "HellooWorld";
				
			Assert::AreEqual(ce103_strcat(a1, a2), a3);
		}

		TEST_METHOD(ce103_strcat_test_2)
		{
			char b1[30] = "Computer ";
			char b2[30] = "Engineering";
			char b3[30] = "Computer Engineering";
		
			Assert::AreEqual(ce103_strcat(b1, b2), b3);
		}

		TEST_METHOD(ce103_strcmp_test_1)
		{
			const char b1[30] = "Computerr";
			const char b2[30] = "Computerr";

			Assert::AreEqual(ce103_strcmp(b1, b2), 0);
		}

		TEST_METHOD(ce103_strcmp_test_2)
		{
			const char b1[30] = "Computerr";
			const char b2[30] = "Engineering";

			Assert::AreNotEqual(ce103_strcmp(b1, b2), 0);
		}


		TEST_METHOD(ce103_strcpy_test_1)
		{
			char b1[30] = "Computerr";
			char b2[30] = "Hii";

			char expected[30] = "Hii";


			Assert::AreEqual(ce103_strcpy(b1, b2), expected);
		}

		TEST_METHOD(ce103_strcpy_test_2)
		{
			char b1[30] = "Computerr";
			char b2[30] = "Engineeringg";

			char expected[30] = "Engineeringg";

			Assert::AreEqual(ce103_strcpy(b1, b2), expected);
		}



		TEST_METHOD(ce103_hex2bin_test_1)
		{
			char arr[16 + 1] = "151515151515151A";
			unsigned char binExpected[8] = { 0x15,0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x1A };
			unsigned char binActual[8] = { 0 };

			ce103_hex2bin(arr, strlen(arr), binActual);

			bool eql = !(memcmp(binActual, binExpected, 8 * sizeof(unsigned char)));

			Assert::AreEqual(eql, true);
		}

		TEST_METHOD(ce103_hex2bin_test_2)
		{
			char arr[16 + 1] = "1AC2C3D4E5678911";
			unsigned char binExpected[8] = { 0x1A,0xC2,0xC3,0xD4,0xE5,0x67,0x89,0x11 };
			unsigned char binActual[8] = { 0 };

			ce103_hex2bin(arr, strlen(arr), binActual);

			bool eql = !(memcmp(binActual, binExpected, 8 * sizeof(unsigned char)));

			Assert::AreEqual(eql, true);
		}


		TEST_METHOD(ce103_bin2hex_test_1)
		{
			char expected[16 + 1] = "";
			char actual[16 + 1] = "151515151515151A";
			unsigned char bin[8] = { 0x15,0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x1A };
			
			ce103_bin2hex(bin, 8, expected);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(ce103_bin2hex_test_2)
		{
			char expected[16 + 1] = "";
			char actual[16 + 1] = "1AC2C3D4E5678911";
			unsigned char bin[8] = { 0x1A,0xC2,0xC3,0xD4,0xE5,0x67,0x89,0x11 };

			ce103_bin2hex(bin, 8, expected);

			Assert::AreEqual(expected, actual);
		}

	};
}
