// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "DemoTest.h"

using namespace std;

int main()
{
	DemoTest test;
	int d= test.add(10, 20);
	cout << d;
	return 0;
}

