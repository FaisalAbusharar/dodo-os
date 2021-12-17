# Dodo OS

why did i make this os?
idk im bored and i wanted to learn alot of new stuff.
so i decided to make dodo os.
i will see for how far i will go in this so i can learn as much as possible.
this is not for the public and for users, only for me personally.
if you want to run it, then go ahead, but you need to know how to use docker and qemu and other things listed to run it properly
feel free to check out the code if you would like.

## what is being used?

[Docker](https://www.docker.com/)

[QEMU](https://www.qemu.org/)

[GCC CROSS-x86-64-elf](https://hub.docker.com/r/randomdude/gcc-cross-x86_64-elf)

[NASM, XORRISO, GRUB]

## To run:

(Note setup is required, this is only for me and people who are expirenced with this, this os is for learning for me only)

`docker run --rm -it -v "%cd%":/root/env dodo-os-buildenv`

`make build-x86_64` | run this inside the docker repo

`qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`
