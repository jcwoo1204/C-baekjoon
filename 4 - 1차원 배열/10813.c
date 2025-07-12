// 10813

#include <stdio.h>

int main(void) {

    int N,M;
    scanf("%d%d",&N,&M);

    //바구니 번호대로 세팅
    int arr[N+1];
    for(int i = 1; i <= N; i++) {
        arr[i] = i;
    }

    //M번 입력받고 바꾸기
    for(int i = 0; i < M; i++) {
        int a,b,temp;
        scanf("%d%d",&a,&b);
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    //출력
    for(int i = 1; i <= N; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}