# Compiler to use
GCC     = gcc                        # Set the C compiler to gcc

# Compiler flags
CFLAGS  = -Wall -Wextra -Werror     # Enable all warnings, extra warnings, and treat warnings as errors

# Archiver to build static libraries
AR      = ar rcs                    # 'ar' is used to create static libraries (.a files); 'rcs' adds/replaces/creates index

# Command to remove files/directories
RM      = rm -rf                    # Remove files forcefully and recursively (used in clean rules)

# List of source files without extension
FILES   =                           # Define the base names (without .c or .o) of the source files
    srcs/ft_putchar                 # A file that outputs a character
    srcs/ft_strcmp                 # A file that compares two strings
    srcs/ft_putstr                 # A file that outputs a string
    srcs/ft_swap                   # A file that swaps two integers
    srcs/ft_strlen                 # A file that calculates the length of a string

# Automatically generate source (.c) and object (.o) file lists
SRC     = $(FILES:=.c)              # Append '.c' to each file name in FILES to get full source file list
OBJ     = $(FILES:=.o)              # Append '.o' to each file name in FILES to get object file list

# Name of the output static library
LIB     = libft.a                   # Name of the static library to create

# Default target (first target is the default one)
all: $(LIB)                         # Build the static library by default

# Rule to create the library from object files
$(LIB): $(OBJ)                      # If library is missing or object files are newer, rebuild
	$(AR) $@ $^                    # Create or update the library: $@ = libft.a, $^ = all .o files

# Pattern rule to compile .c files into .o files
%.o: %.c                            # Generic rule: for any .c file, produce its .o file
	$(GCC) $(CFLAGS) -c $< -o $@  # Compile: $< = source file, $@ = object file

# Clean rule: remove all object files
clean:
	$(RM) $(OBJ)                   # Remove all .o files

# Full clean rule: remove object files and the library
fclean: clean
	$(RM) $(LIB)                   # Remove the static library as well

# Rebuild rule: clean everything then rebuild
re: fclean all                     # Fully clean and re-run the default build target
