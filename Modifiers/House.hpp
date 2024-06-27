#pragma once
#include <string>
#include "flat.hpp"

class House {
private: 
	std::string street;
	size_t number;
	size_t floors;
	size_t flats_counter;
	Flat* flats_array;
public:
	House();
	House(std::string street, size_t number, size_t floors);
	~House();
	void appFlat(size_t floor, size_t rooms);
	void printFlat(size_t index)const;
};

