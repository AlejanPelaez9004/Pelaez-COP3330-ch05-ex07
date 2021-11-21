/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alejandro Pelaez
 */
#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter three numbers for the quadratic formula: ";

	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b == 0)
			cout << "no root";
		else
			cout << "x equals " << -c / b;
	}
	else if (b == 0) 
	{
		double ca = -c / a;
		if (ca == 0)
			cout << "x equals 0";
		else if (ca < 0)
			cout << "no roots";
		else
			cout << "two roots: " << sqrt(ca) << " and " << -sqrt(ca);
	}
	else //c
	{	
		double sq = b * b - 4 * a * c;
		if (sq == 0)
			cout << "one root: " << -b / (2 * a);
		else if (sq < 0)
			cout << "no roots";
		else
			cout << "two roots: " << (-b + sqrt(sq)) / (2 * a) << " and " << (-b - sqrt(sq)) / (2 * a);
	}
}