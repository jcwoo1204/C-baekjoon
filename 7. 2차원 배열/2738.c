#include <stdio.h>

void Addarr(int rows, int cols) {
    int arr[rows][cols];  // 2차원 배열 생성

    // 배열 2개 입력받기

    
    for(int j = 0; j < rows; j++) {
        for(int k = 0; k < cols; k++) {
            scanf("%d", &arr[j][k]);
        }
    }
    for(int j = 0; j < rows; j++) {
        for(int k = 0; k < cols; k++) {
            int a = 0;
            scanf("%d", &a);
            arr[j][k] += a;
        }
    }
    

    for(int j = 0; j < rows; j++) {
            for(int k = 0; k < cols; k++) {
                printf("%d ", arr[j][k]);
            }
            printf("\n");
        }  
}

int main(void) {

    int N, M;
    scanf("%d %d", &N, &M);

    Addarr(N, M);

    return 0;
}