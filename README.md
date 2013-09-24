gdbworkshop
===========


Compiling a program

	Use the -g flag while compiling a program to include debugging information in the executable.
	
	Example :
	
	gcc -g prime.c
		Compile the prime.c file along with debugging info that will be used by gdb.
	
	
Starting a debugging session

	Run "gdb <executable_file_name>" to start debugging the executable
	
	Example :
	
	gdb a.out
		Open the a.out executable in the gdb debugger

gdb commands
------------

run - Use the run command to run the program
	
	Example :
	
	(gdb) run
		Run the program
		
	(gdb) run 10 20
		Run the program with command line arguments 10 and 20
	
	
break - Used to set breakpoints based on line number or function

	Example :
	
	(gdb) break 6
		set a breakpoint on line no.6 of the source file of the currently executing program
		
	(gdb) break prime.c:6
		set a breakpoint on line no.6 of the source file prime.c (used when program has multiple source files)
		
	(gdb) break my_func
		break when the my_func function is called
		
	(gdb) break my_func if i > 5
		break when the my_func function is called and then value of i is greater than 5
		
		
watch - Used to set watchpoints on variables

	Example :
	
	(gdb) watch i
		set a watchpoint on variable i
		

print - Used to print the value of variables

	(gdb) print i
		print the value of the variable i
	
	(gdb) print *ptr
		print the value pointed to by ptr (if ptr is a pointer)
		
set - Used to set values for variables

	(gdb) set i = 10
		set the value of the variable i to 10



list - print source code surrounding the current line
		
continue - continue executing after hitting a breakpoint or watchpoint

finish - run till end of function and return to caller
		
kill - kill the currently executing program

backtrace - print a stacktrace after the program has crashed

frame - switch between stack frames

