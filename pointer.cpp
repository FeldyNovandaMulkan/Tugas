#include <stdio.h>

main(){
	int ardi = 43;     // Variable declaration
	int* pointerFeldy = &ardi;  // Pointer declaration

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
	printf("%p\n", &ardi);
	printf("%p\n", pointerFeldy);
	printf("%p\n", &pointerFeldy);

// Dereference: Output the value of myAge with the pointer (43)
	printf("%d\n", ardi);
	printf("%d\n", *pointerFeldy);
}
