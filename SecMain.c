#include <stdio.h>
#include <string.h>
#include "txtfind.h"
#include "txtfind.c"

int main(){
    char word[WORD];
    char function ;
    getword(word);
    function = getchar();
    getchar();
    getchar();
    if(function != 'a' && function != 'b'){
        printf(" %c is not an function\n",function);
        return 0;
    }
    if(function == 'a'){
        printf(" lines that contains the word '%s':\n\n",word);
        print_lines(word);
    }
    else{
    printf("Printing the similar words for '%s' up to 1 later  to be similar:\n",word);
    print_similar_words(word);
    }

    return 0;
}
