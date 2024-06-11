//  Name: Nadia Bravo Mas (101157878)
//  TreeNode.cpp
//  A3_TreeObjects
//

#include "TreeNode.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


//Getters
int TreeNode::getids()
{
    return ids;
}

TreeNode* TreeNode::getchild1()
{
    return child1;
}

TreeNode* TreeNode::getchild2()
{
    return child2;
}

//Setters
void TreeNode::setids(int myID_2)
{
        ids = myID_2;
}

void TreeNode::setchild1(TreeNode* ch1)
{
    if (child1 == NULL)
    {
        child1 = ch1;
    }
}

void TreeNode::setchild2(TreeNode* ch2)
{
    if (child2 == NULL)
    {
        child2 = ch2;
    }
}

//Constructor
TreeNode::TreeNode(unsigned int myID)
{
    cout <<"The ids' value is: " << myID <<endl;
    setids(myID);
    this->child1 = NULL;
    this->child2 = NULL;
}

//Destructor
TreeNode::~TreeNode()
{
    TreeNode* node = nullptr;
    
    if (node -> child1 || node -> child2)
    {
        delete[] child1;
        *child1 = NULL;
        *child2 = NULL;
    }
    
}

bool TreeNode::isConnected(TreeNode* node1, TreeNode* node2)
{
    
    if (node1 == NULL)
    {
        return false;
    }
    else if (node2 == NULL)
    {
        return ((node1->child1 == node2) || (node1->child2 == node2));
    }
    else if (node1 == node2)
    {
        return true;
    }
    return false;
}

bool TreeNode::isChild(TreeNode* p_node1, TreeNode* p_node2)
{
    if ((p_node1 ->child1) && (p_node1->child1->ids == p_node2 -> ids))
    {
        return true;
    }
    else if ((p_node1 ->child2) && (p_node1->child2->ids == p_node2->ids))
    {
    return true;
    }
    return false;
}

bool TreeNode::isLeafNode(TreeNode* p_node2)
{
    if (p_node2 -> child1 == NULL && p_node2 -> child2 == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string TreeNode::getTxtInfo()
{
    //Convert from int to string
    stringstream idStr;
    idStr << getids();
    string retStr;
    idStr >> retStr;
    
    stringstream c1;
    c1 << getchild1();
    string ch1Str;
    c1 >> ch1Str;
    
    stringstream c2;
    c2 << getchild2();
    string ch2Str;
    c2 >> ch2Str;
    
    if (getchild1() != NULL && getchild2() != NULL)
    {
        retStr = retStr + " has children " + ch1Str + " and " + ch2Str;
    }
    else if (getchild1() == NULL)
    {
        retStr = "---";
    }
    else if (getchild2() == NULL)
    {
        retStr = "---";
    }
    else
    {
        retStr = retStr + " has no children ";
    }
    return retStr;
}






