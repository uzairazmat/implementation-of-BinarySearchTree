#include <iostream>
using namespace std;

class TreeNode {
  int val; 
  TreeNode* right ;
  TreeNode*  left ;
  public:
    TreeNode(int val);
    void setleft(TreeNode* l); 
    void setright(TreeNode* r); 
    void printnode();
    void setval(int val);
};
 TreeNode:: TreeNode(int val){
  this->val = val;
  this->right = NULL;
  this->left = NULL; 
   
}

void TreeNode::setval(int val){
  this-> val = val;
  
}
 void TreeNode :: setleft(TreeNode* l){
   this->left = l;
   
 }

 void TreeNode :: setright(TreeNode* r){
   this->right = r;

 }

void TreeNode::printnode(){
  cout<<"value of node is "<<this->val<<endl;
  cout<<"left address of this node "<<this->left<<endl;
   cout<<"right address of this node "<<this->right<<endl;
  
}


// ------------------------> BST CLASS<------------------------

class Bst{
  TreeNode* root;
  int size = 0 ;

  public:
  Bst(int root );
    
  
  
};

  Bst :: Bst(int root){
    if (this-> size  == 0){
    this->root = new TreeNode(root); 
    cout<<root->printnode();
    }
  }


int main() {
  TreeNode* root = new TreeNode(5);
  TreeNode* left = new TreeNode(4);
  TreeNode *right = new TreeNode(6);
  root->setleft(left);
  root->setright(right);

  root->printnode();
  


  
  return 0 ; 
}