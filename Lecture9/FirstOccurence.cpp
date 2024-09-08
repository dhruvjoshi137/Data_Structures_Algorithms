// #include<iostream>
// using namespace std;
// int main() {
// 	int arr[] = {10, 20, 30, 10, 20};
// 	int n = sizeof(arr) / sizeof(int); //here , the sizeof(arr) is 4(int size)*5(no of elements in the array)=20 , and sizeof(int) is 4 , so 20/4=5 {the numbner of elements in the array}

// 	int t = 100; //t=target
// 	// time : O(n)
// 	int i;
// 	for (i = 0; i < n; i++) {
// 		if (arr[i] == t) {
// 			// you've found the 't' at index 'i'
// 			cout << i << endl;
// 			break;
// 		}
// 	}
// 	if (i == n) {
// 		cout << -1 << endl;
// 	}
// 	return 0;
// }


#include<iostream>
using namespace std;
int main(){
	int arr[]={34,40,44,50,54,60};
	int n= sizeof(arr)/sizeof(int);
	int t=34;
	int i;
	for(i=0; i<n;i++){
		if(arr[i]==t){
			cout<<"target found at "<<i<<endl;
			break;
		}
	}
	if(i==n){
		cout<<"target not found ";
		cout<<endl;
	}
	return 0;

}