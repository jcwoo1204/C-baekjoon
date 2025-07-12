// 10810

#include <stdio.h>

int main(void) {

    int N,M;
    scanf("%d%d",&N,&M);


    // 배열 초기화
    int arr[N + 1];
    for(int i = 1; i < N + 1; i++) {
        arr[i] = 0;
    }
    int a,b,c;

    //공 넣기
    for(int i = 1; i <= M; i++) {
        
        scanf("%d%d%d",&a,&b,&c);
        for(int j = a; j <= b; j++) {  //반복문에서 첫 시작 변수 초기화 필수
            arr[j] = c;
        }
    }

    //출력
    for(int i = 1; i < N + 1; i++) {
        printf("%d ",arr[i]);
    }
    

    return 0;
}