/*
 * File: 04.cpp
 * Desc: 变量自加运算 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	int x = 7, y = 8;
 	int z1, z2;
 	
 	z1 = y - (x++);
 	x = 7;
 	z2 = y - (++x);
 	cout << "z1 = " << z1 << " z2 = " << z2 << endl;
 	
 	return 0;
 }
