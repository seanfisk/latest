/**
 * @todo Sorting of files by last modified date.
 * @todo Reverse sorting of files by last modified date.
 * @todo Add argument parsing with excepted arguments (--help, --version, etc.)
 * @todo Upload to Github / Bitbucket.
 * @todo Documentation on how to download and built.
 */

#include "list_dir.h"

#include <stdio.h>

int main(int argc, char*argv[])
{
	char **filenames;
	int count = list_dir(".", &filenames);
	for(int i = 0; i < count; ++i)
	{
		puts(filenames[i]);
	}
}
