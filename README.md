# The C Programming Language exercises
This repo will contain notes and exercises from the book "The C Programming Language" by Brian W. Kernighan & Dennis M. Ritchie 

Will add notes on topics such as arrays, char arrays vs strings, pointers, etc., (Soon..)

hello.c                  The usual "Hello world" program... XD
char_count.c             A program that counts the no of characters (includes blank,tab & newline characters) from input till EOF
line_count.c             A program that counts the no of lines from input till EOF (Basically count the no of newline('\n') characters)
word_count.c             A program that counts the no of words from input till EOF (a word is a sequence of characters other than blank(' '), tab('\t') or newline('\n') characters)
horizontal_histogram.c   A program that prints a histogram of frequencies of digit characters from input till EOF
vert_histogram.c         Same program but this time the histogram is oriented vertically (a bit trickier)
reverse_string.c         A program that reverses input string line by line
one_word_per_line.c      A program that gets input till EOF and prints one word per line
longest_line.c           A program that prints the longest line from input till EOF (involves copying into char arrays)
longest_line_length.c    A program that prints the longest line length from input till EOF (uses getchar fn)

run     Simple script that compiles and runs simple C programs (I use Linux. Might need to be tweaked for windows)
        Usage: ./run hello.c
