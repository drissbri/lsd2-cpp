#include "EX2.h"

int main(int argc, char const *argv[])
{
	Triangle T;
	T.width = 5;
	T.height = 10;
	Rectangle R;
	R.width = 10;
	R.height = 10;
	std::cout << "triangle area : " << T.area() << std::endl;
	std::cout << "rectangle area :" << R.area() << std::endl;
	return 0;
}