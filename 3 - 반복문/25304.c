// 25304

#include <stdio.h>

int main(void) {

    int price = 0;
    scanf("%d",&price);
    int N = 0;
    scanf("%d",&N);
    int result = 0;

    for(int i = 0; i < N; i++) {
        int cost, num;
        scanf("%d%d",&cost,&num);
        result += cost * num;
    }

    if(price == result) printf("Yes\n");
    else printf("No\n");



    return 0;
}