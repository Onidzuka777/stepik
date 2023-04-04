#include<stdio.h>

int main() {
    int rub, kop, n, rest;
    scanf("%d%d", &rub, &kop);
    int total=rub*100 + kop;
    n=total/106;
    rest=total%106;
    printf("%d %d", n, rest);
    return 0;
}

