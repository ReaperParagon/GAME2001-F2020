#include <iostream>
#include "Graph.h"	
using namespace std;

//int main()
//{
//	cout << "Graph - Depth First Search" << endl << endl;
//
//	Graph<char> demoGraph(6);
//
//	demoGraph.push('A');
//	demoGraph.push('B');
//	demoGraph.push('C');
//	demoGraph.push('D');
//	demoGraph.push('E');
//	demoGraph.push('F');
//
//	// Attach A to C and C to A
//	demoGraph.attachEdge(0, 2);
//
//	// Attach A to D and D to A
//	demoGraph.attachDirectedEdge(3, 0);
//
//	// Attach B to E and E to B
//	demoGraph.attachEdge(1, 4);
//
//	// Attach C to F and F to C
//	demoGraph.attachEdge(2, 5);
//
//	cout << "Depth First Search node visited: ";
//
//	int result = demoGraph.DepthFirstSearch(2, 3);
//	cout << endl << endl;
//
//	if (result == 1)
//	{
//		cout << "Path from C to D found!";
//	}
//	else
//	{
//		cout << "Path from C to D not found!";
//	}
//
//	cout << endl << endl;
//
//	return 1;
// }