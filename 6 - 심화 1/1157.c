// 1157

#include <stdio.h>
#include <string.h>

int main(void) {

    char s[1000001];
    scanf("%s", s);

    int num[26] = { 0, };

    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        if(97 <= s[i] && s[i] <= 122) {
            s[i] -= 32;
        }
        int index = s[i] - 'A';
        num[index]++;
    }

    int max = -1;
    int index;
    for(int i = 0; i < 26; i++) {
        if(num[i] > max) {
            max = num[i];
            index = i;
        }
    }

    int count = -1;
    for(int i = 0; i < 26; i++) {
        if(max == num[i]) {
            count++;
        }
    }

    if(count != 0) {
        printf("?\n");
    } else {
        char n = index + 65;
        printf("%c\n",n);
    }
    
    return 0;
}