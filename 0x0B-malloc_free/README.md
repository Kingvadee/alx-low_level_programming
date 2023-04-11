Author: David Ojeifo;
Project: 0x0B-malloc free;
ABOUT THE PROJECT:
Memory Allocation in C programming;

[0. a function that creates an array of chars, and initializes it with a specific char.Prototype: char *create_array(unsigned int size, char c);
[1. a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Prototype: char *_strdup(char *str);
[2. a function that concatenates two strings.
Prototype: char *str_concat(char *s1, char *s2);
[3. a function that returns a pointer to a 2 dimensional array of integers.
Prototype: int **alloc_grid(int width, int height);
[4. a function that frees a 2 dimensional grid previously created by your alloc_grid function.
Prototype: void free_grid(int **grid, int height);
[5. a function that concatenates all the arguments of your program.
Prototype: char *argstostr(int ac, char **av);
[6. a function that splits a string into words.
Prototype: char **strtow(char *str);
