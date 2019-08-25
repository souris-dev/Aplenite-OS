Aplenite-OS
===========

Aplenite OS is a hobby 32-bit OS written in C and NASM. Currently, it features only a CLI. A VFS and user mode might be added.
Very good for learning, as it is heavily commented.

*Note : Aplenite can only print "Hello World!" right now.*

Building
-----------
1. Copy all the files in the `inc` and `build` directories to the `src` directory.
1. Ensure that you are inside  the `src` directory.
2. Run `make clean`.
3. Run `make`.

The kernel binary image will be built.
***Please ignore any errors. Build on a Linux machine. Build not tested on Windows machines.***

References
----------------
- [www.jamesmolly.co.uk](www.jamesmolly.co.uk) - Good OS development tutorials for getting started.
- [wiki.osdev.org](http://wiki.osdev.org) - A good OS development forum cum tutorial site.

License
----------------
Please see the LICENSE file for the GNU GPL v2 License.
