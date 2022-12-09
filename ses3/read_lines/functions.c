#include "functions.h"


char* readlines(int fd){
	char* line;		//Will contain the line that we want to return.
	
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)	
		return (NULL);
	
	static string stash = NULL;		//will store everything we read. Is static because there could be some leftovers at the end of the function.	
	line = NULL;
	string* current = &stash;			//a pointer to the last node of stash that would be useful to fill it.
	int not_found_n = 1;						//used to stop the while loop. turns into 0 if we read a \n.
	
	if(found_new_line(stash) == -1)	//we only read if there's no \n in stash as it could be find in leftovers.
	{
		while((*current) != NULL)		
			current = &((*current)->next);	//we move "current" to the last node.
		while(not_found_n)
		{
			char buf[BUFFER_SIZE];			//will contain what we read temporarly. size = BUFFER_SIZE or less.
			int num_chars = read(fd, buf, BUFFER_SIZE);		// we store max BUFFER_SIZE elements into buf.
			if (num_chars <=0)			//if we are at the end of the file or there was a problem in read.
			{
				break;
			}
			else
			{				
				for(int i=0;i<num_chars;i++)
				{
					if(buf[i] == '\n')		
						not_found_n = 0;			//we change not_found_n to 0 if we find a \n in the read chars.
					/* add_node(current,buf[i]); */
					string newchar =(string)malloc(sizeof(character));
					newchar->content = buf[i];
					newchar->next = NULL;
					(*current) = newchar;
					current = &((*current)->next);
				}	
			}
		}
	}
	
	if (stash == NULL)			//if stash is NULL it means we couldn't read anything and there was no leftovers from previous calls, thus we return NULL.
		return (NULL);

	int n_line = len_line(stash);	//length of the current line.
	line = malloc(n_line+1);	//Allocating Space for characters in line (+1 for the \0).
	int i = 0;	
	while(i<n_line)
	{	
		line[i++] = stash->content;	//we add the content of stash to the line.
		string temp = stash;			//a pointer the the current node.
		stash = stash->next;			//we move stash to the next one.
		free(temp);						//we free the previous node.
	}
	line[i] = '\0';						//we add the \0 at the end of "line".
	return line;
}




/* Adds a char into a string */

void add_node(string* ptr,char ch)
{
	string newchar =(string)malloc(sizeof(character));
	newchar->content = ch;
	newchar->next = NULL;
	(*ptr) = newchar;
	ptr = &((*ptr)->next);
	return;
}


/* Returns the length of current line */

int len_line(string chara)
{
	int n = found_new_line(chara)+1;	//length of the current line.
	if (n == 0)	//if no \n was found it only means this is the final line of the file.
		n = len_string(chara);	//we just use a function that returns the length of a list.
	return n;
}

/* Returns the index of the first /n in a string (-1 if not found) */ 

int found_new_line(string str1)
{
	string temp = str1;
	int n = 0;
	int found_n = 0;
	while(temp)
	{
		if(temp->content == '\n')
		{	
			found_n = 1;
			break;
		}
		n++;
		temp = temp->next;
	}
	if(found_n)
		return n;
	return -1;
}

/*Returns the length of a string */

int len_string(string str1)
{
	string temp = str1;
	int i = 0;
	int count = 0;
	while(temp)
	{
		i++;
		temp = temp->next;
	}
	return i;
}