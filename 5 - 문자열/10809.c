// 10809

#include <stdio.h>
#include <string.h>

int main(void) {

    char s[100];
    scanf("%s",s);

    int len = strlen(s);

    for(char alp = 'a'; alp <= 'z'; alp++) {
        int index = -1;
        for(int i = 0; i < len; i++) {
            if(alp == s[i]) {
                index = i;
                break;
            }
        }
        printf("%d ",index);
    }

    return 0;
}