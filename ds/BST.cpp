#include <bits/stdc++.h>

using namespace std;


class Node{
	public:
	int data;	
	Node *left, *right;
	Node(int key){
		data = key;
		left = nullptr, right = nullptr;
	}
};

void traversal(Node* root){
	if(root == nullptr) return;
	traversal(root->left);
	cout << root->data << ' ';
	traversal(root->right);
}

void search(Node* root, int x){
	if(root == nullptr) return;
	if(root->data == x) {
		cout << "Found!" << endl;
		return;
	}
	if(root->data < x) 
		search(root->right, x);
	else if(root->data > x)
		search(root->left, x);
}

Node* insert(Node* root, int x){
	if(root == nullptr){
		Node* newNode = new Node(x);
		return newNode;
	}

	if(root->data < x)
		root->right = insert(root->right, x);
	
	else if(root->data > x)
		root->left = insert(root->left, x);
		

	return root;
}

Node* getSucc(Node* curr){
	curr = curr->right;
	while(curr != nullptr && curr->left != nullptr)
		curr = curr->left;

	return curr;
}

Node* delNode(Node* root, int x){

	if(root == nullptr) return root;
	if(root->data > x) root->left = delNode(root->left, x);
	else if(root->data < x) root->right = delNode(root->right, x);
	else if(root->data == x){
		if(root->left == nullptr){
			Node* temp = root->right;
			delete root;
			return temp;
		}else if(root->right == nullptr){
			Node* temp = root->left;
			delete root;
			return temp;
		}else{
			Node* succ = getSucc(root);
			root->data = succ->data;
			root->right = delNode(root->right, succ->data);
		}
	}

	return root;
}

Node* flr(Node* root, int x){
	Node* res = nullptr;
	while(root != nullptr){
		if(root->data == x) return root;
		if(root->data > x) root = root->left;
		else{
			res = root;
			root = root->right;
		}
	}

	return res;
}

int main(){
	Node* root = new Node(50);
	root->left = new Node(30);
	root->right = new Node(70);
	root->left->right = new Node(40);
	root->left->left = new Node(20);
	root->right->left = new Node(60);
	root->right->right = new Node(80);


	// search(root, 80);
	insert(root, 90);
	insert(root, 10);
	traversal(root);
	delNode(root, 40);
	cout << endl;
	traversal(root);
}
