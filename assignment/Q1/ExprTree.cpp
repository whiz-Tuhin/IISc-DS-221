#include <iostream>
#include <stack>
#include <string>
#include <cstddef>
#include <limits>

using namespace std;

/**
 * Class for node 
*/
class ExprNode {
private:
	int type;
	char operator_;
	unsigned int operand_;
	ExprNode *left, *right;

public:
	/* Constructor definitions */
	ExprNode(unsigned int operand) {
		type = 1;
		operand_ = operand;
		operator_ = 0;
		left = NULL;
		right = NULL;
	}

	ExprNode(char op) {
		if (op == '+' || op == '-' || op == '*' || op == '/') {
			type = 0;
			operator_ = op;
			left = NULL;
			right = NULL;
		} else {
			throw invalid_argument("Invalid operator");
		}
	}

public:
	/* validates an operator */
	bool isOperator() {
		/* Implement your logic here */
	}

	/* get operator value */
	char getOperator() {
		/* Implement your logic here */
	}

	/* get operand value */
	unsigned int getOperand() {
		/* Implement your logic here */
	}

	/* get left child */
	ExprNode* getLeft() {
		/* Implement your logic here */
		return left;
	}

	/* get right child */
	ExprNode* getRight() {
		/* Implement your logic here */
		return right;
	}

	/* set left child */
	void setLeft(ExprNode* left) {
		/* Implement your logic here */
		this->left =left;
	}

	/* set right child */
	void setRight(ExprNode* right) {
		/* Implement your logic here */
		this->right = right;
	}
};

/**
 * Function to construct infix tree from expression
 * 
 * @param exp - string expression for which tree is to be constructed
 * @return node - returns 
*/
ExprNode* buildInfixTree(string exp) {
	ExprNode* root;

	/* Implement your logic here */

	return root;
}

/**
 * Function to print pre order traversal for infix expression tree
 * 
 * @param root - reference to the root of the infix tree
 * @returns - resultant expression after pre order traversal
*/
string printPreOrderTraversal(ExprNode* root) {
	string result;

	/* Implement your logic here */

	return result;
}

/**
 * Function to evaluate the expression tree using stacks
 * 
 * @param root - reference to the root of the infix tree
 * @returns - result after expression is evaluated
*/
int evaluate(ExprNode* root) {
	int result;

	/* Implement your logic here */

	return result;
}

int getIntMin() {
	return numeric_limits<int>::min();
}

/**
 * Checks whether a given 
 * expression is a valid mathematical expression
 * 
 * @param exp - expression string to be validated
*/
bool isValid(string exp) {
	/* Initialising stack */
	stack<char> st;
	bool result;

	/* Implement your logic here */

	return result;
}

/**
 * Function to print output to console
 * @param result - result from the function
 */
void printResultA(bool result) {
	cout << "Q1a:" << (result ? "true" : "false") << endl;
}

/**
 * Function to print output to console
 * @param result - expression from the pre order traversal
 */
void printResultB(string result) {
	cout << "Q1b:" << result << endl;
}

/**
 * Function to print output to console
 * @param result - result after evaluation of expression
 */
void printResultC(int result) {
	cout << "Q1c:" << result << endl;
}

int main() {
	/* Expression string */
	string exp;

	/* Input taken from console */
	cout << "Enter expression: ";
	getline(cin, exp);

	/**
     * QUESTION 1 - PART A
     * 
     * Check if the given expression is a valid mathematical expression
    */

	/* Validate expression */
	bool check = isValid(exp);

	/* Printing result to console */
	printResultA(check);

	/**
     * QUESTION 1 - PART B
     * 
     * Build an infix expession tree for the given expression and
     * print the result of a pre order traversal on the expression tree
     * 
     * Root : must be an operator
     * Left-subtree: sub expression
     * Right-subtree: sub expression
     * Leaves: integer operands
     * 
    */

	/* Construct infix expression tree */
	ExprNode *root = buildInfixTree(exp);

	/* Print pre order traversal */
	string preOrderResult = printPreOrderTraversal(root);

	/* Printing result to console */
	printResultB(preOrderResult);

	/**
     * QUESTION 1 - PART C
     * 
     * Check if the given expression is a valid mathematical expression
    */

	/* Evaluate infix expression tree */
	int result = evaluate(root);

	/* Printing result to console */
	printResultC(result);

	return 0;
}