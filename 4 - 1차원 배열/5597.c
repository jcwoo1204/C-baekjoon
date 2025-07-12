// 5597

#include <stdio.h>

int main(void) {

    //배열 인덱스 = 값 세팅
    int arr[31] = {0, };
    for(int i = 1; i <= 30; i++) {
        arr[i] = i;
    }

    //입력받은 번호 배열에서 지우기
    for(int i = 0; i < 28; i++) {
        int a;
        scanf("%d",&a);
        arr[a] = 0;
    }

    // 0이 아닌 인덱스 출력
    int count = 0;
    for(int i = 1; i <= 30; i++) {
        if(arr[i] != 0) {
            printf("%d\n", i);
            count ++;
            if (count == 2) break;
        }
    }


    return 0;
}