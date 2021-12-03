#!/bin/bash
wget -P /tmp https://github.com/goody-1/alx-low_level_programming/blob/main/0x18-dynamic_libraries/hijack.so
export LD_PRELOAD=/tmp/hijack.so
