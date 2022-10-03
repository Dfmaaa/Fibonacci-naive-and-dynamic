#include <stdio.h>
int fibonacci(int n)
{
  int f[n+2];
  int i;
  f[0] = 0;
  f[1] = 1;
 	for (i = 2; i <= n; i++){
      f[i] = f[i-1] + f[i-2]; //using previous fibonacci outputs.
  }
  return f[n];
}
int main(int argc, char **argv){
	printf("%d\n",fibonacci(atoi(argv[1])));
	return 0;
}
