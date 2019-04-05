// Author:                      Manuel Ponce
// Assignment Number:           Lab 5
// File Name:                   Lab5_ManuelPonceDriver.cpp
// Course/Section:              COSC 2436 Section 52936
//Instructor: 					Bernard Ku
// Date:                        11/14/2017
#include <iostream>
using namespace std;

#include "BST.h"

int main()
{
    // Testing Constructor and empty()
    BST<int> intBST;            // test the class constructor
    cout << "Constructing empty BST\n";
    cout << "\n\nThe height of the tree is: " << intBST.getHeight() << endl; //to Display the height
	cout << "The # of nodes in the tree is: " << intBST.getNumberOfNodes() << endl; //to Display the nodes
	cout << "The # of Leaves in the tree is: " << intBST.getNumberOfLeaves() << endl; //to Display the height
    cout << "BST " << (intBST.isEmpty() ? "is" : "is not") << " empty\n";


    
    // Testing inorder
    cout << "\nInorder Traversal of BST: \n";
    intBST.inorder(cout);
    
    // Testing insert
    cout << "\nNow insert a bunch of integers into the BST."
    "\nTry items not in the BST and some that are in it:\n";
    int number;
    for (;;)
    {
        cout << "\nItem to insert (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        intBST.add(number);
	    cout << "\n\nThe height of the tree is: " << intBST.getHeight() << endl; //to Display the height
	    cout << "The # of nodes in the tree is: " << intBST.getNumberOfNodes() << endl; //to Display the nodes
	    cout << "The # of Leaves in the tree is: " << intBST.getNumberOfLeaves() << endl; //to Display the height
    }
//    cout << "\n\nThe height of the tree is: " << intBST.getHeight() << endl; //to Display the height
//    cout << "The # of nodes in the tree is: " << intBST.getNumberOfNodes() << endl; //to Display the nodes
//    cout << "The # of Leaves in the tree is: " << intBST.getNumberOfLeaves() << endl; //to Display the height
    cout << "\n";
    intBST.graph(cout);
    
    cout << "\nBST " << (intBST.isEmpty() ? "is" : "is not") << " empty\n";
    cout << "\nInorder Traversal of BST: \n";
    intBST.inorder(cout);
    cout << endl;
    
	cout << "\npre order Traversal of BST: \n";
    intBST.preOrder(cout);
    cout << endl;
    
    cout << "\npost order Traversal of BST: \n";
    intBST.postOrder(cout);
    cout << endl;
    
    cout << endl;
    
    // Testing search()
    cout << "\n\nNow testing the contains() operation."
    "\nTry both items in the BST and some not in it:\n";
    for (;;)
    {
        cout << "Item to find (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        cout << (intBST.contains(number) ? "Found" : "Not found") << endl;
    }
    
    // Testing remove()
    cout << "\nNow testing the remove() operation."
    "\nTry both items in the BST and some not in it:\n";
    for (;;)
    {
        cout << "\nItem to remove (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        intBST.remove(number);
        intBST.graph(cout);
    	cout << "\n\nThe height of the tree is: " << intBST.getHeight() << endl; //to Display the height
		cout << "The # of nodes in the tree is: " << intBST.getNumberOfNodes() << endl; //to Display the nodes
		cout << "The # of Leaves in the tree is: " << intBST.getNumberOfLeaves() << endl; //to Display the height
    }
    
    cout << "\nInorder Traversal of BST: \n";
    intBST.inorder(cout);
    cout << endl;
    
    cout << "\npre order Traversal of BST: \n";
    intBST.preOrder(cout);
    cout << endl;
    
    cout << "\npost order Traversal of BST: \n";
    intBST.postOrder(cout);
    cout << endl;
    
}
