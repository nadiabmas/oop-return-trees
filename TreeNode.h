//  Name: Nadia Bravo Mas (101157878)
//  TreeNode.h
//  A3_TreeObjects
//

#ifndef TreeNode_h
#define TreeNode_h

#include <string>
using namespace std;

class TreeNode //Prototype of TreeNode class
{
private:
     TreeNode* child1;
     TreeNode* child2;
     int ids;
    
    
public:
    
    //Costructor
    TreeNode(unsigned int myID);
    
    //Destructor
    ~TreeNode();

    //Getter methods
    TreeNode* getchild1(); //child1 getter
    TreeNode* getchild2(); //child2 getter
    int getids();//id getter
    
    //Setter methods
    void setchild1(TreeNode* ch1); //Child1 setter method
    void setchild2(TreeNode* ch2); //Child2 setter method
    void setids(int myID_2);//id setter method
    
    //Fuction declaration
    bool isConnected(TreeNode* node1, TreeNode* node2);
    bool isChild(TreeNode* p_node1, TreeNode* p_node2);
    bool isLeafNode(TreeNode* p_node2);
    string getTxtInfo();
    
};


 

#endif /* TreeNode_h */
