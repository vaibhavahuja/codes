#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
public:
	TreeNode *left, *right;
	int val;
	TreeNode(int d){
		val = d;
		left = NULL;
		right = NULL;
	}
};


TreeNode* insert(TreeNode *root, int data){

	if(!root) return new TreeNode(data);
	else{
		if(data <= root->val) root->left = insert(root->left, data);
		else root->right = insert(root->right, data);
	}
	return root;
}

void inOrder(TreeNode *root){
	if(!root) return;
	if(root->left) inOrder(root->left);
	cout<<root->val<<" ";
	if(root->right) inOrder(root->right);
}

void deleteNode(TreeNode *root, int k){
	//no children
	//finding that node pointer

	if(root->val < k){
		root->left = deleteNode(root->left, k);
	}else if(root->val > k){
		root->right = deleteNode(root->right, k);
	}else{
		//have reached the node now

		//case 1 : No Children
		if(!root->left && !root->right){
			TreeNode *temp = root;
			root = NULL;
			delete temp;	
		}else if(!root->left){
			TreeNode *temp = root;
			root = root->right;
			delete temp;
		}else if(!root->right){
			TreeNode *temp = root;
			root = root->left;
			delete temp;
		}else{
			// has both children

			TreeNode *temp = getMax(root->left);
			root->data = temp->data;
			root->left = deleteNode(root->left, temp->data);
		}

	}


}



int main(){
	int x;
	cin>>x;
	TreeNode *root = new TreeNode(x);

	while(1){
		int a;
		cin>>a;
		if(a == -1) break;
		insert(root, a);
	}
	inOrder(root);

}