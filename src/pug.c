/*
PUG by Alexander Abraham a.k.a. "Angel Dollface".
Licensed under the MIT license.
*/

// Including C's standard
// library.
#include <stdio.h>

// We import this module
// to use functions like
// "strcmp".
#include <string.h>

// Importing the library
// to work with "traditional"
// boolean values.
#include <stdbool.h>

// This function checks whether
// a given file exists and returns
// a boolean depending on whether this
// is the case or not.
bool file_exists(char subject[]){
    bool result = false;
    FILE *filepointer;
    filepointer = fopen(subject, "r");
    if (filepointer == NULL){}
    else {
        result = true;
    }
    return result;
}

// This function reads a file's contents
// as immutable strings and prints them out.
void print_lines(char subject[]){
    if (file_exists(subject)){
        FILE *filepointer;
        filepointer = fopen(subject, "r");
        char *line;
        while (fgets(line, sizeof(line), filepointer)) {
            printf("%s", line); 
        }
        printf("\n");
    }
    else {
        printf("The file \"%s\" does not exist!", subject);
    }
}

// This function contains Pug's CLI.
void cli(int argc, char* argv[]){
    if (argc == 2){
        if (strcmp(argv[1],"version") == 0){
            printf("Pug v.0.1.0\nby Angel Dollface.\n");
        }
        else if (strcmp(argv[1],"help") == 0){
            printf("pug DATA    print the contents of a file\n");
        }
        else if (file_exists(argv[1]) == true){
            print_lines(argv[1]);
        }
        else {
            printf("Invalid usage!\n");
        }
    }
    else {
        printf("Invalid usage!\n");
    } 
}

// The main point of entry for Clang.
int main(int argc, char* argv[]){
    cli(argc, argv);
    return 0;
}