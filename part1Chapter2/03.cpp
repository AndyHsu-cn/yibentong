/*
 * File: 03.cpp
 * Desc: 小明买书还剩多少钱 
 */
 #include <iostream>
 #include <cstdio>
 using namespace std;
 int main()
 {
 	double n = 0, m = 0, c = 0, d = 0;
 	
 	cin >> n >> m;
 	c = m * 0.8;
 	d = n - c;
 	printf("%.2lf\n", d);
 	
 	return 0;
 }
