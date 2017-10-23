#include "Leaf.h"
#include <iostream>

Leaf::Leaf() {
	left = rigth = nullptr;
	data = 0;
}

Leaf::Leaf(int d) {
	rigth = left = nullptr;
	data = d;
}

Leaf::~Leaf(){}

void Leaf::print() {
	std::cout << " " << data << "";
}

int Leaf::getData() {
	return data;
}

void Leaf::setData(int d) {
	data = d;
}
