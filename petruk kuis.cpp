#include <iostream>
using namespace std;

//NPM : 2217051140

int kali(int y,int x){
	if (y == 0){
		return 0;
	}
	else {
		return x + kali (x , y-1);
	}
}

int main(){
	int y = 0, x = 4;
	cout<<kali(y,x);
}
