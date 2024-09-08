#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a positive number"<<endl;
	cin>>n;
	float sqrt=0;
	while(sqrt*sqrt<=n){
		sqrt=sqrt+1;

	}sqrt=sqrt-1;
	while(sqrt*sqrt<=n){
		sqrt=sqrt+0.1;
	}sqrt=sqrt-0.1;
	cout<<sqrt<<endl;
	return 0;


}


/*#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int squareRoot = 0;

	while (squareRoot * squareRoot <= n) {
		squareRoot = squareRoot + 1;
	}

	squareRoot = squareRoot - 1;

	cout << squareRoot << endl;

	return 0;
}*/