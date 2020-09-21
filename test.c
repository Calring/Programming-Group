/*************************************************************************
	> File Name: test.c
	> Author: Xiaolin Tang 
	> Mail: 519384449@qq.com 
	> Created Time: Wed 16 Sep 2020 09:15:40 PM CST
 ************************************************************************/

#include "stdio.h"

#define swap(a, b) { \
    __typeof(a) __temp = a; \
    a = b; b = __temp; \
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    char str[1000] = {0}, buffer[1000] = {0}, *p = str, *q = buffer;
    sprintf(str, "%d.%d.%d.%d", 192, 168, 0, 1);
    printf("str = %s\n", str);
    if (n & 1) {
        sprintf(q, "(%s)", p);
        swap(q, p);
    }
    if (n & 2) {
        sprintf(q, "{%s}",p);
        swap(p, q);
    }
    if (n & 4) {
        sprintf(q, "[%s]", p);
        swap(p, q);
    }
    printf("%s\n", p);
//    FILE *fout = fopen("output", "w");
    fprintf(stdout, "stdout = %s\n", p);
    fprintf(stderr, "stderr = %s\n", p);
    return 0;
}
