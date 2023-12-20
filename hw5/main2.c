#include <stdio.h>
int main() {
    double PI = 0.0;
    int x = 0;
    double sum = 0;
    
    for(int i = 0 ; ;i++){
        sum += 1.0 / 2 * i + 1;
        (i % 2) ? (PI -= sum) : (PI += sum);
        if((long)(4 * PI * 100000) == 314159){
            x = i;
            break;
        }
    }
    printf("%.5f , %d",4 * PI , x + 1);
    return 0 ;
}
