#include <iostream>

using namespace std;

/**
 * Class containing the data for a single node in an expression tree
 * 
 * @param type - stores the type of the node, it can either be {0 : (operator), 1: (operand)}
 * @param operator_ - stores the operator, values can be {+, -, *, /}. Present only if type is 0
 * @param operand_ - stores the operand, the value is a non-negetive integers. Present only if type is 1
 * @param left - link to the left child of the node
 * @param right - link to the right child of the node
*/
class Node {
	/* Member variables */
private:
	int type;
	char operator_;
	unsigned int operand_;
	Node *left, *right;

public:
	/* Constructor definitions */
	Node(unsigned int operand) {
		type = 1;
		operand_ = operand;
		operator_ = 0;
		left = NULL;
		right = NULL;
	}

	Node(char op) {
		if (op == '+' || op == '-' || op == '*' || op == '/') {
			type = 0;
			operator_ = op;
			left = NULL;
			right = NULL;
		} else {
			throw invalid_argument("Invalid operator");
		}
	}

	/* Member functions to be implemented */
	virtual bool isOperator() = 0;
	virtual char getOperator() = 0;
	virtual unsigned int getOperand() = 0;
	virtual Node *getLeft() = 0;
	virtual Node *getRight() = 0;
	virtual void setLeft(Node *left_) = 0;
	virtual void setRight(Node *right_) = 0;
};