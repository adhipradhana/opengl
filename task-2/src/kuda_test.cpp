#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<float> parseImage() {
    static vector<float> input;
    vector <vector <string> > data;
    ifstream infile( "kuda_modified.txt" );

    srand (static_cast <unsigned> (time(0)));

    while (infile)
    {
        string s;
        if (!getline( infile, s )) break;

        istringstream ss( s );
        vector <string> record;

        while (ss)
        {
        string s;
        if (!getline( ss, s, ',' )) break;
        record.push_back( s );
        }

        data.push_back( record );
    }
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            if (data[i][j] != "0")
                input.push_back(stof(data[i][j])); 
        }
    }
    if (!infile.eof())
    {
        cerr << "Fooey!\n";
    }
    return input;
}

vector<float> randomColor(int size) {
    static vector<float> color;
    for (int i = 0; i < size; i++) {
        color.push_back(static_cast <float> (rand()) / static_cast <float> (RAND_MAX));
        color.push_back(static_cast <float> (rand()) / static_cast <float> (RAND_MAX));
        color.push_back(static_cast <float> (rand()) / static_cast <float> (RAND_MAX));
    }
    return color;
}