#ifndef _LIST_DIR_H_
#define _LIST_DIR_H_

/**
 * Returns the listing of a directory.
 * @param path path of directory to list
 * @param count address of integer into which to place the size of the array
 * @return the list of files
 */
char *list_dir(char path[], int *count);

#endif /* _LIST_DIR_H_ */
