# libft
Some libc funcitons from scratch

## Installation
```console
git clone https://github.com/chriss1245/libft.git
```
```console
make -C libft
```
## Usage
*Inside your files*
```c 
#include "libtf/inc/libft.h"
````
*When compiling*
```console
gcc your_files.c libft/libft.a
``` 

## Fuctions
#### Equal to libc's functions
|Function|Description|
|:--------:|:-----------:|
|``ft_isalpha``|Checks if the character is alphabetic|
|``ft_isdigit``|Checks if the character is a digit|
|``ft_isalnum``|Checks if the character is alphabetic or a digit|
|``ft_isascii``|Checks if the character belongs to the ascii characters|
|``ft_print``|Checks if the character is printable|
|``ft_strlen``|Returns the lenght of a string|
|``ft_memset``|Fills the first ``n`` entries in a string ``s`` with the character ``c``|
|``ft_bzero``|Removes the first ``n`` entries in a string ``s``|
|``ft_memcpy``|Copies ``n`` bytes from ``src`` to ``dest``|
|``ft_memmove``|Moves ``n`` bytes from ``src`` to ``dest``|
|``ft_strlcpy``|Copies up to ``n - 1`` characters from a null-terminated string to a destination|
|``ft_strlcat``|Concatenates two strings up to ``n - 1`` characters|
|``ft_toupper``|Converts a character to uppsercase if needed|
|``ft_tolower``|Converts a character to lowercase if needed|
|``ft_strchr``|Returns a pointer to the ``first`` occurrence of the character ``c`` in the string ``s``|
|``ft_strrchr``|Returns a pointer to the ``last`` occurrence of the character ``c`` in the string ``s``|
|``ft_strncmp``|Returns the difference among two strings. If the strings are equal until the n-th char it returns 0|
|``ft_memchr``|Returns a pointer to the ``first`` byte equal to ``c`` inside the first ``n`` characters or 0 otherwise|
|``ft_memcmp``|Returns the difference among to arrays of bytes until the n possition|
|``ft_strnstr``|Returns a pointer to the beggining of the first substring ``little`` inside a string ``bigger``|
|``ft_atoi``|Converts a string of number into a integer|
|``ft_calloc``|Allocates memory for ``n`` elements of ``size``bytes and initialize those bytes to 0|
|``ft_strdup``|Returns a pointer to a copy of the given string|

### Additional functions
|Function|Description|
|:--------:|:-----------:|
|``ft_substr``|Creates a substring from ``s`` starting at ``start`` with a maxsize of ``len``|
|``ft_strjoin``|Creates a new string concatenating ``s1`` & ``s2``|
|``ft_strtrim``|Returns a copy of ``s1`` with the characters specified in ``set`` removed from the beginning and the end of the string|
|``ft_split``|Creates an array of strings (words) separated by a character inside a string|
|``ft_itoa``|Casts a integer to a string|
|``ft_strmapi``|Applies a function to each character of the copy of the given string. The copy is returned|
|``ft_striteri``|Applies a function to each character of a string|
|``ft_putchar_fd``|Writes a character in a file identified by a file descriptor|
|``ft_putstr_fd``|Writes a string in a file identified by a file descriptor|
|``ft_putendl_fd``|Writes a string in a file identified by a file descriptor with a line break|
|``ft_putnbr_fd``|Writes an integer to a file identified by a file descriptor|

In addition, this library contains a typedef **s_list** *(a linked list data structure)*
### s_list functions
|Function|Description|
|:--------:|:-----------:|
|``ft_lstnew``|Returns a pointer to a t_list with its content variable initialized to the given value|
|``ft_lstadd_front``|Adds the element ``new`` at the beginning of the list|
|``ft_lstsize``|Counts the number of elments of the given list|
|``ft_lstlast``|Returns the last element of the list|
|``ft_lstadd_last``|Adds the element ``new`` at the end of the list|
|``ft_lstdelone``|Deletes the content of an element using the given function|
|``ft_lstclear``|Deletes and frees the element and every successor using the given function|
|``ft_lstiter``|Applies a function to each element of the linked list|
|``ft_lstmap``|Applies a function to each element of the copied linked list. The first element of the linked list is returned|

These were the funcitons we were told to implement on the libft library. However we can expand it with extra functions.

### Submodules
Some functions are taken from libft idependent projects which have their own makefiles and headerfiles.
They are added by importing their repositories as gitsubmodules. Then the makefile is on charge of assembling the whole library using the makefiles of the submodules.

#### [printf](https://github.com/chriss1245/printf)
|Function|Description|
|:--------:|:-----------:|
|``ft_printf``|A simplified version of libc's printf|

#### [get_next_line](https://github.com/chriss1245/get_next_line)
|Function|Description|
|:--------:|:-----------:|
|``get_next_line``|Returns the next read line from a file identified by a file descriptor|

**Note:** There are more functions in both projects' headerfiles which can be used from libft since libft.h includes both: ``ft_printf.h`` and ``get_next_line.h``

