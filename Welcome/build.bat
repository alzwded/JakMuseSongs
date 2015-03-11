@echo off

..\Jakkat\jakkat -w main.out main.sng
..\JakMuse\win32\jakmuse -w test.wav < main.out
