#include "list_dir.h"
#include "utils.h"

#include <dirent.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>

static char *EXCLUDE_LIST[] = {".", ".."};
static const unsigned int EXCLUDE_SIZE = 2;

#ifdef TEST
	struct dirent **namelist;
#endif

int list_dir(const char path[], char ***filenames)
{
#ifndef TEST
	struct dirent **namelist;
#endif
	int count = scandir(path, &namelist, list_dir_file_select, alphasort);
	(*filenames) = (char **)malloc(sizeof(char *) * count);
	for(int i = 0; i < count; ++i)
	{
		(*filenames)[i] = (char *) malloc(sizeof(char) * strlen(namelist[i]->d_name));
		strcpy((*filenames)[i], namelist[i]->d_name);
		free(namelist[i]);
	}
	free(namelist);
	return count;
}

int list_dir_file_select(struct dirent *entry)
{
	return !utils_string_in_array(entry->d_name, EXCLUDE_LIST, EXCLUDE_SIZE);
}
