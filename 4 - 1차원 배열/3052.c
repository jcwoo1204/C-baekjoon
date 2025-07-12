// 3052

#include <stdio.h>

int main(void) {

    int arr[42] = { 0, };

    for(int i = 0; i < 10; i++) {
        int a;
        scanf("%d",&a);
        int index = a % 42;
        arr[index]++;
    }

    int count = 0;
    for(int i = 0; i < 42; i++) {
        if(arr[i] != 0) count++;
    }

    printf("%d\n",count);


    return 0;
}