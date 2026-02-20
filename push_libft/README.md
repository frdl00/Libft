*This project has been created as part of the 42 curriculum by fardal.*

# Libft

## Description

Libft is the first core project of the 42 curriculum.  
The objective is to recreate a selection of standard C library functions and implement additional utilities to build a personal static library (`libft.a`).

This project strengthens understanding of:
- Memory management
- String manipulation
- Pointers
- Linked lists
- Static libraries and Makefile structure

The resulting library will be reused in future 42 projects.

---

## Compilation

To build the library:

```bash
make
````

Available rules:

```bash
make clean
make fclean
make re
```

The project is compiled with:

```
cc -Wall -Wextra -Werror
```

The static library `libft.a` is created using `ar`.

---

## Library Content

### Part 1 — Libc Reimplementations

Character checks, memory handling, string functions and conversions:

* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
* `ft_strlen`, `ft_strlcpy`, `ft_strlcat`
* `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* `ft_memchr`, `ft_memcmp`
* `ft_toupper`, `ft_tolower`
* `ft_atoi`, `ft_calloc`, `ft_strdup`

### Part 2 — Additional Functions

* `ft_substr`, `ft_strjoin`, `ft_strtrim`
* `ft_split`, `ft_itoa`
* `ft_strmapi`, `ft_striteri`
* `ft_putchar_fd`, `ft_putstr_fd`
* `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 — Linked List

Using:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

Implemented:

* `ft_lstnew`
* `ft_lstadd_front`, `ft_lstadd_back`
* `ft_lstsize`, `ft_lstlast`
* `ft_lstdelone`, `ft_lstclear`
* `ft_lstiter`, `ft_lstmap`

---

## Technical Rules

* No global variables
* No memory leaks
* No unexpected crashes
* Compiled with `-Wall -Wextra -Werror`

---

## Resources

* `man` pages
* [What is Makefile ?](https://khambud.medium.com/what-is-makefile-760d2f6eae24)
* [Linked List](https://en.wikipedia.org/wiki/Linked_list)

### AI Usage

AI was used only for conceptual clarification and debugging guidance.
All implementations were written manually to ensure full understanding.