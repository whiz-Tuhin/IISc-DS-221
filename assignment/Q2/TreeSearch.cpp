#include <queue>
#include <stack>
#include "TreeSearch.h"
#include <iostream>
#include <fstream>
using namespace std;



/**
 * Constructor to instantiate the array
 * @param size_ - number elements in tree
 */
BTree::BTree(int size_){
    
}

/**
 * Function to insert an element into the tree in level order
 * @param key - element to be inserted
 */
int BTree::insert(int key){
    //insert levelorder into binary tree
    
}

/**
 * Function to get right child of a node given an index of node in the tree
 * @param index - index of parent node
 */
int BTree::getRightChild(int index)
{
    //optional
}

/**
 * Function to get left child of a node given an index of node in the tree
 * @param index - index of parent node
 */
int BTree::getLeftChild(int index)
{
    //optional
}

/**
 * Function to find the key by performing a inorder order traversal of the tree
 * @param key - key to be searched for in the tree
 */
int BTree::FindByInOrderTraversal(int key){
    
}

/**
 * Function to find the key by performing a level order traversal of the tree
 * @param key - key to be searched for in the tree
 */
int BTree::FindByLevelOrderTraversal(int key){
   
}

int main(){
    //read from file using the file name passed in as inputs

    //insert each element read into the tree


    //measure the time taken for search individually for inorder and level-order


    //output in the format "Q2a:123,456,789" where 123<= number of elements in tree, it corresponds to number of items successfully found in the tree, 
    //456 is the time taken in milliseconds to complete this search using inorder traversal, and 789 is the time taken in milliseconds to complete this search using level-order traversal.
    
}