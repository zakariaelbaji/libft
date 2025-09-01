# Libft - Your Foundational C Library

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Skills Learned](#skills-learned)

---

## Overview
Libft is the very first project in the 42 curriculum.  
The goal is to recreate a simplified version of the standard C library and expand it with additional utility functions that will be reused across future projects.

This project strengthens understanding of memory management, string manipulation, and linked list operations while providing a reliable toolbox for future coding challenges.

---

## Features
✅ **Reimplemented Standard Functions**  
- Memory: `memset`, `memcpy`, `memmove`, `calloc`, …  
- Strings: `strlen`, `strchr`, `strdup`, `strjoin`, …  
- Character checks: `isalpha`, `isdigit`, `isalnum`, …  

✅ **Extra Utility Functions**  
- String manipulation: `ft_substr`, `ft_strtrim`, `ft_split`  
- Conversion: `ft_itoa`  
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`  

### Prerequisites
Make sure you have:
- A C compiler (`gcc` or `clang`)  
- `make` (GNU Make)

---

### Installation
Clone the repository:

```bash
git clone https://github.com/YOUR_USERNAME/libft
cd libft

make
This will compile the source files and generate:

libft.a

Usage

Include the header in your project:
#include "libft.h"

Compile your program with libft.a:

gcc main.c libft.a -o test
./test


```
### Skills Learned

Reimplementing core libc functions from scratch

Low-level memory handling (malloc, pointers, arrays)

Modular design and header files in C

Writing and using Makefiles
