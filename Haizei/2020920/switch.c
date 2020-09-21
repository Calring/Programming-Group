/*************************************************************************
	> File Name: switch.c
	> Author: Xiaolin Tang 
	> Mail: 519384449@qq.com 
	> Created Time: Sun 20 Sep 2020 02:31:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch(n) {
    case 1: 
        printf("one ");
    case 2:
        printf("two ");
    case 3:
        printf("three\n");
        break;
    default:
        printf("error");break;
    }
    return 0;
}
