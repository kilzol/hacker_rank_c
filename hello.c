#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    int i=0;
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    while(s[i]!='\0'){
  	printf("%c",s[i]);
      i++;
    }
     
    return 0;
}

