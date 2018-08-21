#!/bin/bash
ldapsearch -xLLL uid='z*' | grep 'cn:' | sort -d -r -f | cut -c5-
