#include <stdio.h>
int main() {
    int k;
    for(k=1;k<=81;++k) {
        int i = (k-1)/9+1; 
        int j = (k-1)%9+1; 
        printf("%d * %d = %2d ", i , j , i*j);
        printf("\n");
    }
}
