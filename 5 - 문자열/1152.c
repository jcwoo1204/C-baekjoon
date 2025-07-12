// 1152

#include <stdio.h>
#include <string.h>

int main(void) {

    char s[1000001];
    scanf("%[^\n]s",s);

    int len = strlen(s);
    int count = 0;
    for(int i = 0; i < len; i++) {
        if(s[i] == ' ') {
            if(i != 0 && i != len - 1) {
                count++;
            }
            if(len == 1) {
                count--;
            }
        }
    }

    printf("%d\n",count + 1);


    return 0;
}