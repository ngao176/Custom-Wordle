#include "wordle.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Play the wordle game.
 *
 * key          The answer word. Should be lowercase only.
 * nattempts    The total number of attempts allowed.
 * attempts     An array of string buffers to keep track of each attempt.
 * return       Number of guesses the player took to guess the right word,
 *              return 0 if player failed to guess the word.
 */
int wordle(const char *key, int nattempts, char **attempts)
{
    /*
     * Implement this function. Feel free to create any
     * helper functions you need. But do NOT change the
     * parameters of this function.
     */
     int p = strlen(key);

     char *guess = calloc((p+1) , sizeof(char));
     char *clue = calloc((p+1) , sizeof(char));

     for(int i =0; i<p;i++){
         clue[i] = '_';
     }
     clue[p]='\0';
     int x =1;
     int y = 0;
     printf("%s\r", clue);                 
     while(x<nattempts){
        get_input(guess, p);
        if (strcmp(key, guess) == 0){
            free(guess);
            free(clue);
            return x;
        }

        for (int i=0; i<p; i++){
            for (int j=0; j<p; j++){
                if (key[i] == guess[j]){
                    clue[i] = key[i];
                }
            }   
        }
           
            
        printf("%s\r", clue);
        for(int k = 0; k <p+1 ;k++){
            attempts[y][k] = guess[k];
        }
        y++;
        x++;


    } 
    free(guess);
    free(clue);
    //printf("Better luck next time! The word was %s", key);
    return -1;
}
