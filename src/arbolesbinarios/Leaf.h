#pragma once
class Leaf {
private:
	int data;
public:
	Leaf *rigth;
	Leaf *left;

	Leaf();
	Leaf(int d);
	~Leaf();
	void print();
	int getData();
	void setData(int d);
};
