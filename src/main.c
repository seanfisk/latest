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
