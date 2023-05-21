#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 1x1

int main(){
int a,b,c;

	a=1;
	while(a<=10){
	
		b=1;	
		while(b<=10){
			c=a*b;
			printf("%1i * %2i = %3i \n",a,b,c);
			b++;
		}	
		a++;
	}

	return 0;
}

