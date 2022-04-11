logger: main.o keylogger.o key.o
	gcc -o logger main.o keylogger.o key.o

main.o: main.c
	gcc -c main.c

keylogger.o: keylogger.c
	gcc -c keylogger.c

key.o: key.c
	gcc -c key.c
	
clean: 
	rm *.o logger
