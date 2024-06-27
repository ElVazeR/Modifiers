#include "House.hpp"
#include <iostream>
House::House(): House("", 1, 1) {}

House::House(std::string street, size_t number, size_t floors) {
	this->street = street;
	this->number = number;
	this->floors = floors;
	this->flats_counter = 0;
	this->flats_array = nullptr;
}

House::~House() {
	delete[] flats_array;
}

void House::appFlat(size_t floor, size_t rooms) {
	Flat new_flat(++flats_counter, rooms, floor);

	if (flats_array == nullptr) {
		flats_array = new Flat[1];
		flats_array[0] = new_flat;
		return;
	}
	Flat* tmp = new Flat[flats_counter];
	for (size_t i = 0; i < flats_counter - 1; ++i) {
		tmp[i] = flats_array[i];
		tmp[flats_counter - 1] = new_flat;
		delete[] flats_array;
		flats_array = tmp;
	}

}
void House::printFlat(size_t index) const {
		std::cout << "Number: " <<flats_array[index].getNumber()  << std::endl;
		std::cout << "Rooms: " <<flats_array[index].getRooms()  << std::endl;
		std::cout << "Floor: " <<flats_array[index].getFloor()  << std::endl;
	}