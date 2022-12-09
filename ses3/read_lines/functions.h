#ifndef FUNCTIONS_H
# define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef struct	character
{
	char content;
	struct character* next;
} character;
typedef struct character* string;

char* readlines(int fd);
int found_new_line(string str);
int len_string(string str);
void add_node(string* ptr,char ch);
int len_line(string chara);


#endif