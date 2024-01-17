/*
 Write a C program to swap two numbers using pointers and functions. How to swap two numbers using call by reference method. Logic to swap two number using pointers in C program.
 */
/*
 EXAMPLE OUTPUT:
 
    Enter two numbers: 10 20
    Before swapping in main
    Value of num1 = 10
    Value of num2 = 20

    After swapping in swap function
    Value of num1 = 20
    Value of num2 = 10

    
 */

#include <stdio.h>
#include <stdlib.h>

void swapOperation(float * num1, float * num2);

int main(void){
    
    // Variable Decleration(s).
    
    float number1, number2, temp; //normal values
    
    
    //Executable statement(s)
    
    printf("Enter two numbers: \n");
    scanf("%f%f", &number1,&number2);
    
    //printing before the change
   
    printf("Number1 before the change = %.2f\n",number1);
    printf("Number2 before the change = %.2f\n",number2);
    
    
    //change operation
    
    temp = number1;
    number1 = number2;
    number2 = temp;
    
    //printing the after the change in main
    
    printf("Number1 after the change = %.2f\n",number1);
    printf("Number2 after the change = %.2f\n",number2);
 
    //function call and printing
    
    swapOperation(&number1, &number2);
    
    return 0;
}

void swapOperation(float * num1, float * num2){
    
    //change operation
    float temp=0.0;
    
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
    //printing the numbers after the change
    
    printf("Number1 after the change with the function = %.2f\n", *num1);
    printf("Number2 after the change with the function = %.2f\n", *num2);
    
    
}
