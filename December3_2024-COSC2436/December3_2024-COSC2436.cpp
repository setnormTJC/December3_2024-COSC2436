// December3_2024-COSC2436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"TreeNode.h"

#include"someTestTrees.h"

using std::cout; 
using std::string; 



int main()
{
	//TreeNode<int> root{ 1 }; 

	//TreeNode<int>* addressOfLeftChildOfRoot = new TreeNode<int>(2); 

	//TreeNode<int>* addressOfRightChildOfRoot = new TreeNode<int>(3); 

	//root.left = addressOfLeftChildOfRoot; 
	//root.right = addressOfRightChildOfRoot; 

	//cout << "Contents of left child: " << root.left->nodeValue << "\n";
	
	//cout << "Does left child have a left child? " << root.left->left->nodeValue << "\n";
	//the code above leads to a sort of "out of bounds" error 

	
	//level 0 node (root)
	TreeNode<char>* addressOfRoot = new TreeNode<char>{ 'a' }; 

	//the two level 1 nodes: 
	addressOfRoot->left = new TreeNode<char>{ 'b' };
	addressOfRoot->right = new TreeNode<char>{ 'c' };


	//the level 2 nodes: 
	addressOfRoot->left->left = new TreeNode<char>{ 'd' };
	addressOfRoot->left->right = new TreeNode<char>{ 'e' };
	addressOfRoot->right->left = new TreeNode<char>{ 'f' }; 
	addressOfRoot->right->right = new TreeNode<char>{ 'g' };

	//the level 3 nodes: 
	addressOfRoot->right->left->left = new TreeNode<char>{ 'h' };
	addressOfRoot->right->left->right = new TreeNode<char>{ 'i' };


	//cout << "Root's left child's left child contains: "
	//	<< addressOfRoot->left->left->nodeValue << "\n";

	inorderTraverse(addressOfRoot);


}
