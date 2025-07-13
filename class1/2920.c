#include <stdio.h>

int Abs(int a) {
    if(a < 0) a *= -1;
    
    return a;
}

int main(void) {

    int num[8];

    for(int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
    }

    for(int j = 0; j < 7; j++) {
        int diff = Abs(num[j] - num[j + 1]);
        if(diff != 1) {
            printf("mixed\n");
            return 0;
        }
    }

    if(num[0] == 1) printf("ascending\n");
    else printf("descending\n");

    return 0;
}