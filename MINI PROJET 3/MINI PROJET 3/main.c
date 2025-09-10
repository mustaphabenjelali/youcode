#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void P(char input[]) {
    if (strstr(input, "happy")) {
        printf("Chatbot:  Hi! Great to hear that!\n");
    } else if (strstr(input, "sad")) {
        printf("Chatbot: Oh no! Hope things get better soon\n");
    } else if (strstr(input, "hello")) {
        printf("Chatbot: Hi! Great to hear that! \n");
    } else if (strstr(input, "help")) {
        printf("Chatbot: Sure! What do you want to talk about?\n");
    } else {
        printf("Chatbot: I don't understand.\n");
    }
}

int main()
{
    char input[200];


    if (strcmp(input, "exit") == 0) {
            printf("Chatbot: Bye!\n");
            break;
        }


    return 0;
}
