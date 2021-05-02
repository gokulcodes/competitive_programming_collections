#include <bits/stdc++.h>

using namespace std;
#define print(data) cout << data << endl;

class Node{
	public:
	int data;	
	Node *left, *right;
	Node(int key){
		data = key;
		left = nullptr, right = nullptr;
	}
};

int treeHeight(Node* root){
	if(root == nullptr) return 0;
	return max(treeHeight(root->left), treeHeight(root->right)) + 1;
}

void traversal(Node *root){
	if(root == nullptr) return;
	traversal(root->left);
	print(root->data);
	traversal(root->right);
}

int sumTree(Node *root){
	if(root == nullptr) return 0;
	return root->data + sumTree(root->left) + sumTree(root->right);
}

int main(){

	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	// traversal(root);
	// cout << treeHeight(root) << endl;
	print(sumTree(root));

	return 0;
}