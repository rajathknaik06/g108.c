/*Gayu is preparing for a mathematics competition and is studying the concept of Euler's Totient Function. To help her, you need to write a program that calculates Euler's Totient Function for a given set of positive integers.



Write a program to calculate the Euler's Totient Function for a given set of positive integers.



Function specification: int gcd (int a, int b) 

Input format :
The first line consists of an integer t, representing the number of test cases.

The second line consists of m space-separated positive integers for which Euler's Totient Function needs to be calculated.

Output format :
For each of the t test cases, the output displays an integer which is the value of Euler's Totient Function, separated by a space.*/

#include <stdio.h>   
int gcd(int a, int b)  
{  
    if (a == 0)  
        return b;  
    return gcd(b % a, a);  
}  
int phi(unsigned int n)  
{  
    unsigned int result = 1;  
    for (int i = 2; i < n; i++)  
        if (gcd(i, n) == 1)  
            result++;  
    return result;  
}  
int main()  
{  
    int m,s;
    scanf("%d",&m);
    for (int i=0; i<m; i++) {
        
        scanf("%d",&s);
        printf("%d\n",phi(s));
        
    }
    return 0;  
}  

