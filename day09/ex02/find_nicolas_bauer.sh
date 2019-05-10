#!/bin/sh
cat contacts_hard.txt | grep -i "nicolas\sbauer\|bauer\snicolas" | grep "-" | rev | awk '{print $2}' | rev