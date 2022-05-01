#include <iostream>
#include <vector>

#include "functs.h"

using namespace std;

void rescript(vector<double>U, vector<double>senior, vector<double>middle, vector<double>junior, int n){
    for(int i=0; i<n;i++){
        senior[i]=middle[i];
        middle[i]=junior[i];
        junior[i]=U[i];
    }
}



vector<double>push_str(string line){
    vector<double>new_vect;
    string nstring = "";
    double elem;
    for(int i = 0;i<line.size();i++){
        if(line[i]!=' '){
            nstring+=line[i];
        }else{
            elem = stod(nstring);
            new_vect.push_back(elem);
        }
    }
    return new_vect;
}

bool checkline(string line){
    for (int i = 0; line[i]!='\0'; i++) {
        if ((line[i] < 48 or line[i] > 57) and line[i]!=32 and line[i]!=46){
            return false;
        }
    }
    return true;
}

string getlin(){
    while(true){
        string line;
        cin >> line;
        if(checkline(line)){
            return line;
        }else{
            cout << "Incorrect answer. Please try again." << endl;
        }
    }
}

void mainfunct(vector<double>senior , vector<double>middle , vector<double>junior, double answer){
    for(int i = 1; i<9; i++){
        double checksum = (senior[i]+junior[i]+middle[i-1]+middle[i-2])/4;
        if(middle[i]>=checksum){
            answer*=(middle[i]*middle[i]);
        }
    }
}

bool insert(){
    string a;
    string zero = "0";
    string one = "1";
    while(true){
        cin >> a;
        if (a == one or a == zero){
            if( a == zero){
                return false;
            }else{
                return true;
            }
        }else{
            cout << "Incorrect answer. Please try again.";
        }
    }
}
