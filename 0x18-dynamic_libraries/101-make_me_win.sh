#!/bin/bash
wget https://github.com/YAOSTEPHANE/alx-low_level_programming/raw/master/0x18-dynamic_libraries/makemewin.so -O /tmp/makemewin.so
export LD_PRELOAD=/tmp/makemewin.so
