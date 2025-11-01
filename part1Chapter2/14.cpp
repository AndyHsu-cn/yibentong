/*
 * File: 14.cpp
 * Desc: 求全班的平均分 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	int x, y;
 	
 	cin >> x >> y;
 	cout << (float)(x * 87 + y * 85) / (x + y) << endl;
 	
 	return 0;
 }
