#include <stdio.h>
#include <string.h>

int main(void) {

    char arr[5][16] = {};
    int len = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%s", arr[i]);
        if(len < strlen(arr[i])) len = strlen(arr[i]);
    }

    for(int j = 0; j < len; j++) {
        for(int k = 0; k < 5; k++) {
            if(arr[k][j] == '\0') continue;
            printf("%c", arr[k][j]);
        }
    }
    printf("\n");

    return 0;
}