all:
	gcc -o positive positive.c
	gcc -E positive.c > positive.i 
	gcc -S -masm=intel positive.i
	as -o positive.o positive.s
	objdump -M intel -d positive.o > positive.dump
	gcc -c -o positive.o positive.c
	objdump -M intel -d positive.o > positive2.dump