#include "utils.h"

#include <string.h>

bool utils_string_in_array(const char string[], char *array[],
													 const int arr_size)
{
	int i;
	for(i = 0; i < arr_size; ++i)
		if(strcmp(string, array[i]) == 0)
			return true;
	return false;
}
