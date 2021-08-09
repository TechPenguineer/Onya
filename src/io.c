#include "include/io.h"
#include "include/token.h"
#include <stdio.h>
#include <stdlib.h>
#include "include/lexer.h"
#include <string.h> //Test

void digest_token(char* token) {
    return;
}

char* get_file_contents(const char* filepath)
{
    char* buffer;
    long length;

    FILE* f = fopen(filepath, "rb");

    if (f) {
        printf("IO\n");
        fseek(f, 0, SEEK_END);
        length = ftell(f);
        fseek(f, 0, SEEK_SET);

        buffer = calloc(length, sizeof(char));

        if (buffer) {
            fread(buffer, sizeof(char), length, f);
            printf("File content is:\n%s \n", buffer);
        }

        fclose(f);

        /*
        * Handler: AKA Parser
        */
        printf("\n\nHANDLER\n");
        int parserState = 1;
        int scopeState = 2; //What else to do?
        char* token = calloc(100, sizeof(char));  //For now, 100 is a good number for testing
        int tokenIndex = 0;
        /*  States:
            SKIP_COMMENT - 0
            RUNNING - 1
            SCOPE - 2
            WAITING FOR DEFINITION - 3
            WAITING FOR ARGS - 4

        */
        for (int i = 0; i < strlen(buffer); i++) {
            if (parserState == 2) {

            }
            else {
                if (buffer[i] == '#') { //Search for comment
                    parserState = 0;
                }
                else if (buffer[i] == '\n') {
                    if (parserState == 0) {
                        parserState = 1;
                        printf("Comment skipped \n");
                    }

                }
                else if (parserState == 1) {
                    if (buffer[i] == ';') {
                        printf("Token is: %s \n", token);
                        digest_token(token);
                        free(token);
                        token = calloc(100, sizeof(char));
                        tokenIndex = 0;
                    }
                    else {
                        token[tokenIndex] = buffer[i];
                        tokenIndex++;
                    }
                }
                else if (parserState > 0) {
                    printf("Char #%d: %c, ASCII: %d \n", i, buffer[i], buffer[i]);
                }
            }
        }
        printf("Test End!\n");

        return buffer;
    }
    printf("Error reading file %s", filepath);
    exit(2);
}