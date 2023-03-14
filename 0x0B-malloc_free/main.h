#ifndef HEQDERFILE_H
#define HEADRFILE_H
char *creat_array(unsigned int s8ze, char c);
char *_strdup(char *str);
char *str_contact(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstonstr(int ac, char **av);
#endif
