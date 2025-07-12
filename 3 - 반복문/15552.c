// 15552

#include <stdio.h>

int main(void) {

    int T = 0;
    scanf("%d",&T);

    for(int i = 0; i < T; i ++) {
        int a, b;
        scanf("%d%d",&a,&b);
        printf("%d\n", a + b);
    }

    return 0;
}