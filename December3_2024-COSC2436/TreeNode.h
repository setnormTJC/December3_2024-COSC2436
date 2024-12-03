#pragma once


#include<iostream> 

using std::cout; 


template<typename T>
class TreeNode
{
public:

	T nodeValue; //this means the contents of the node 
	TreeNode<T>* left;
	TreeNode<T>* right;



	TreeNode()
	{

	};

	TreeNode(const T& nodeValue)
	{
		this->nodeValue = nodeValue;
	}

	bool isLeaf()
	{
		if (left == nullptr && right == nullptr)
		{
			return true;
		}

		else
		{
			return false;
		}
	}


};

template<typename T> 
void inorderTraverse(TreeNode<T>* root)
{
	if (root != nullptr)
	{
		inorderTraverse(root->left);
		cout << root->nodeValue << "\n";
		inorderTraverse(root->right);

	}
}