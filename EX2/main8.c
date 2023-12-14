#include <stdio.h>
int main() {
    intx=-9;
    inty=9;
    intz=1;
    if (x<0) {
        int sum = (x*-1)*100 + y*10 +z;
        printf("%d",sum*-1);
    }
    else {
        printf("%d",x*100 + y*10 +z);
    }
    return 0;
}
