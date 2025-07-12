// 2480

#include <stdio.h>

int main(void) {

    int a,b,c,max;
    int result = 0;
    scanf("%d%d%d", &a, &b, &c);


    if (a > b) {
        if (b > c) {
            max = a;
        } else {
            if (a > c) max = a;
            else max = c;
        }
    } else {
        if (b > c) max = b;
        else max = c;
    }

    if (a == b) {
        if( b == c) result = 10000 + a * 1000; //case 1 
        else result = 1000 + a * 100;//case 2
    } else {
        if (b == c) result = 1000 + b * 100; //case2
        else if (a == c) result = 1000 + a * 100; //case 2
        else result = max * 100; //case 3
    }

    printf("%d\n",result);

    return 0;
}