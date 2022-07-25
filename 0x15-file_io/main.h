#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *file, size_t letters);

#endif
