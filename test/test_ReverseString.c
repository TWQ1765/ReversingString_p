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
	/*understands pinoter and addr*/
	char c;
	char *ptr = &c;
	char **ptrptr = &ptr;
	
	printf("c is the addr: %x\n",&c);
	printf("ptr is the addr: %x\n",&ptr);
	printf("ptr point to addr: %x\n",ptr);
	printf("ptrptr is the addr: %x\n",&ptrptr);
	printf("ptrptr point to addr: %x\n",ptrptr);
	printf("ptrptr point to another pionter at addr: %x\n",*ptrptr);
	/*end*/
	
	
	printf("size of an integer %d", sizeof(int));//just see size of int
    TEST_ASSERT_EQUAL(0,getStringLength(NULL));
}
///*
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