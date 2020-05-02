#if 0


----------------------------------------------------------------
NORMAL WAY

Normal array  ---->       int p[10] = {1,2};
p is the base pointer of the array - array is just some continous memory locations

int *a = p;

*(a+1) = 10;
what happens here is 1st position value of array p is now 10
THIS IS FIX LENGTH
---------------------------------------------------------------
 
DYNAMIC MEMORY ALLOCATION

Here we don't have to declare the array at compile time at all
______________________________________________________________

int *p;  <-------- this is it
how many values the user want to use, we get the value to a variable n
__________________
| STACK          |      stack is used for local variable
|________________|
|                |      malloc/calloc allocates the memory form the heap section
|    HEAP        |
|________________|
|                |
|DATA SECTION    |
|________________|
|                |
|                |
| CODE SECTION   |
|________________|

scanf("%d", &n);

int is 4 bytes

p = malloc(n*sizeof(int)) ----> NOT CORRECT explained below

this gives a void* type so we have to type cast malloc



if n = 10 malloc allocates 40 bytes of memory in heap and 
the starting address of this memory is given to the p as the arrays base addres.

return type of malloc is void*

if you declare a pointer as a void pointer then void *X 
it's valid for anytype since any way it is an address type unsigned int

IN VOID pointer dereferncing cannot be done. since it can be any of the type
malloc is just returning you the base address. it returns the 


p = (int*)malloc*(n*sizeof(int));

now we can dereference
*p and give some value to the base address and *(p +1) this is equal to p[1]
and so and so this is as good as array
if you want to give some value from scanf("%d", p+1);
p+1 is the address

#endif

#if 0
CALLOC

calloc requires 2 inputs
same this
int *a;
int*p = a;

IF n =10
p = (int*)calloc(n, sizeof(int));


how many elements - n
size of each element - sizeof(int)
calloc will by default initialize the values = 0, malloc doesn't do that


if we want more values in array then realloc can be used


realloc(p+10,sizeof(int)* 5)
free(p) <-------- will deallocate the memory

realloc requires the address from where you want to allocate the memory
sizeof(int) into 5


Dynamically allocating memory is allocating memry at runtime not compile time

#endif