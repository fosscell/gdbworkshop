Reasons behind a "core dump"
----------------------------

1) Dereferencing a pointer which has been assigned NULL

	Example code snippet:

		char *a = NULL;
		printf("String = %s",a);

2) Dereferencing a pointer whose memoery has been freed

	Example code snippet:
		
		char *a;
		a = malloc(sizeof(char));
		free(a);
		printf("String = %s",a);

3) Assigning value to a pointer without allocating memory

	Example code snippet:

		char *buf;
		fgets(buf, 1024, stdin);
		printf("%s\n", buf);

4) Other erraneous access of memory

	Examples:

		Writing to an an array at a point beyond its memory limit
	
		A Recursive function that uses up all of the stack space assigned to it's program
		
				
