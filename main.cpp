#include <iostream>
using namespace std;

class TreeNode {
private:
  int val;
  TreeNode* right;
  TreeNode* left;

public:
  TreeNode(int val);
  void setLeft(TreeNode* l);
  void setRight(TreeNode* r);
  void printnode();
  int getVal();
  TreeNode* getRight();
  TreeNode* getLeft();
};

TreeNode::TreeNode(int val){
  this->val = val;
  this->right = nullptr;
  this->left = nullptr;
}

int TreeNode::getVal(){
  return this->val;
}

void TreeNode::setLeft(TreeNode* l){
  this->left = l;
}

void TreeNode::setRight(TreeNode* r){
  this->right = r;
}

TreeNode* TreeNode::getRight(){
  return this->right;
}

TreeNode* TreeNode::getLeft(){
  return this->left;
}

void TreeNode::printnode(){
  cout << "Value of node is " << this->val << endl;
  cout << "Left address of this node " << this->left << endl;
  cout << "Right address of this node " << this->right << endl;
}

class Bst{
private:
  TreeNode* root;
  int size;

public:
  Bst(int val);
  void insert(int val);
};

Bst::Bst(int val){
  this->root = new TreeNode(val);
  this->size = 1;
}

void Bst::insert(int val){
  TreeNode* newnode = new TreeNode(val);
  TreeNode* current = this->root;

  while (true){
    if (val < current->getVal()){
      if (current->getLeft() == nullptr){
        current->setLeft(newnode);
        current->printnode();
        break;
      }
      else{
        current = current->getLeft();
      }
    }
    else if (val > current->getVal()){
      if (current->getRight() == nullptr){
        current->setRight(newnode);
        current->printnode();
        break;
      }
      else{
        current = current->getRight();
      }
    }
    else{
      // Handle duplicate value if needed
      break;
    }
  }
}


int main() {
  Bst* r = new Bst(5);
  r->insert(1);
  r->insert(19);
  r->insert(8);
  r->insert(3);
  r->insert(9);
  r->printnode();


  return 0; 
}





