#include <iostream>    //need for a lot
#include <sstream>    //need for splitFirst
#include <fstream>    //need for reading data
#include <string>    //need for a lot
#include <vector>    //need for vectors
#include <stdio.h> //need for atoi
#include <stdlib.h> //need for atoi
using namespace std; //makes it easier to code

void inputFile( const char * filename,vector<int> &id,vector<string> &name);
int splitLine(string line,string &first,string &second);