#ifndef _DIRENT_H_
#define _DIRENT_H_

#include <sys/dirent.h>

// taken from real dirent.h
int scandir(const char * a, struct dirent *** b, int (*c)(struct dirent *),
						int (*d)(const void *, const void *));
int alphasort(const void *, const void *);

#endif /* _DIRENT_H_ */
