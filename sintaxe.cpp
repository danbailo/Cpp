#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int N = 1<<20;
	for (int i = 0; i < N; ++i)
	{
	  printf("%d\n", i);
	}

	// printf("%i\n",N);

	return 0;
}