/*************************************************************************
	> File Name: jiecheng.c
	> Author: Xiaolin Tang 
	> Mail: 519384449@qq.com 
	> Created Time: Sun 20 Sep 2020 07:34:58 PM CST
 ************************************************************************/

#include<stdio.h>
long long number(int n) {
    if (n == 1 || n == 0) return 1;
    return n * number(n - 1);
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        printf("%lld\n", number(n));
    }
    return 0;
}
