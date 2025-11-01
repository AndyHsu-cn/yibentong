/*
 * File: 05.cpp
 * Desc: 计算圆的直径、周长和面积 
 */
 #include <cstdio>
 #include <iostream>
 using namespace std;
 const double PI = 3.14159;
 int main()
 {
 	double r, d, c, s;
 	
 	scanf("%lf", &r);
 	d = 2 * r;
 	c = 2 * PI * r;
 	s = PI * r * r;
 	printf("%.4lf %.4lf %.4lf\n", d, c, s);
 	
 	return 0;
 }
