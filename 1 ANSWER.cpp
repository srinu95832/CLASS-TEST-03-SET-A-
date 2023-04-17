#include <stdio.h>

int reverse(int num);
int fibonacci(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Reverse the number
    printf("Reverse of %d is %d\n", num, reverse(num));
    
    // Print the Fibonacci series of the number
    printf("Fibonacci series of %d is: ", num);
    for(int i=0; i<num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}

// Function to reverse a number
int reverse(int num)
{
    int reversed_num = 0;
    while(num != 0)
    {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    return reversed_num;
}

// Function to find the nth number in the Fibonacci series
int fibonacci(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}
