/*
 * File: 13.cpp
 * Desc: 对调一个三位数的百位和个位数 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	int m, n;
 	int a, b, c;
 	
 	cin >> m;
 	a = m / 100;
 	b = (m / 10) % 10;
 	c = m % 10;
 	n = 100 * c + 10 * b + a;
 	cout << "n = " << n << endl;
 	
 	return 0;
 }
