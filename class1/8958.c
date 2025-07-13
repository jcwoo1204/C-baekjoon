#include <stdio.h>

int main(void) {

    int N;
    char quiz[80] = {};

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%s", quiz);
        
        int j = 0, result = 0, score = 1;
        while(quiz[j] != '\0') {
            if(quiz[j] == 'O') {
                result += score;
                score++;
            } else score = 1;
            j++;
        }

        printf("%d\n", result);
    }

    return 0;
}