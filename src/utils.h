#ifndef _UTILS_H_
#define _UTILS_H_

#include <stdbool.h>

/**
 * Check if an array of strings contains a given string.
 * @param string the string for which to look
 * @param array the array to check for the string
 * @return whether the string was in the array
 */
bool utils_string_in_array(const char string[], char *array[],
													 const int arr_size);

#endif /* _UTILS_H_ */
