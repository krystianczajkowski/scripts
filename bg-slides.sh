#!/bin/bash

i=0
while [ $i -lt 100 ]; do
    for im in $HOME/Pictures/Wallpapers/*; do
        feh --bg-max $im &
        sleep 1800
    done
    let i++
done
