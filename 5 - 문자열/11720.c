// 11720

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;
    scanf("%d",&n);

    char *s = malloc(sizeof(char) * (n + 1));
    scanf("%s",s);

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }

    printf("%d\n",sum);

    free(s);

    return 0;
}