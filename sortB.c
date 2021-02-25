#include <stdio.h>
#include <limits.h>

#define MAX INT_MAX
#define MAX3 USHRT_MAX

int sequence(int from, int to);
int minF(int x, int y);
int maxF(int x, int y);
int sortB(int *array, int length);
void each(int *array, int length);

main() {
//    printf("%d\n", MAX3);
//    printf("%d\n", MAX);
    int f, t;
    scanf("%d %d", &f, &t);

    int min = minF(f, t);
    int max = maxF(f, t);

    int s = sequence(min, max);

    printf("original\n");
    each(s, max - min);

    int sort = sortB(s, max - min);

    printf("sorted\n");
    each(sort, max - min);

    return main();
}

int sequence(int from, int to) {

    if (from == to) {
        return from;
    } else {
///        static int array[1000000];
        static int array[MAX3];
        int j = 0;
        for (int i = to; i >= from; i--) {
            array[j] = i;
            j++;
        }
        int *so = &array[0];
        return so;
    }
}

int minF(int x, int y) {
    return x <= y ? x : y;
}

int maxF(int x, int y) {
    return x < y ? y : x;
}

int sortB(int *array, int length) {
    int j = 0;

    while (length > 0) {
        for (int i = 0; i < length; i++) {
            j = i + 1;

            int min = minF(array[i], array[j]);
            int max = maxF(array[i], array[j]);

            array[i] = min;
            array[j] = max;
        }
        length--;
    }

    int *so = &array[0];
    return so;
}

void each(int *array, int length) {

    if (length == 0) {
        printf("%d", array);
    } else {
        for (int i = 0; i <= length; i++) {
            printf("%d ", array[i]);
        }
    }

    printf("\n");
}
