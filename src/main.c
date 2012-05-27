#include "list_dir.h"

#include <stdio.h>

int main(int argc, char*argv[])
{
	// puts(hello_world());
	int count;
	char *file = list_dir(".", &count);
	puts(file);
}
