#!/bin/bash

s=(10.126.60.94 10.126.61.94 )
	for i in ${s[@]}
	do
		nc $i 4444 < execchild.c
	done
}
