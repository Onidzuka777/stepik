#include<stdio.h>
int main() {
    int n, day, mondey;
    scanf("%d%d", &n, &day);
    mondey=(n-day)/7+1;
    printf("%d", mondey);
    return 0;
}