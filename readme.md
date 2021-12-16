Write Your Own 64-bit Operating System Kernel From Scratch
This respository holds all the source code for this YouTube tutorial series.
Im using DOCKER

IMPORTANT FOR ME:

docker run --rm -it -v "%cd%":/root/env dodo-os-buildenv
qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso
