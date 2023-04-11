#include<stdio.h>

int main() {
int n;
double k, meet;
scanf("%d%lf", &n, &k);
meet=n-(n*k);
printf("%d", (int)meet);
return 0;
}


