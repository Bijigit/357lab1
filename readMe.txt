4)
    a)
        char c = 'c';
        char *cp = &c;
    b)
        char c[] = "An array of chars";
        char *ap = c;
    c)
        int num = 5;
        int *ip = &num;
        int **pp = &ip;
    
    Each pointer holds the address of a value somewhere else.  To access the actual values you would have to dereferene the pointer.

5)
    Yes, a pointer can point to itself.
    int *a;
    a = (int *)&a;

6) 
    In the condition in the for loop, the pointer needs to be dereferenced to refer to the character at location p instead of the address of the character held in p.

7) 
    The name of the array acts as a pointer to the first element of the array, and the [] operators can be used on both to get the values at an offset in memory.  An array is 
    conceptually different than a pointer.  An array is a bunch of values stored next to each other, while a pointer is a single address stored in a single variable.  A pointer only has one element, itself, while an array has 
    multiple elements which are considered part of the array.