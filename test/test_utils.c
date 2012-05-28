#include "unity.h"
#include "utils.h"

void setUp(void)
{
	// do nothing
}

void tearDown(void)
{
	// do nothing
}

void test_string_in_array(void)
{
	char *arr[] = {"this", "is", "an", "array"};
	int arr_size = 4;
	TEST_ASSERT_TRUE(utils_string_in_array("an", arr, arr_size));
	TEST_ASSERT_FALSE(utils_string_in_array("notinarray", arr, arr_size));
}
