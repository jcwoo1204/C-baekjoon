// 2941

#include <stdio.h>
#include <string.h>

int main(void) {

    // 문자열 입력 받기
    char s[101];
    scanf("%s",s);

    int cnt = strlen(s);

    // 전체 문자열 길이에서 크로아티아 알파벳 발견 시마다 -1
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == '=') {
            if(s[i-1] == 'c') cnt--;
            if(s[i-1] == 's') cnt--;
            if(s[i-1] == 'z') {
                cnt--;
                if(s[i-2] == 'd') cnt--;
            }
        }
        if(s[i] == '-') {
            if(s[i-1] == 'c') cnt--;
            if(s[i-1] == 'd') cnt--;
        }
        if(s[i] == 'j') {
            if(s[i-1] == 'l') cnt--;
            if(s[i-1] == 'n') cnt--;
        }
    }

    printf("%d\n",cnt);
    

    return 0;
}