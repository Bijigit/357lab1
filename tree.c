#include <stdio.h>
#include <string.h>

int main()

{

    char buffer[100];
    int height;
    fgets(buffer, 100, stdin);
    int size = strlen(buffer) - 1;
    int result = sscanf(buffer, "%d", &height);
    if((size == 1 && height >= 3) || (size == 2 && (height <= 15 && height >= 10))){
        for(int i = 0; i < height - 3; i++){
            for(int j = 0; j < height - 4 - (i); j++){
                printf(" ");
            }
            for(int k = 0; k < (2 *i) + 1; k++){
                printf("*");
            }
            printf("\n");
        }
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < height - 4; j++){
                printf(" ");
            }
            printf("*\n");
        }
        return 0;
    }else{
        printf("Error: Please input an integer between 3 and 15");
    }
    

    return 0;

}