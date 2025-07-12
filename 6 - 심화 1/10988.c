// 10988

#include <stdio.h>
#include <string.h>

int main(void) {

    char s[101];
    scanf("%s", s);

    int len = strlen(s);
    int find = 1;
    
    for(int i = 0; i < len/2; i++) {
        if(find != 1) break;
        else {
            if(s[i] != s[len - i - 1]) find--;
        }
    }
    printf("%d\n",find);


    return 0;

}