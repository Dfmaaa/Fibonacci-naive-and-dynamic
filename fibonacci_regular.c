#include <stdio.h>
int fibonacci(int n){
	if(n<=2)return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(int argc, char **argv){
	printf("%d\n",fibonacci(atoi(argv[1])));
	return 0;
}
