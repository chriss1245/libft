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
### Equal to libc's functions
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
