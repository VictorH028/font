# This is a  comment
CC = clang++


font: font.cpp
	@echo "[@] Creando ejecutable"
	$(CC) font.cpp ./lib/font.cpp   -o font
