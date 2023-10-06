#include <stdio.h>

// Function to perform bitwise AND operation
int bitwiseAND(int a, int b) {
    return a & b;
}

// Function to perform bitwise OR operation
int bitwiseOR(int a, int b) {
    return a | b;
}

// Function to perform bitwise XOR operation
int bitwiseXOR(int a, int b) {
    return a ^ b;
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform bitwise AND
    int resultAND = bitwiseAND(num1, num2);
    printf("Bitwise AND result: %d\n", resultAND);

    // Perform bitwise OR
    int resultOR = bitwiseOR(num1, num2);
    printf("Bitwise OR result: %d\n", resultOR);

    // Perform bitwise XOR
    int resultXOR = bitwiseXOR(num1, num2);
    printf("Bitwise XOR result: %d\n", resultXOR);

    return 0;
}
