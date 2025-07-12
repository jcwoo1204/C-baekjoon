// 2562

#include <stdio.h>

int main(void) {

    int arr[9] = { 0, };
    int max = -1;
    int index;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        scanf("%d",&arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            index = i + 1;
        }
    }

    printf("%d\n",max);
    printf("%d\n",index);

    return 0;
}