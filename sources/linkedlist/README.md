# How to create a shared C library

## First,
compile library source with:
`gcc -c -fPIC libaryName.c -o libraryName.o`

## Second,
compile object file to SO file:
`gcc libraryName.o -shared -o liblibaryName.so`

## Third,
copy file (or move) to the `clibs` library folder:
`cp liblibaryName.so /home/user/clibs/lib`

### Fourth,
Ensure correct `$LD_LIBRARY_PATH` to include `clibs`:
(in .bashrc)
`export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/user/clibs/lib`
don't forget to do: `source .bashrc`
Now, do: `sudo ldconfig`

### Fifth,
If everything went OK, you can compile your program with:
`gcc -o progName -llibraryName progsource.c`

Your program source must add the libary header file: `libraryName.h`
the "-l" command allows no space after it, and you drop the "lib" and the ".so"
off of the `liblibraryName.so` file.
