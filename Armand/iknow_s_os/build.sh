nasm -f elf32 kernel.asm -o kasm.o # compile the bootloader code with nasm
gcc -m32 -c kernel.c -o kc.o # compile the kernel written in c
ld -m elf_i386 -T link.ld -o iknow/boot/kernel.bin kasm.o kc.o # link the object
grub-mkrescue -o iknow.iso iknow/ # create an iso
qemu-system-x86_64 -boot d -cdrom iknow.iso # run the iso in qemu