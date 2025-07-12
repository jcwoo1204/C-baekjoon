// 10811

#include <stdio.h>

int main(void) {

    int N,M;
    scanf("%d%d",&N,&M);

    int arr[N + 1];
    for(int i = 1; i <= N; i++) {
        arr[i] = i;
    }

    for(int i = 0; i < M; i++) {
        int a,b;
        scanf("%d%d",&a,&b);
        int len = b - a;
        if(len % 2 == 0) {
            for(int j = 0; j < len / 2; j++) {
                int temp = arr[a + j];
                arr[a + j] = arr[b - j];
                arr[b - j] = temp;
            }
        } else {
            for(int j = 0; j < (len / 2) + 1; j++) {
                int temp = arr[a + j];
                arr[a + j] = arr[b - j];
                arr[b - j] = temp;
            }
        }
    }

    for(int i = 1; i <= N; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}