// 5622

#include <stdio.h>
#include <string.h>

int main(void) {

    int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

    char s[16];
    scanf("%s",s);

    int len = strlen(s);
    int count = 0;
    for(int i = 0; i < len; i++) {
        int index = s[i] - 'A';
        count += time[index];
    }

    printf("%d\n",count);


    return 0;
}