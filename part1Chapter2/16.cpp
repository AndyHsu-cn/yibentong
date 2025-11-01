/*
 * File: 16.cpp
 * Desc: 海伦公式求三角形的面积 
 */
 #include <iostream>
 #include <cstdio>
 #include <cmath>
 using namespace std;
 int main()
 {
 	float a, b, c;
 	float p, s;
 	
 	scanf("%f %f %f", &a, &b, &c);
 	p = (a + b + c) / 2;
 	s = sqrt(p * (p - a) * (p - b) * (p -c));
 	printf("%.3f\n", s);
 	
 	return 0;
 }
