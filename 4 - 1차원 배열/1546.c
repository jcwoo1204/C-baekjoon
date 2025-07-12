// 1546

#include <stdio.h>

int main(void) {

    int N;
    float max = -1;
    float result = 0;
    scanf("%d",&N);

    float arr[N];
    for(int i = 0; i < N; i++) {
        float a;
        scanf("%f",&a); // scanf("%d", &score[i]); 처럼 바로 변수 받을 수 있음
        arr[i] = a;
        if(a > max) max = a;
    }

    for(int i = 0; i < N; i++) {
        result += arr[i] / max * 100;
    }

    result /= (float)N;

    printf("%f",result);
    return 0;

}