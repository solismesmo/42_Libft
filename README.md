# Libft
First project as a student at 42. I will need to recode a few functions of the C standard library as well as some other utility functions that i will use during your whole cursus. 

# I - Project Introduction
In 42SP, it is forbidden to proceed with a project using standard functions that have already been defined. If you think you need a function, you should implement it yourself. Through this project, while re-implementing useful C standard functions, I was able to learn how to efficiently manage and handle data and its necessary memory in C language, how to use and how functions work. The function list of this library is planned to be constantly updated whenever necessary during the period of learning at 42 École.

# II - A Few Rules
Projects must be written according to Norm rules.

Functions must not terminate unexpectedly apart from undefined behavior. For example, segmentation fault, bus error, double free, etc.

Any memory space allocated on the heap must be properly freed when needed. Memory leaks are unacceptable.

This library is compiled with CC by specifying the -Wall -Wextra -Werror flags. And Makefiles should not be relinked.

Global variables cannot be used.

If you need sub-functions to write complex functions, you should define these sub-functions as static to avoid publishing them with the library.

# Function List
The functions in this library can be divided into three main parts:
1st is the functions of Libc, the C standard library.
2nd is useful functions for handling strings.
3rd is useful functions for dealing with single linked lists.

# 1. Libc Functions
In the first part, we reimplemented a set of libc functions as defined in man. Functions declare a prototype of the same type as the original. We put ft_ in front of the function name.

For example strlen is -> ft_strlen.

Some of the prototypes of functions that need to be reimplemented use the restrict modifier, but since this keyword is part of the c99 standard, including the restrict modifier in the prototype and compiling with the -std=c99 flag is prohibited.

Implemented the following functions:
memset • bzero • memcpy • memccpy • memmove • memchr • memcmp • strlen • strlcpy • strlcat • strchr • strrchr • strnstr • strncmp • atoi • isalpha • isdigit • isalnum • isascii • isprint • toupper • tolower
And the following functions were reimplemented using the malloc function:
calloc • strdup

# 2. Additional Functions
In the second part, we reimplemented a set of functions not included in libc or included in some other form. Some of these functions used functions from part1 in their implementation.

substr • strjoin • strtrim • split • itoa • strmapi • putchar_fd • putstr_fd • putendl_fd • putnbr_fd

# 3. List Functions
It is convenient to use functions that deal with memory and strings, but when working on a real project, functions that deal with lists were much more needed. The elements of the list have the following structure. Added this structure to the libft.h file.

typedef struct s_list { void *content; struct s_list *next; } t_list; The following functions were implemented and added to the library.

ft_lstnew • ft_lstadd_front • ft_lstsize • ft_lstlast • ft_lstadd_back • ft_lstdelone • ft_lstclear • ft_lstiter • ft_lstmap
# Added later
ft_count_words • ft_strncpy • ft_strndup
