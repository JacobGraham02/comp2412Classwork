#include <string>

struct Node {
	int id;
	std::string name;
	double mark;
	Node* left;
	Node* right;
};

class BST {
	Node* root;

public:
	BST();
	~BST();
	Node* insert(int, std::string, double, Node*);
	void printInOrder(Node*);
	Node* makeEmpty(Node*);

	void insert(Node* t) {
		root = insert(t->id, t->name, t->mark, root);
	}
};
