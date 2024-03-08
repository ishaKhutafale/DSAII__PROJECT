#include <iostream>    //need for a lot
#include <sstream>    //need for splitFirst
#include <fstream>    //need for reading data
#include <string>    //need for a lot
#include <vector>    //need for vectors
#include <stdio.h> //need for atoi
#include <stdlib.h> //need for atoi
#include "readFiles.h"
using namespace std;

int main()
{
    const char* filename1="person.txt";
    const char* filename2="movies.txt";
    const char* filename3="stars.txt";
    vector<int> personID;
    vector<string> personName;
    vector<int> movieID;
    vector<string> movieName;
    vector<int> relationMovieID;
    vector<int> relationPersonID;
    inputFile(filename1,personID,personName);
    cout<<endl;
    inputFile(filename2,movieID,movieName);
    cout<<endl;
    ifstream obj1;
    string line,first,second;
    obj1.open(filename3);
    int i=0;
    while(getline(obj1,line))
    {
        splitLine(line,first,second);
        int iFirst=atoi(first.c_str());
        relationPersonID.push_back(iFirst);
        iFirst=atoi(second.c_str());
        relationMovieID.push_back(iFirst);
        cout<<"Person id"<<relationPersonID[i]<<" "<<"Movie ID: "<<relationMovieID[i]<<endl;
        i++;
    }
    obj1.close();
    return 0;

}
