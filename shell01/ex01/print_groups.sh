#!/bin/ssh
id --groups -n $FT_USER| tr ' ' ',' |tr -d '\n'