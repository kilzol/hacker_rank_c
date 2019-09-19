#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{char s[100];
int j=0;
for(int i=0;i<3;i++){
scanf("%[^\n]%*c",&s);

while(s[j] != '\0'){
printf("%c",s[j]);
   j++; /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
}
printf("\n");
j=0;
}
return 0;
}

