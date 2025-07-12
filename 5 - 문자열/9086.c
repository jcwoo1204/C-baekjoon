// 9086

#include <stdio.h>
#include <string.h>

int main(void) {

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char s[1000] = { 0, };
        scanf("%s",s);
        int length = strlen(s);
        printf("%c%c\n",s[0],s[length - 1]);
    }

    return 0;

}