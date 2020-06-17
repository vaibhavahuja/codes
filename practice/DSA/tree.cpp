#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
public:
	TreeNode *left, *right;
	int data;
	TreeNode(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

TreeNode *createTree(){
	int x;
	cin>>x;
	if(x == -1) return NULL;

	TreeNode *root = new TreeNode(x);
	root->left = createTree();
	root->right = createTree();
}

void inOrder(TreeNode *root){
	if(!root) return;
	if(root->left) inOrder(root->left);
	cout<<root->data<<" ";
	if(root->right) inOrder(root->right);
	// cout<<"completed"<<endl;
}

int count(TreeNode *root){
	if(!root) return 0;
	return 1 + count(root->left) + count(root->right);
}

//level order : BFS
//add spaces (use some delimiter)

void level(TreeNode *root){
	queue<TreeNode*> vals;
	vals.push(root);
	vals.push(NULL);
	while(!vals.empty()){
		TreeNode *top = vals.front();
		if(top == NULL){
			cout<<endl;
			vals.pop();
			if(vals.front()!=NULL) vals.push(NULL);
			// continue;
		}else{
			vals.pop();
			cout<<top->data<<" ";
			if(top->left) vals.push(top->left);
			if(top->right) vals.push(top->right);
		}
	}
}

int getMax(vector<int> a, int l, int r){
        if(l == r) return -1;
        int ans = -1e5, p = -1;
        for(int i = l; i < r; i++){
            if(ans < a[i]) ans = a[i], p = i;
        }
        return p;
}

TreeNode *construct(vector<int> a, int l, int r){
        if(l == r)  return NULL;
        int maxi = getMax(a, l, r);
        
        TreeNode *root = new TreeNode(a[maxi]);
        root->left = construct(a, l, maxi);
        root->right = construct(a, maxi + 1, r);
        
        return root;
}


int main(){
	// TreeNode *x = createTree();
	vector<int> a = {3, 2, 1, 6, 0, 5};
	TreeNode *x = construct(a, 0, 6);
	inOrder(x);
	cout<<endl;
	level(x);
	// cout<<count(x)<<endl;

}