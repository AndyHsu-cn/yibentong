/*
 * File: 12.cpp
 * Desc: 每个小朋友手上的糖果数 
 */
 #include <iostream>
 #include <cstdio>
 using namespace std;
 int main()
 {
 	int a, b, c, d, e;
 	
 	cin >> a >> b >> c >> d >> e;
 	a /= 3; e += a; b += a;
 	b /= 3; a += b; c += b;
 	c /= 3; b += c; d += c;
 	d /= 3; c += d; e += d;
 	e /= 3; d += e; a += e;
 	printf("%5d %5d %5d %5d %5d\n", a, b, c, d, e);
 	
 	return 0;
 }
