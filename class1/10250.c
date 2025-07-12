#include <stdio.h>

int main(void) {

    int T, H, W, N, a, b;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%d %d %d",&H, &W, &N);
        a = N % H;
        if(a == 0) a = H;
        b = (N - 1) / H + 1;

        printf("%d%02d\n", a, b);
    }



    return 0;
}