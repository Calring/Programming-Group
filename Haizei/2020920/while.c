/*************************************************************************
	> File Name: while.c
	> Author: Xiaolin Tang 
	> Mail: 519384449@qq.com 
	> Created Time: Sun 20 Sep 2020 03:44:56 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n = 1;
    while (n <= 100) {
        printf("%d\n", n);
        n++;
    }
    printf("\n");
    n = 1;
    do {
        printf("%d", n);
        n++;
    } while(n <= 100);
    return 0;
}
