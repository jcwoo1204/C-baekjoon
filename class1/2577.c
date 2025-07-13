#include <stdio.h>

int Numlen(int a) {
    int count = 0;
    while(a > 0) {
        a /= 10;
        count++;
    }

    return count;
}

int main(void) {

    int A, B, C, result, count = 0;
    int num[10] = {0};
    scanf("%d %d %d", &A, &B, &C);

    result = A * B * C;

    count = Numlen(result);

    for(int i = 0; i < count; i++) {
        num[result % 10]++;
        result /= 10;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n",num[i]);
    }

    return 0;
}