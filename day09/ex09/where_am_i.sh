#!/bin/sh
ifconfig | grep "inet " | awk '{print $2} END {if (NR == 0) print "I am lost!"}' | tr '\r' '\n'