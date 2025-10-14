#include <iostream>
#include <cstdio>
int main() {
    //define numbers
    int A = 50;
    int B = 25;
    int C = 30;
    int n = A + B; //step one

    for(int i=0; i<100;i=i+1) {
        n=n-C;
        printf("hello there again i = %d\n", i);
    }
}