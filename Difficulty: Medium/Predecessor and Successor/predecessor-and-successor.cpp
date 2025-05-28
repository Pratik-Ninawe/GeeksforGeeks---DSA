/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
    protected:
    void find_The_Succ(Node* root, int k, Node* &succ){
        if(root== nullptr){
            succ= nullptr;
            return;
        }
        while(root){
            if(root->data== k){
                root= root->right;
            }
            else if(root->data> k){
                if(!succ){
                    succ= root;
                    
                }
                else if(succ->data> root->data and root->data> k){
                    succ= root;
                }
                root= root->left;
            }
            else{
                root= root->right;
            }
        }
        
        
        
    }
    void find_The_Pred(Node* root, int k, Node* &pred){
        if(root== nullptr)
        {
            pred= nullptr;
            return;
        }
        while(root){
            if(root->data== k){
                root= root->left;
                
            }
            else if(root->data> k){
                root= root->left;
            }
            else{
                if(!pred){
                    pred= root;
                }
                else if(root->data > pred->data and root->data< k){
                    pred= root;
                    
                }
                root= root->right;
            }
        }
        
    }
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        
        Node* succ= nullptr;
        Node* pred= nullptr;
        find_The_Succ(root, key, succ);
        find_The_Pred(root, key, pred);
       vector<Node*> v;
       v.push_back(pred);
       v.push_back(succ);
       return v;
       
        
    }
};