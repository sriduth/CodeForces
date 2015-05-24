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
	virtual void set_type(char type_);
	virtual void set_value(int value_);
	virtual void set_new_entry_node();
	virtual int alter_in_degree(bool type);
	virtual int alter_out_degree(bool type);
	virtual int get_in_degree();
	virtual int get_out_degree();
	virtual int get_value();
	virtual char get_type();
};

void Node::set_new_entry_node()
{
	in_degree++;
}
void Node::set_type(char type)
{
	type = type;
}
void Node::set_value(int value)
{
	value = value;
}
int Node::alter_in_degree(bool type)
{
	if (type)
		in_degree++;
	else
		in_degree--;

	return in_degree;
}
int Node::alter_out_degree(bool type)
{
	if (type)
		out_degree++;
	else
		out_degree--;

	return out_degree;
}
int Node::get_out_degree()
{
	return out_degree;
}
int Node::get_in_degree()
{
	return in_degree;
}
int Node::get_value()
{
	return value;
}
char Node::get_type()
{
	return type;
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
		exit_branches.push_back(NULL);
		exit_branches.push_back(NULL);
	}

	void set_new_exit_node(TreeNode *& new_exit_node, bool type);
	void set_right_child(TreeNode *&new_left_child);
	void set_left_child(TreeNode *&new_right_child);
	TreeNode*& left_child();
	TreeNode*& right_child();
	void set_type(char type_);
	void set_value(int value_);
	void set_new_entry_node();
	int alter_in_degree(bool type);
	int alter_out_degree(bool type);
	int get_in_degree();
	int get_out_degree();
	int get_value();
	char get_type();
};
// Inherited from tree
void TreeNode::set_new_entry_node()
{
	in_degree++;
}
void TreeNode::set_type(char _type_)
{
	type = _type_;
}
void TreeNode::set_value(int _value_)
{
	value = _value_;
}
int TreeNode::alter_in_degree(bool type)
{
	if (type)
		in_degree++;
	else
		in_degree--;

	return in_degree;
}
int TreeNode::alter_out_degree(bool type)
{
	if (type)
		out_degree++;
	else
		out_degree--;

	return out_degree;
}
int TreeNode::get_out_degree()
{
	return out_degree;
}
int TreeNode::get_in_degree()
{
	return in_degree;
}
int TreeNode::get_value()
{
	return value;
}
char TreeNode::get_type()
{
	return type;
}// End
TreeNode*& TreeNode::left_child()
{
	return exit_branches[0];
}
TreeNode*& TreeNode::right_child()
{
	return exit_branches[1];
}
void TreeNode::set_new_exit_node(TreeNode *&new_exit_node, bool type)
{
	if (type){
		cout << new_exit_node->get_value() << " is left child" << endl;
		exit_branches[0] = new_exit_node;
	}
		
	else{
		cout << new_exit_node->get_value() << " is right child" << endl;
		exit_branches[1] = new_exit_node;
	}

	cout << "set_new_exit_node() : " << new_exit_node->get_value() << " " << new_exit_node->get_type() << endl;

		
}
void TreeNode::set_right_child(TreeNode *&new_right_child)
{
	cout << new_right_child->get_value() << endl;
	set_new_exit_node(*&new_right_child, false);
}
void TreeNode::set_left_child(TreeNode *&new_left_child)
{
	set_new_exit_node(*&new_left_child, true);
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
		root = new TreeNode;
		root->set_type('R');
		root->set_value(0);
		node_count = 0;
	}
	
	void pre_order_traversal();
	void pre_order_traversal_recursive(TreeNode *&root);
	void in_order_traversal();
	void in_order_traversal_recursive(TreeNode *&root);
	void post_order_traversal();
	void post_order_traversal_recursive(TreeNode *&root);
	void insert_node(int value, char type);
};

void Tree::insert_node(int value, char type)
{
	TreeNode *iterator_node = new TreeNode;
	iterator_node = root;

	bool flag = true;

	while (flag)
	{
		if (iterator_node->get_value() > value && iterator_node->left_child() != NULL){
			iterator_node = iterator_node->left_child();
		}

		else if (iterator_node->get_value() < value && iterator_node->right_child() != NULL){
			iterator_node = iterator_node->right_child();
		}

		else if (iterator_node->get_value() < value && iterator_node->right_child() == NULL){

			iterator_node->alter_out_degree(true);
			
			TreeNode *new_node = new TreeNode;
			new_node->set_type('C');
			new_node->set_value(value);
			new_node->alter_in_degree(true);

			iterator_node->set_right_child(new_node);
			flag = false;
 			node_count++;
			break;
		}

		else if (iterator_node->get_value() > value && iterator_node->left_child() == NULL){

			iterator_node->alter_out_degree(true);

			TreeNode *new_node = new TreeNode;
			new_node->set_type('C');
			new_node->set_value(value);
			new_node->alter_in_degree(true);

			iterator_node->set_left_child(new_node);
			flag = false;
			//cout << "INSERTED" << new_node->get_type() << new_node->get_value() << endl;
			node_count++;
			break;
		}
	}
}
void Tree::pre_order_traversal()
{
	pre_order_traversal_recursive(root);
}
void Tree::pre_order_traversal_recursive(TreeNode *&root)
{
	if (root != NULL)
	{
		cout << "Type : " << root->get_type() << " Value : " << root->get_value() << " In: " << root->get_in_degree() << " Out: " << root->get_out_degree() << endl;

		pre_order_traversal_recursive(root->left_child());
		pre_order_traversal_recursive(root->right_child());
	}
}
void Tree::in_order_traversal()
{
	in_order_traversal_recursive(root);
}
void Tree::in_order_traversal_recursive(TreeNode *&root)
{
	if (root != NULL)
	{
		in_order_traversal_recursive(root->left_child());
		cout << "Type : " << root->get_type() << " Value : " << root->get_value() << " In: " << root->get_in_degree() << " Out: " << root->get_out_degree() << endl;
		in_order_traversal_recursive(root->right_child());
	}
}
void Tree::post_order_traversal()
{
	post_order_traversal_recursive(root);
}
void Tree::post_order_traversal_recursive(TreeNode *&root)
{
	if (root != NULL)
	{
		post_order_traversal_recursive(root->left_child());
		post_order_traversal_recursive(root->right_child());
		cout << "Type : " << root->get_type() << " Value : " << root->get_value() << " In: " << root->get_in_degree() << " Out: " << root->get_out_degree() << endl;
	}
}
/*End tree class*/
int main()
{
	Tree *btree = new Tree;

	btree->insert_node(6, 'R');
	btree->insert_node(7, 'C');
	btree->insert_node(-1, 'C');
	btree->insert_node(-2, 'C');

	cout << "DONE" << endl;
	btree->in_order_traversal();
	cout << endl;
	btree->pre_order_traversal();

	cin.get();
	cin.get();
	return 0;
}