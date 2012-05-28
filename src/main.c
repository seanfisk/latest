/**
 * @todo Add argument parsing with excepted arguments (--help, --version, etc.)
 *
 * @todo Documentation on how to download and built.
 */

#include "list_dir.h"

#include <stdio.h>

/**
 * Program entry point.
 * @param argc number of args
 * @param list of arguments
 * @return exit code
 */
int main(int argc, char*argv[])
{
	char **filenames;
	int count = list_dir(".", &filenames);
	for(int i = 0; i < count; ++i)
	{
		puts(filenames[i]);
	}
}
