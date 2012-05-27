#include "unity.h"
#include "list_dir.h"

void setUp(void)
{
	// do nothing
}

void tearDown(void)
{
	// do nothing
}

void test_list_dir(void)
{
	char *file = list_dir(".", NULL);
	TEST_ASSERT_EQUAL_STRING("thisisfake", file);
}
