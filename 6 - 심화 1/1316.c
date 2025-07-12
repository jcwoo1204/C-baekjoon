// 1316

#include <stdio.h>
#include <string.h>

int main(void) {

    int N;
    scanf("%d",&N);

    int cnt = N;
    char s[101];

    for(int i = 0; i < N; i++) { // 문자열 N개 입력받기
        scanf("%s",s);
        
        int appeared[26] = { 0, };
        

        int len = strlen(s);
        for(int j = 0; j < len; j++) {
            if(appeared[s[j] - 'a'] == 1) { // 이미 존재한 알파벳
                if(s[j] != s[j - 1]) { // 전 알파벳과 다르면 그룹 단어 아님
                    cnt--;
                    break;
                }
            }

            else appeared[s[j] - 'a'] = 1; // 처음 등장한 알파벳이면 숫자 카운트
        }
    }

    printf("%d\n",cnt);

    return 0;
}