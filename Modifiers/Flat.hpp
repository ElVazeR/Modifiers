#pragma once


class Flat {
private:
	size_t number;
	size_t rooms;
	size_t floor;
public:
	Flat();
	Flat(size_t number, size_t rooms, size_t floor);
	Flat(const Flat& other);
	size_t getNumber()const;
	size_t getRooms()const;
	size_t getFloor()const;
};

