#! /bin/bash
echo "Updating your image..."
cp kernel ../bin/kernel.bin
cd ..
rm iso/boot/kernel.bin
cp bin/kernel.bin iso/boot/kernel.bin
echo "Executing grub-mkrescue..."
grub-mkrescue -o isobin/aplenite.iso iso

