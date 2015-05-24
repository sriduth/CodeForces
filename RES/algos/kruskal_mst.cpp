#include <iostream>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <set>

using namespace std;

#include "graph_node.h"

class GraphNode:protected Node
{
	vector<GraphNode*> exit_branches;
public:
	void set_type(char type_);
	void set_value(int value_);
	void set_new_entry_node(GraphNode*& current_node,GraphNode*& parent_node);
	void set_new_exit_node(GraphNode*& new_exit_node);
	void set_node_label(string name);
	int alter_in_degree(bool type);
	int alter_out_degree(bool type);
	int get_in_degree();
	int get_out_degree();
	int get_value();
	char get_type();
	string get_node_label();
	pair<vector<GraphNode*>::const_iterator,vector<GraphNode*>::const_iterator> get_child_nodes();
};
void GraphNode::set_new_entry_node(GraphNode*& current_node,GraphNode*& parent_node)
{
	current_node->set_new_exit_node(parent_node);
	in_degree++;
}
void GraphNode::set_new_exit_node(GraphNode*& new_exit_node)
{
	exit_branches.push_back(new_exit_node);
	out_degree++;
}
void GraphNode::set_type(char type)
{
	type = type;
}
void GraphNode::set_value(int value)
{
	value = value;
}
void GraphNode::set_node_label(string node_label)
{
	label = node_label;
}
int GraphNode::alter_in_degree(bool type)
{
	if (type)
		in_degree++;
	else
		in_degree--;

	return in_degree;
}
int GraphNode::alter_out_degree(bool type)
{
	if (type)
		out_degree++;
	else
		out_degree--;

	return out_degree;
}
int GraphNode::get_out_degree()
{
	return out_degree;
}
int GraphNode::get_in_degree()
{
	return in_degree;
}
int GraphNode::get_value()
{
	return value;
}
char GraphNode::get_type()
{
	return type;
}
string GraphNode::get_node_label()
{
	return label;
}
pair<vector<GraphNode*>::const_iterator,vector<GraphNode*>::const_iterator> 
GraphNode::get_child_nodes()
{
	vector<GraphNode*>::const_iterator start_iterator = exit_branches.begin();
	vector<GraphNode*>::const_iterator end_iterator = exit_branches.end();

	return make_pair(start_iterator,end_iterator);
}
//
class Edge
{
	GraphNode *src;	
	GraphNode *dst;
	int weight;
	bool type;

public:
	Edge(string src_node_label,string dst_node_label,int edge_weight,bool edge_type=true)
	{
		src = new GraphNode();
		dst = new GraphNode();
		src->set_node_label(src_node_label);
		dst->set_node_label(dst_node_label);
		src->set_new_exit_node(dst);
		dst->set_new_entry_node(dst,src);
		weight = edge_weight;
		type = edge_type;
	}

	string get_src_node_label();
	string get_dst_node_label();
	GraphNode*& get_src_node();
	GraphNode*& get_dst_node();
	int get_edge_weight();
	bool get_edge_type();
};


string Edge::get_dst_node_label()
{
	string x =  dst->get_node_label();
	return x; 
}
string Edge::get_src_node_label()
{
	string x = src->get_node_label();
	return x;
}
GraphNode*& Edge::get_src_node()
{
	return src;
}
GraphNode*& Edge::get_dst_node()
{
	return dst;
}
int Edge::get_edge_weight()
{
	return weight;
}
// GRAPHHH 
class Graph
{
	set<string> vertex_set;
	vector<Edge*> edge_set;
	vector<Edge> object_edge_set;
	int edges;

public:
	Graph()
	{
		edges=0;
	}
	void print_edges();
	void sort_edges();
	void add_new_edge(string source_node_label,string destination_node_label,int weight,bool edge_type);
	void breadth_first_search();
	void depth_first_search();
};
void Graph::add_new_edge(string source_node_label,string destination_node_label,int weight,bool edge_type)
{
	Edge *new_edge = new Edge(source_node_label,destination_node_label,weight,edge_type);
	edge_set.push_back(new_edge);
	object_edge_set.push_back(Edge(source_node_label,destination_node_label,weight,edge_type));
	vertex_set.insert(source_node_label);
	vertex_set.insert(destination_node_label);
	edges++;
}
void Graph::print_edges()
{
	for(int i=0;i<edges;i++)
	{
		cout <<  edge_set[i]->get_src_node_label() << " --< "
		<< edge_set[i]->get_edge_weight() << " >--> " << 
		edge_set[i]->get_dst_node_label() << endl;
	}

}
void Graph::sort_edges()
{
	sort(object_edge_set.begin(),object_edge_set.end(),
		[](Edge x,Edge y)
		{
			if(x.get_edge_weight() < y.get_edge_weight())
				return true;
			else
				return false;
		}
	);

	for(Edge X : object_edge_set)
	{
		cout << X.get_src_node_label() << " --< " 
		<< X.get_edge_weight() << " >--> "
		<< X.get_dst_node_label() << endl;
	}
}

void Graph::depth_first_search()
{
	int visitation_order=0;
	unordered_map<string,int> visited;
	stack<GraphNode*> dfs_path;

	for(string node : vertex_set)
		visited[node] = visitation_order;

	dfs_path.push(edge_set.front()->get_src_node());

	while(!dfs_path.empty())
	{
		GraphNode vertex = *dfs_path.top();
		dfs_path.pop();
		if(visited[vertex.get_node_label()] == 0)
		{
			visited[vertex.get_node_label()] = ++visitation_order;
			pair<vector<GraphNode*>::const_iterator,vector<GraphNode*>::const_iterator>
			exit_node_iterators = vertex.get_child_nodes();
			
			vector<GraphNode*>::const_iterator start = exit_node_iterators.first;
			vector<GraphNode*>::const_iterator end = exit_node_iterators.second;
			while(start != end)
				dfs_path.push(*start);
		}
 
	}

	for(pair<string,int> X : visited)
		cout << X.first << " " << X.second << endl; 
}

int main()
{
	Graph g;
	g.add_new_edge("A","B",4,true);
	g.add_new_edge("B","C",6,true);
	g.add_new_edge("C","D",3,true);
	g.add_new_edge("D","E",2,true);
	g.add_new_edge("E","F",4,true);
	g.add_new_edge("F","A",2,true);
	g.print_edges();
	g.sort_edges();
	cout << "DFS : " << endl;
	g.depth_first_search();
	return 0;
}