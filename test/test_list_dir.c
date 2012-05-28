#include "unity.h"
#include "cmock.h"

#include "utils.h"

#include <string.h>
#include <stdlib.h>

#include "mock_dirent.h"
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
	namelist = malloc(2 * sizeof(struct dirent *));
	for(int i = 0; i < 2; ++i)
		namelist[i] = malloc(sizeof(struct dirent));
	strcpy(namelist[0]->d_name, "test_entry_name_a");
	strcpy(namelist[1]->d_name, "test_entry_name_b");
	scandir_ExpectAndReturn("testdir", &namelist, list_dir_file_select,
													alphasort, 2);
	char **realnames;
	char *expectednames[] = {"test_entry_name_a", "test_entry_name_b"};
	int count = list_dir("testdir", &realnames);
	TEST_ASSERT_EQUAL_STRING_ARRAY(expectednames, realnames, 2);
	TEST_ASSERT_EQUAL_INT(count, 2);
}

void test_list_dir_file_select(void)
{
	struct dirent entry;
	strcpy(entry.d_name, "should_include");
	TEST_ASSERT_TRUE(list_dir_file_select(&entry));
	strcpy(entry.d_name, ".");
	TEST_ASSERT_FALSE(list_dir_file_select(&entry));
	strcpy(entry.d_name, "..");
	TEST_ASSERT_FALSE(list_dir_file_select(&entry));
}
