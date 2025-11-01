/*
 * File: 11.cpp
 * Desc: 利用putchar函数输出字符 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
	char c = 'B';
	
	putchar(c);
	putchar('\x42');
	putchar(0x42);
	putchar(66); 
 	
 	return 0;
 }
