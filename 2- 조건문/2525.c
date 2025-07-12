// 2525

#include <stdio.h>

int main(void) {

    int hour, min, time;
    scanf("%d%d%d", &hour, &min, &time);

    min += time;
    hour += min / 60;
    min = min % 60;

    if (hour % 24 == 0) hour = 0;
    else hour = hour % 24;

    printf("%d %d\n", hour, min);

    return 0;
}