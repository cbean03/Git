#include <iostream>
using namespace std;

class JulianDate{
public:

};





int main(){
	JulianDate d1(2015, 1, 1); //what time?
	JulianDate d2(2015, 10, 2, 13, 34, 00);
	JulianDate d3(2016, 1, 1);

	double days = d3 - d2;

	JulianDate d4 = d3 +1;
	JulianDate d5 = d3 + 59;
	int w = d5.getWeekday();
	int m = d5.getMonth();
	int y = d5.getYear();

	
}