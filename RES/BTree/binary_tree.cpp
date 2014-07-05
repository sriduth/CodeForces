#include <iostream>
#include <vector>

using namespace std;

/*
	Defining the Node Class;
*/
class Node
{

protected:
	int value;
	char type;
	int in_degree;
	int out_degree;

public:
	void set_type(char type_);
	void set_value(int value_);
	void set_new_entry_node();
	int alter_in_degree(bool type);
	int alter_out_degree(bool type);
	int get_value();
	char get_type();
};

void Node :: set_new_entry_node()
{
	this->in_degree++;
}

void Node :: set_type(char type)
{
	this->type = type;
}

void Node :: set_value(int value)
{
	this->value = value;
}

int Node :: alter_in_degree(bool type)
{
	if(type)
		this->in_degree++;
	else
		this->in_degree--;

	return in_degree;
}

int Node :: alter_out_degree(bool type)
{
	if(type)
		this->out_degree++;
	else
		this->out_degree--;

	return out_degree;
}

int Node :: get_value()
{
	return this->value;
}

char Node :: get_type()
{
	return this->type;
}

/*End of Node class*/

/*Start Tree Node Class*/
class TreeNode : public Node
{
	vector<TreeNode*> exit_branches;
public:

	TreeNode()
	{
		in_degree = 0;
		out_degree = 0;
	}

	void set_new_exit_node(TreeNode *& new_exit_node,bool type);
	void set_right_child(TreeNode *& new_left_child);
	void set_left_child(TreeNode *& new_right_child);
	TreeNode* left_child();
	TreeNode* right_child();
};

TreeNode* TreeNode :: left_child()
{
	return exit_branches[0];
}

TreeNode* TreeNode :: right_child()
{
	return exit_branches[1];
}

void TreeNode :: set_new_exit_node(TreeNode *& new_exit_node,bool type)
{
	if(type)
		exit_branches[0] = new_exit_node;
	else
		exit_branches[1] = new_exit_node;
}
void TreeNode :: set_right_child(TreeNode *& new_right_child)
{
	set_new_exit_node(*&new_right_child,0);
}

void TreeNode :: set_left_child(TreeNode *& new_left_child)
{
	set_new_exit_node(*&new_left_child,1);
}
/*End Tree Node Class*/

/*Start Tree Class*/
class Tree
{
	TreeNode *root;
	int node_count;

public:
	Tree()
	{
		root->set_type('R');
		root->set_value(-666);
		node_count = 0;
	}
	void inorder_traversal();
	void insert_node(int value, char type);
};

void Tree :: insert_node(int value,char type)
{
	TreeNode *new_node = new TreeNode;
	new_node = root;
	bool flag = true;

	while(flag)
	{
		if(new_node->get_value() > value && new_node->left_child() != NULL){
			new_node = new_node->left_child();
		}
		
		else if(new_node->get_value() < value && new_node->right_child() != NULL){
			new_node = new_node->right_child();
		}

		if(new_node->get_value() > value && new_node->right_child() != NULL){

			new_node->alter_out_degree(true);
			new_node->set_left_child(new_node);
			new_node->set_value(value);
			new_node->set_type(type);
			new_node->alter_in_degree(true);
		}
	}
}


int main()
{
	Tree btree;
	btree.insert_node(6,'R');
	return 0;
}