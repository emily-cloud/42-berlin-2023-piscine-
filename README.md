# 42 Berlin Piscine - Custom C Library Functions

## Overview
During my time at the 42 Berlin Piscine, I implemented several fundamental C functions from scratch to better understand low-level programming and memory management. These functions mimic standard C library functions such as `strcmp`, `strcpy`, and many others.

## Implemented Functions
Below is a list of some of the functions I wrote:

- `ft_strcmp` - Compares two strings lexicographically.
- `ft_strcpy` - Copies a string from source to destination.
- `ft_strlen` - Returns the length of a given string.
- `ft_strdup` - Duplicates a given string by allocating memory dynamically.
- `ft_strcat` - Concatenates two strings.
- `ft_memcpy` - Copies memory from one location to another.
- `ft_memset` - Fills a block of memory with a specific value.
- `ft_atoi` - Converts a string to an integer.

## Purpose
The goal of implementing these functions was to reinforce my understanding of:
- String manipulation in C.
- Pointer arithmetic and memory allocation.
- Working without built-in standard library functions.

## Compilation and Usage
Each function is implemented separately and can be tested individually. You can compile them using `gcc`:
```sh
gcc -Wall -Wextra -Werror ft_strcmp.c -o strcmp_test
./strcmp_test
```
Feel free to integrate them into your own projects!

## Lessons Learned
Through this experience, I improved my ability to:
- Debug segmentation faults and memory leaks.
- Understand the inner workings of fundamental C functions.
- Follow strict coding standards and best practices.

## Author
Written by Huyuan Ai during the 42 Berlin Piscine.



