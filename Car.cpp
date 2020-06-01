#include "Car.h"
#include <iostream>
#include<list>

using namespace std;

void Train::addCar()
{
	cout << "Enter quanitu cars " << endl;
	cin >> sizeCars;
	cars = new Car[sizeCars+1];
	for (int i = 0; i < sizeCars; i++) {
		cout << "Enter name cars" << endl;
		cin >> cars[i].nameCar;
		cout << "Enter quanitu passenger" << endl;
		cin >> cars[i].NumberPassenger;
	}
}

void Train::addTrain()
{
	cout << "Enter name train" << endl;
	cin >> NameTrain;
	cout << "Enter number train" << endl;
	cin >> numberTrain;


}

void Train::showTrain()
{
	cout << "Name train >>" << NameTrain << endl;
	cout <<"Number train >>"<< numberTrain << endl;
	for (int i = 0; i < sizeCars; i++) {
		cout << "Name car >>" << cars[i].nameCar << endl;
		cout << "Quanitu passenger >>" << cars[i].NumberPassenger << endl;
	}
}

void Train::sumPassengerCar()
{
	int sum = 0;
	for (int i = 0; i < sizeCars; i++) {
		sum = cars[i].NumberPassenger + sum;
	}
	cout << "sum passenger of train >> " << sum << endl;
}

void Train::minPassenger()
{
	int min = 0;
	for (int i = 0; i < sizeCars; i++) {
		if (cars[min].getNumberPassenger() > cars[i].getNumberPassenger()) {
			min = i;
		}
	}
	cout << "min passenger car number >> " << min << endl;//Вертає індекс вагону тобто номер)
}

void Train::maxPassenger()
{
	int max = 0;
	for (int i = 0; i < sizeCars; i++) {
		if (cars[max].getNumberPassenger() < cars[i].getNumberPassenger()) {
			max = i;
		}
	}
	cout << "max passenger car number >> " << max << endl;//Вертає індекс вагону тобто номер)

}

