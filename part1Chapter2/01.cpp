/*
 * File: 01.cpp
 * Desc: 交换两个整数 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	int a, b, c;
 	
 	cin >> a >> b;
 	cout << "a = " << a << " b = " << b << endl;
 	c = a;
 	a = b;
 	b = c;
 	cout << "a = " << a << " b = " << b << endl;
 	
 	return 0;
 }
