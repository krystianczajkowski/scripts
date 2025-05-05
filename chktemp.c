#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Temp:\n");
    system("cat /sys/class/thermal/thermal_zone*/temp");
    return 0;
}
