#ifndef HEADERFILE_H
 #define HEADERFILE_H
 char *creat_array(unsigned int size, char c);
 char *_strdup(char *str);
 char *str_concat(char *s1, char *s2);
 int **alloc_grid(int **grid, int height);
 void free_grid(int width, int height);
 char *argstostr(int ac, char **av);
#endif
