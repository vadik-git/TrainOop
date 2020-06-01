#include"Car.h"
#include<iostream>
#include<string>
using namespace std;




int main() {
	Train train1;
	train1.addTrain();
	cout << endl;
	cout << endl;
	train1.addCar();
	cout << endl;
	cout << endl;
	train1.showTrain();
	cout << endl;
	cout << endl;
	train1.sumPassengerCar();
	cout << endl;
	cout << endl;
	train1.minPassenger();
	cout << endl;
	cout << endl;
	train1.maxPassenger();

	
	system("pause");
	return 0;
}