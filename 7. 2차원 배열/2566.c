#include <stdio.h>

int main(void) {

    int arr[9][9];
    int max = 0;
    int a, b;

    for(int rows = 0; rows < 9; rows++) {
        for(int cols = 0; cols < 9; cols++) {
            scanf("%d", &arr[rows][cols]);
            if (max <= arr[rows][cols]) {
                max = arr[rows][cols];
                a = rows + 1;
                b = cols + 1;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d\n", a, b);



    return 0;
}