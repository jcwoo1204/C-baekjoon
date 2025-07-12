// 10818

#include <stdio.h>

int main(void) {

    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < N; i++) {
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }

    printf("%d %d\n",min,max);

    return 0;
}