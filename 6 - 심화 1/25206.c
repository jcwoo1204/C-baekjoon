#include <stdio.h>
#include <string.h>

int main(void) {

    char name[51];
    char a[8][10] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0"};
    float cnt;

    char s[10];
    float result = 0;
    float total_cnt = 0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %f %s",name, &cnt, s);

        if(strcmp(s, "P") == 0) continue;
        else if (strcmp(s, "F") == 0)
        {
            total_cnt += cnt;
        }
        else {
            float index;
            for(int j = 0; j < 8; j++) {
                if (strcmp(a[j], s) == 0) {
                    index = (float)j;
                    break;
                }
            }
            float grade = 4.5 - 0.5 * index;
            result += cnt * grade;
            total_cnt += cnt;
        }
    }

    printf("%f\n",result / total_cnt);

    return 0;
}