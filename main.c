#include <stdio.h>

#define src "thisisachainofchars"

int mystrlen(char *str);

int main() {
    //initiates string
    char str[] = src;

    char newstr[mystrlen(str)+1];

    for (int x = 0; x < mystrlen(str); x++){
        newstr[x] = str[x];
    }
    newstr[mystrlen(str)] = '\0';

    return 0;
}

//finds length of string
int mystrlen(char *str) {
    //initiates count variable
    int count = 0;

    //while its not the end of the string it counts up by on for every character in the string
    while (str[count] != '\0') {
        count++;
    }

    //returns the length of the string
    return count;
}
