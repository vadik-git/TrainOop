#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car
{
	friend class Train;
private:
	
	size_t NumberPassenger=0;
	string nameCar;

public:
	Car() = default;

	Car(size_t number,string namecar):NumberPassenger(number),nameCar(namecar){}

	size_t getNumberPassenger() {
		return NumberPassenger;
	}
	string GetNameCar() {
		return nameCar;
	}
	
};


class Train {
	
private:
	size_t numberTrain = 0;
	Car*cars = nullptr;
	size_t sizeCars;
	string NameTrain;

public:
	Train() = default;
	Train(size_t numbertrain, size_t sizecars, string nametrain) :numberTrain(numbertrain), sizeCars(sizecars), NameTrain(nametrain){}
	Train(Train*train) {
		numberTrain = train->numberTrain;
		cars = train->cars;
		sizeCars = train->sizeCars;
		NameTrain = train->NameTrain;
	}
	size_t getNumberTrain() {
		return numberTrain;
	}
	size_t getSizeCars() {
		return sizeCars;
	}
	string setNameTrain() {
		return NameTrain;
	}
	void addCar();
	void addTrain();
	void showTrain();
	void sumPassengerCar();
	void minPassenger();
	void maxPassenger();
	~Train() {

		delete[]cars;
		cars = nullptr;
	}
};



