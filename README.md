![](rsc/img/libft_Dr.gif)
# Libft

A C library is a set of named functions, for example dbinit() or SQLConnect(). Or, for that matter, fopen(3)[1].

### I.	SCOPE

In a general sense libft is collections of precompiled functions that have been written to be reused for your upcoming projects.

###	II.	REQUIREMENTS

* libft
* libft.a
* libft.h


###	III.	DEFINITIONS AND ACRONYMS

- Static libraries

Static libraries (also known as archives) have been around as long as C itself. Like a .zip file, they're just a bag of object files — containing functions, of course — with a table of contents in front giving the address of each name[2]. Static libraries are created from object files using a librarian utility of some kind. One such programs is ar, for archive.

- Dynamic libraries

Dynamic libraries are the new kid on the block, as these things go, arriving on the Unix scene circa 1985. Like a static library, a dynamic library is a collection of functions with a table of contents. They are referenced at build time to give the executatble information about how they will eventually be used, but they aren't used until run time.



####	Definitions:


###	Returning values:


###	IV.	PROJECT SPECIFIC INFORMATION

###	V.	PROCEDURE

##### Compilation:

`make all` | First time compilation.

`make fclean` | Delete files generated from compilation.

`make re` | Delete files generated from compilation and recompile.

### Execution:

`gcc main.c libft.a libft.h ./a.out` | Compile a main with the library, and then run the program.

###		Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
