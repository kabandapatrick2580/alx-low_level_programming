#!/bin/bash

# Compile all .c files into .o files
for source_file in *.c; do
    object_file="${source_file%.c}.o"
    gcc -Wall -Werror -pedantic -Wextra -fPIC -c "$source_file" -o "$object_file"
done

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up by removing the .o files
rm -f *.o
