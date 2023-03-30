#include<stdio.h>

int main() {
    int x, y, z;
    char c;
    int res = scanf("%d%d%d%c", &x, &y, &z, &c);
if (res !=4) {
    printf("n/a");
    return 1;
}
if(c != '\n' || (x < 0 || x >1) || (y < 0 || y > 1) || (z <0 || z >1)) {
            printf("n/a");
            return 1;
        }
if(x && (y || z)) {
    printf ("1");
    }
    else { printf("0");
    }
}
    
 