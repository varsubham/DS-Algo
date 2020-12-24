#include<stdio.h>
#include<stdio.h>
char A[4];

/*
Code obtained from

http://www.studyalgorithms.com
*/

void binary(int n)
{
    if(n < 1)
        printf("%s\n",A);    // Assume A is a global variable
    else
    {
        A[n-1] = '0';
        binary(n-1);
        A[n-1] = '1';
        /*
        Feel free to copy but please acknowledge studyalgorithms.com
        */
        binary(n-1);
    }
}

int main(void)
{
	binary(5);
	return 0;
}