#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int min(int a, int b)
    {
        if(a>b)
        return b;
        else 
        return a;
    }
int max = n+(n-1);
for(int i=0;i<max;i++)
{
 for(int j=0;j<max;j++)
 {
int x = min(i,j);
x= min(x,max-i-1);
x= min(x,max-j-1);
printf("%d ",n-x);

 }
 printf("\n");

}
  	// Complete the code to print the pattern.
    return 0;
}
