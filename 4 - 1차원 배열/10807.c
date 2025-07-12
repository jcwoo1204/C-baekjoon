// 10807

#include <stdio.h>

int main(void) {

    int numArr[100] = { 0, };
    int N;
    scanf("%d",&N);
    for(int i = 0; i < N; i++) {
        int a;
        scanf("%d",&a);
        numArr[i] = a;
    }

    int b;
    int count = 0;
    scanf("%d",&b);
    for(int i = 0; i < N; i++) {
        if (numArr[i] == b) count += 1;
    }

    printf("%d\n",count);

    return 0;
}