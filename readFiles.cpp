#include <iostream>    //need for a lot
#include <sstream>    //need for splitFirst
#include <fstream>    //need for reading data
#include <string>    //need for a lot
#include <vector>    //need for vectors
#include <stdio.h> //need for atoi
#include <stdlib.h> //need for atoi
using namespace std;

int splitLine(string line,string &first,string &second)
{
    first=second="";
    string third;
    if(line=="")  return 0;
    istringstream iss(line);//Objects of this class use a string buffer that contains a sequence of characters. 
    iss>>first;
    iss>>second;
    if(second=="") return 1;
    iss>>third;
    while(iss && third != "")
    {
        second=second+" "+third;
        iss>>third;
    }
    return 2;
}
void inputFile( const char * filename,vector<int> &id,vector<string> &name)
{
    ifstream obj1;
    string line,first,second;
    obj1.open(filename);
    int i=0;
    while(getline(obj1,line))
    {
        splitLine(line,first,second);
        int iFirst=atoi(first.c_str());
        id.push_back(iFirst);
        name.push_back(second);
        cout<<"id: "<<id[i]<<" "<<"Name: "<<name[i]<<endl;
        i++;
    }
}
