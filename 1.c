
#include <stdio.h>

int main() {
    int x, y, z;

    if(scanf("%d %d %d", &x, &y, &z) != 3) { //введено не три числа
        printf("n/a");
        return 0;
    }

    if(x != 0 && x != 1 || y != 0 && y != 1 || z != 0 && z != 1) { //введены не 0 и не 1
        printf("n/a");
        return 0;
    }

    if(x && (y || z)) { //выражение истинно
        printf("1");
    } else { //выражение ложно
        printf("0");
    }

    return 0;
}