Example: cat <filename>; you can see the contents on screen.

We are trying to achieve the same using a c-program

Simple Rules
    1. First we need to open the file - fopen
    2. Read the contents
    3. Close the file

printf - is connected to the Screen
scanf - is connected to the keyboard

stdio.h
    1. fopen()
    2. getchar()
    3. putchar()
    4. fprintf()
    5. fscanf()
    6. fgets() similar to getline() reads entire line 
    7. fputs() writes a string to a file

command line arguments
    1. When main is called, it is called with two arguments.
    2. The first (conventionally called argc, for argument count) is the number of command-line
    arguments the program was invoked with; the second (argv, for argument vector) is a pointer
    to an array of character strings that contain the arguments, one per string.