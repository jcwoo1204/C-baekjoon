#include <stdio.h>

int main(void) {

    int a;
    scanf("%d",&a);

    int arr[a]; //배열 크기 변수로 받고 바로 선언은 가능
    //int arr[a] = { 0, };  > 배열 크기 변수로 설정 후 초기화까지 동시엔 선언 불가, 따로 초기화 해주거나 값 입력
    int length = sizeof(arr) / sizeof(int);

    printf("%d\n",length);

    return 0;

}