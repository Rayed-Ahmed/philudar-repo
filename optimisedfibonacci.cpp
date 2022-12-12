//#include <iostream>
//using namespace std;
//
//long  fib(int data) {
//	if (data <= 1) {
//		return data;
//	}
//	return fib(data - 1) + fib(data - 2);
//}
//
//long fib1(int data) {
//	int arr[150];
//	arr[0] = 0;
//	arr[1] = 1;
//	int i = 2;
//
//	while (i <= data) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//		i++;
//	}
//	return arr[i - 1];
//}
//
//
//int main() {
//	cout << fib1(100)<<endl;
//	cout << endl;
//	cout << fib(100)<<endl;
//	return 0;
//}