// SpanningTrees.cpp : Defines the entry point for the console application.
// EECS 2510 Non-Linear Data Structures 
// Minnimum spanning trees 
// This is the main file for minnimum spanning trees and will be used to call
// the other classes. 

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include "Edge.h"

using namespace std;

int *intPaths;
std::string filename = "spanningTrees.txt";
void readInput();


int main()
{
	readInput();
    return 0;
}

void readInput()
{
	/*
	 * This function takes the input file and creates the Vertices and edges. This is done by creating N number of edges from 
	 * the input file. Then each edge has a one dimensional array in it that contains its paths to every other node. 
	 */
	char c;
	string strName;
	stringstream ss;
	int n;
	std::ifstream reader;
	reader.open(filename, ios::binary); 
	reader.get(c);
	n = (int)c;

	// To move past a new line and return character
	reader.get(c);
	reader.get(c);

	// We now have the number of edges, the next n inputs will be names of edges. 
	// An array of strings is made to collect all the names of the Vertices and then 
	// a matrix will be created to store all the path weights
	string* strVertices = new string[n];
	for(int counter = 0; counter <= n-1; counter++)
	{
		reader >> strVertices[counter];

	
	}

	for(int counter = 0; counter <= n-1; counter++)
	{
		cout << strVertices[counter];
	}
	
	
	while (cin.get() != 'e');


}

