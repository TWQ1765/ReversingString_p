#include "unity.h"
#include "ReverseString.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getStringLength_given_a_NULL_expect_0(void)
{
	/*understands pinoter and addr
	char c ;
	char *ptr = &c;
	char **ptrptr = &ptr;
	
	printf("c is the addr: %x\n",&c);
	printf("ptr is the addr: %x\n",&ptr);
	printf("ptr point to addr: %x\n",ptr);
	printf("ptrptr is the addr: %x\n",&ptrptr);
	printf("ptrptr point to addr: %x\n",ptrptr);
	printf("ptrptr point to another pionter at addr: %x\n",*ptrptr);
	understands end*/
	/*trying more pionter
	char *tr = "ali,abu,akao,abing,abet,aboh";
	
	printf("*tr is the addr: %x\n",&tr);
	printf("tr is point to: %x\n",tr);
	printf("tr dereference is: %d\n",*tr);
	printf("try get ali : %s\n",&tr[0]);
	end trying*/
	
	printf("size of an integer %d", sizeof(int));//just see size of int
	
    TEST_ASSERT_EQUAL(0,getStringLength("abc"));
}

void test_getStringLength_given_an_empty_string_expect_0(void)
{
   // TEST_ASSERT_EQUAL_STRING("",str);
}void test_getStringLength_given_an_empty_string_expect_1(void)
{
    //TEST_ASSERT_EQUAL_STRING("f",str);
}void test_getStringLength_given_a_string_expect_11(void)
{
    //TEST_ASSERT_EQUAL_STRING("",str);
}

/*
void test_ReverseString_given_framework_expect_krowemarf(void)
{
	char *str = ReverseString("framework");
    TEST_ASSERT_EQUAL_STRING("framework",str);
}*/

void test_trygetStringLength_given_a_string_expect_f(void)
{
	//char str = trygetStringLength("framework");
	//TEST_ASSERT_EQUAL_STRING("f",str);
}

void test_tryPiontSomething_given_a_string_expect_true(void)
{
	//char s[10] = "welcome";
	
	//char* str2 = tryPiontSomething("hello....");
	//str2 = str2 + 5;
	//printf("transmit:hello.... ,echo: %s\n",str2);
	//TEST_ASSERT_EQUAL_STRING("l",str2);
	//TEST_ASSERT_EACH_EQUAL_STRING("lo....",str, 6);  
}
