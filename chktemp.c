#include <stdlib.h>

#define BASH_SCRIPT "\
#!/bin/bash \n\
res=0;i=0 \n\
for t in /sys/class/thermal/thermal_zone*/temp \n\
do \n\
    read t < $t \n\
    t=$((t/100)) \n\
    res=$((res+t)) \n\
    i=$((i+1)) \n\
done \n\
res=$((res/i)) \n\
echo Average temperature across $i cores: \n\
echo $res | sed 's/.$/.&°C/' \n\
"

int main(void) {
    return system(BASH_SCRIPT);
}
