#!/bin/sh
touch -A -000001 bomb.txt | stat -t %X -t %s -f %a  bomb.txt
