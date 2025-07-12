// 11718

#include <stdio.h>
#include <string.h>

/*int main(void) {

    char s;

    while(scanf("%c",&s) != EOF) {
        printf("%c",s);
        getchar();
    }


    return 0;
} */

int main(void) {
    char arr[101];
    while(scanf("%[^\n]s",arr) != EOF) {
        printf("%s\n", arr);
        getchar();
    }
}