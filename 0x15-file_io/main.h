#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


/*0-read_textfile function*/
ssize_t read_textfile(const char *filename, size_t letters);

/*1-create_file function*/
int create_file(const char *filename, char *text_content);


#endif
