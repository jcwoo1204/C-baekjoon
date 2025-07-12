// 2675

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; i++) {
        int a;
        char s[21] = {0, };
        scanf("%d %s",&a, s);

        int len = strlen(s);

        for(int j = 0; j < len; j++) {
            for(int k = 0; k < a; k++) {
                printf("%c",s[j]);
            }
        } printf("\n");
    }

    return 0;
}