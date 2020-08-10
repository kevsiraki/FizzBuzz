#include <stdio.h>

void FizzBuzz(int);

int main() {
	FizzBuzz(100);
	return 0;
}

void FizzBuzz(int i) {
	if(i==0) return;
	else {
		FizzBuzz(i-1);
		if(i%3==0&&i%5==0) printf("%s\n","FizzBuzz");
		else if(i%3==0) printf("%s\n","Fizz");
		else if(i%5==0) printf("%s\n","Buzz");
		else printf("%d\n",i);
	}
}
