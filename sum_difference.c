#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int x,y;
float i,j;
    

int sumi=0;
int subi =0;
float sumf=0.0;
float subf=0.0;
scanf("%d %d",&x,&y);
scanf("%f %f",&i,&j);
sumi = x+y;
subi=x-y;
sumf=i+j;

subf=i-j;

printf("%d %d\n%0.1f %0.1f",sumi,subi,sumf,subf);
	
    
    return 0;
}


