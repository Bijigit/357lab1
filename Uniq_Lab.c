#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * readLine(FILE * file);

int main(int argc, char * argv[]){
    //char *name = argv[1];
    //char name[] = "input.txt";
    FILE *filep;// = fopen(name, "r");
    filep = stdin;
    char *prevLine = NULL;
    char *curLine = NULL;
    curLine = readLine(filep);
    if(curLine != NULL){
        printf("%s", curLine);
        prevLine = curLine;
        curLine = readLine(filep);
    }
    while(curLine != NULL){
        if(strcmp(prevLine, curLine) != 0){
            printf("%s", curLine);
        }
        free(prevLine);
        prevLine = curLine;
        curLine = readLine(filep);
    }
    //fclose(filep);

    return 0;
}

char * readLine(FILE * file){
    char *linep = NULL;
    int length;
    char c;
    length = 0;
    c = getc(file);
    if(c == EOF){
        return NULL;
    }
    while((c != '\n') && (c != EOF)){
        length += 1;
        linep = (char *) realloc(linep, length);
        linep[length - 1] = c;
        c = getc(file);
    }
    length += 2;
    linep = (char *) realloc(linep, length);
    linep[length - 2] = '\n';
    linep[length - 1] = '\0';
    return linep;
}