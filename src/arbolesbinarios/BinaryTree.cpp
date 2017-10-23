#include "BinaryTree.h"

BTree::BTree() {
	root = nullptr;
	leaves = 0;
}

BTree::BTree(int d) {
	Leaf *leaf = new Leaf(d);
	root = leaf;
	leaves = 1;
}

BTree::~BTree(){}

void BTree::insert(int d, Leaf *root) {
	if (!isEmpty()) {
		if (d < root->getData()) {
			if (!root->left) {
				root->left = new Leaf(d);
				leaves++;
			} else {
				insert(d, root->left);
			}
		} else {
			if (!root->rigth) {
				root->rigth = new Leaf(d);
				leaves++;
			} else {
				insert(d, root->rigth);
			}
		}
	} else {
		root = new Leaf(d);
		leaves = 1;
	}
}

void BTree::showLeaf(Leaf *root) {
	root->print();
}

int BTree::Heigth(Leaf *root) {
	if (isEmpty()) {
		return 0;
	} else {
		int a, b;
		if (!root->left && !root->rigth) {
			return 1;
		} else {
			a = Heigth(root->left);
			b = Heigth(root->rigth);
			if (a > b) return a + 1;
			else return b + 1;
		}
	}
}

bool BTree::isEmpty() {
	return leaves == 0;  
}

Leaf BTree::getRoot() {
	return *root;
}

void BTree::deleteLeaf(int d) {
}

int BTree::getLeaves() {

}		
