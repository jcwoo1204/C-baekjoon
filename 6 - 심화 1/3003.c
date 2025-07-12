// 3003

#include <stdio.h>

int main(void) {

    int num[6] = { 1, 1, 2, 2, 2, 8};
    int find[6] = {0, };

    for(int i = 0; i < 6; i++) {
        int a;
        scanf("%d",&a);
        find[i] = num[i] - a;
    }
    for(int i = 0 ; i < 6; i++) {
        printf("%d ",find[i]);
    }

    return 0;
}