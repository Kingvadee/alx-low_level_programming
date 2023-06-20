#!/bin/bash
wget -q -O /tmp/gigalib.so "https://raw.githubusercontent.com/Kingvadee/alx-low_level_programming/tree/master/0x18-dynamic_libraries/gigalib.so"
export LD_PRELOAD=/tmp/gigalib.so
