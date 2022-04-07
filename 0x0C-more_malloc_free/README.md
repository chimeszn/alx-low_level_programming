1. 0-malloc_checked.c - function that allocates memory using malloc
It returns a pointer to the allocated memory.
If malloc fails, the malloc_checked function causes normal process termination with a status value of 98

2. 1-string_nconcat.c - function that concatenates two strings
The returned pointer points to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and is null terminated
If the function fails, it returns NULL
If n is greater or equal to the length of s2 then the entire string s2 is used
if NULL is passed, it is treated as an empty string

3. 2-calloc.c - function that allocates memory for an array, using malloc
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL_

4. 3-array_range.c - function that creates an array of integers
The array created contains all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, returns NULL
If malloc fails, returns NULL

5. 100-realloc.c - function that reallocates a memory block using malloc and free

where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr and new_size is the new size, in bytes of the new memory block
The contents are copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
If new_size > old_size, the “added” memory is not initialized
If new_size == old_size do nothing is done and ptr is returned
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
ptr is freed when it makes sense

6. 101-mul.c - program that multiplies two positive numbers

Usage: mul num1 num2
num1 and num2 will be passed in base 10
It prints the result, followed by a new line
If the number of arguments is incorrect, it prints Error, followed by a new line, and exit with a status of 98
num1 and num2 is only composed of digits, else it prints Error, followed by a new line, and exit with a status of 98
