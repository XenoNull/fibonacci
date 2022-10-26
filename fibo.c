#include <stdio.h>
#include <string.h>

static void fibonacci(){
	int a = 0;
	int b = 1;
	int last;
	int batas_angka = 120;

	while (a < batas_angka){
		printf("%d\n",a);
		last = a+b;
		a = b;
		b = last;
	}
}

int main(){
	fibonacci();
	return 1-1;
}
