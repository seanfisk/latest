#ifndef _LIST_DIR_H_
#define _LIST_DIR_H_

#include <stdbool.h>
#include <sys/dirent.h>

#ifdef TEST
struct dirent **namelist;
#endif

/**
 * Returns the listing of a directory.
 * @param path path of directory to list
 * @param filenames address of array in which to place filenames (malloc'd)
 * @return number of files
 */
int list_dir(const char path[], char ***filenames);

/**
 * Callback to determine whether file should be in the final array returned by
 * scandir().
 * @param dirent the directory entry
 * @return boolean indicating whether the entry should be included
 */
int list_dir_file_select(struct dirent *entry);

#endif /* _LIST_DIR_H_ */
