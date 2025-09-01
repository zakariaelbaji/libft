Libft
Table of Contents
Overview

Features

Getting Started

Prerequisites

Installation

Usage

Testing

Overview
Libft is a foundational C library that provides a rich set of utility functions for string, memory, and character operations. Designed to boost productivity and code safety, it offers reusable components that simplify common low-level programming tasks.

This project empowers developers to write cleaner, more efficient, and more reliable C code by providing a standardized set of well-tested utilities.

Features
✅ String Transformation: Functions like ft_strmapi and ft_substr enable flexible, functional-style string modifications and manipulations.

💾 Memory Safety: Utilities such as ft_calloc, ft_bzero, and ft_memmove ensure reliable and safe memory management.

📍 Character Checks: Easy-to-use functions like ft_isalpha, ft_isdigit, and ft_isprint facilitate robust input validation and character handling.

📤 Output Flexibility: Functions like ft_putchar_fd and ft_putstr_fd support versatile data output across different streams (e.g., standard output, file descriptors).

🔧 Core Utilities: Essential tools like ft_strlen, ft_atoi, and ft_itoa streamline fundamental data processing and conversions.

Getting Started
Prerequisites
Ensure you have the following installed on your system:

A C Compiler (e.g., gcc, clang)

make (GNU Make)

Installation
To build libft from source, follow these steps:

Clone the repository:

bash
git clone https://github.com/zakariaelbaji/libft
Navigate to the project directory:

bash
cd libft
Build the library:
Simply run make. This will compile the source files and create the libft.a archive file.

bash
make
Usage
Once compiled, you can use the library in your projects.

Include the header in your C files:

c
#include "libft.h"
Compile your program by linking against the libft.a library:

bash
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
