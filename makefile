
.PHONY: clean all

all: maindrec mains maindloop loops loopd recursived recursives

mains: libclassrec.a main.o
	gcc -Wall -g -o mains main.o libclassrec.a -lm

maindloop: libclassloops.so main.o
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: libclassrec.so main.o
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm

loops: libclassloops.a

loopd: libclassloops.so

recursives: libclassrec.a

recursived: libclassrec.so


#	libraries creating

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -Wall -g -shared basicClassification.o advancedClassificationLoop.o -o libclassloops.so -lm

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -Wall -g -shared basicClassification.o advancedClassificationRecursion.o -o libclassrec.so


# for the object files
basicClassification.o: basicClassification.c
	gcc -Wall -g -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c
	gcc -Wall -g -c advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	gcc -Wall -g -c advancedClassificationRecursion.c -lm

main.o: main.c NumClass.h
	gcc -Wall -g -c main.c

clean:
	rm -f *.o *.a *.so mains maindrec maindloop
