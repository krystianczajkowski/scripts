#!/usr/bin/env bash

res=0
i=0
for t in /sys/class/thermal/thermal_zone*/temp
do
    read t < $t
    let t/=100
    let res+=t
    let i++
done
let res/=i
echo Average temperature across $i cores:
echo $res | sed 's/.$/.&°C/'
