#include <iostream>
using namespace std;

void FizzBuzz(int);

int main() {
	FizzBuzz(100);
	return 0;
}

void FizzBuzz(int i) {
	if(i==0) return;
	else {
		FizzBuzz(i-1);
		if(i%3==0&&i%5==0) cout<<"FizzBuzz"<<endl;
		else if(i%3==0) cout<<"Fizz"<<endl;
		else if(i%5==0) cout<<"Buzz"<<endl;
		else cout<<i<<endl;
	}
}
