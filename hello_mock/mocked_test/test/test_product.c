#include "unity.h"
#include "product.h"

#include "mock_external_module.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_module_generator_needs_to_be_implemented(void)
{
  external_function_ExpectAndReturn(2, 5);
	TEST_ASSERT_EQUAL(5, product_code(2));
}
