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