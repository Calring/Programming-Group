/*************************************************************************
	> File Name: oula.c
	> Author: Xiaolin Tang 
	> Mail: 519384449@qq.com 
	> Created Time: Sun 20 Sep 2020 08:29:28 PM CST
 ************************************************************************/

#include<stdio.h>
int Triangle(int n) {
    return n * (n - 1) / 2;
}

int Pentagonal(int n) {
    return n * (3 * n - 1) / 2;
}

int Heagonal(int n) {
    return n * (2 * n - 1);
}

int main() {

    for (long long i = 143;;i++) {
        for (long long j = 165;;j++) {
            for (long long k = 285;;k++) {
                if ((Triangle(k) == Pentagonal(j)) && (Hexagonal(i) 
                    == Triangle(k))) {
                        printf("%d, %d, %d",i, j, k);
                        return 0;
                    }
            }
        }
    }
    return 0;
}
