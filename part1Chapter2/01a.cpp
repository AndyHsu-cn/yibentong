/*
 * File: 01a.cpp
 * Desc: 交换两个整数第二种方法 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	int a, b;
 	
 	cin >> a >> b;
 	cout << "a = " << a << " b = " << b << endl;
 	a = a + b;
 	b = a - b;
 	a = a - b;
 	cout << "a = " << a << " b = " << b << endl;
 	
 	return 0;
 }
