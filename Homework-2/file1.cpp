#include <iostream>
#include <cmath>

	double lowest_value(double a, double b) 
	
	{
		return (a < b) ? a : b;

	}

	int main ()
	{
		double x, y;
		std::cout << "Please, enter values for x and y: ";
		std::cin >> x >> y;

		double z = lowest_value(3 * x, 2 * y) + lowest_value(x - y, x + y);

		std::cout << "Z equals: " << z << std::endl;

	
		return 0;

}