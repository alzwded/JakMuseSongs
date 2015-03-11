#!/bin/csh

../Jakkat/jakkat -w main.out main.sng
../JakMuse/jakmuse -w test.wav < main.out
