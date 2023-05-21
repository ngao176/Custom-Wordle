# Custom-Wordle
This is my own version of wordle. In addition to being able to choose a dictionary file, the player can now specify the length of the target word and the number of attempts allowed. This means that we will have to dynamically allocate our 2D array on the heap using malloc() and then free it at the end of the program using free().
The command line options are:

-d <dictionary file>: specify a dictionary file from which the target word is to be chosen.

-l <n>: the length of the target word.

-a <n>: the maximum number of attempts allowed.
