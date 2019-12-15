## 42-libft: re-implementation of common C functions 

## Overview
The first project at 42 that aims to recreate a number of standard C functions (plus some additional ones) from scratch.
Only the following libc functions are allowed: `write(2)`, `malloc(3)`, `free(3)`.
The library is extensively used in most of subsequent 42 projects.


## Documentation
Unfortunately, documentation is not currently provided and user has no choice but to look in the source code.


## Compilation
`make` to compile `libft.a` <br/>
`make clean` to delete `.o` files <br/>
`make fclean` to delete `.o` files and `libft.a` <br/>
`make re` to delete everything and recompile <br/>


## Usage
Include a `libft` folder with compiled `libft.a` and `includes/libft.h` in your project.


Compile your project with the following flags:
```
-L libft -l ft -I libft/includes/
```
Include in your project:
```C
include "libft.h"
```
