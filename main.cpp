//  Name: Nadia Bravo Mas (101157878)
//  main.cpp
//  A3_TreeObjects
//
#include "TreeNode.h"
#include "Tree2400.h"
#include <iostream>
using namespace std;

int main() {
    
    TreeNode* p_testNode = new TreeNode(14);
    p_testNode->setids(13);
    cout << "The test tree node's values are: " << p_testNode -> getids() <<endl;
    
    TreeNode* newNode1 = new TreeNode(8); //New TreeNode object of id 8
    TreeNode* newNode2 = new TreeNode(10); //New TreeNode object of id 10
    TreeNode* newNode3 = new TreeNode(25); //New TreeNode object of id 25
    TreeNode* newNode4 = new TreeNode(15); //New TreeNode object of id 10
    newNode1 -> setchild1(newNode2);
    newNode1 -> setchild2(newNode2);
    newNode2 -> setchild1(newNode1);
    newNode2 -> setchild2(newNode1);
    newNode3 -> setchild1(newNode4);
    newNode3 -> setchild2(newNode4);
    newNode4 -> setchild1(newNode3);
    newNode4 -> setchild2(newNode3);
    
    bool isConnected(TreeNode* node1, TreeNode* node2);
    bool isChild(TreeNode* p_node1, TreeNode* p_node2);
    bool isLeafNode(TreeNode* p_node2);
    
    //The function output works, but for some reason i'm getting the address in memory and not the actual number :/
    cout << newNode1 -> getTxtInfo() << endl;
    cout << newNode2 -> getTxtInfo() << endl;
    cout << newNode3 -> getTxtInfo() << endl;
    cout << newNode4 -> getTxtInfo() << endl;
    
    cout << "isConnected function: "<< *isConnected <<endl;
    cout << "isChild function: "<< *isChild <<endl;
    cout << "isLeafNode function: "<< *isLeafNode <<endl;
    
    
    return 0;
}


