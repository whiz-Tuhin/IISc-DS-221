using namespace std;

/**
 * Class to build a Binary tree and traverse it to find an element
 * 
 * @param tree - pointer to array that stores the elements of tree
 * @param size - total number of elements in tree
*/
class BTree{
    private:
    int* tree;
    int size;
    int getRightChild(int index); //optional
    int getLeftChild(int index); //optional
    public:
        //constructor
        BTree(int size_);
        int insert(int key);//insert lever order
        int FindByInOrderTraversal(int key);
        int FindByLevelOrderTraversal(int key);
        
};