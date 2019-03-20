CFLAGS+=-no-pie
OBJS=sumar sumard printear supersuma

all: $(OBJS)

sumar: sumar.c sumar_asm.o
sumard: sumard.c sumard_asm.o
printear: printear.c printear_asm.o
supersuma: supersuma.c supersuma_asm.o

%_asm.o: %.asm
	nasm -f elf64 $< -o $@

clean:
	rm -f *.o $(OBJS)
