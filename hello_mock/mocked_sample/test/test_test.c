#include "unity.h"
#include "test.h"

#include "__mock_external_mocked_module.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_hello_mock_failed_test(void)
{
  external_function_ExpectAndReturn(1, 0);
	TEST_ASSERT_EQUAL_INT(mocked_sample_function(2), 1);
}

void test_hello_mock_passed_test(void)
{
  external_function_ExpectAndReturn(1, 0);
	TEST_ASSERT_EQUAL_INT(mocked_sample_function(1), 0);
}
