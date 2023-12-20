#include <stdio.h>
int main() {
    int i = 12345;
    int more = i/10000;
    int thousand = (i/1000)%10;
    int hundred = (i/100)%10;
    int ten = (i/10)%10;
    int unis = (i/1)%10;
    printf("%d%d%d%d%d",more,unis,hundred,ten,thousand);
    return 0;
}
