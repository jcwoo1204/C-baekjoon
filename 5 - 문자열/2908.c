// 2908

#include <stdio.h>

int Swap_num(int n) {
    int a = n / 100;
    int b = (n % 100) / 10;
    int c = n % 10;

    int swap = c * 100 + b * 10 + a;
    return swap;
}

int main(void) {

    int a,b;
    scanf("%d%d",&a,&b);

    a = Swap_num(a);
    b = Swap_num(b);

    if(a > b) {
        printf("%d\n",a);
    } else printf("%d\n",b);

    return 0;
}