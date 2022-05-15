#include <string>
#include <iostream>
#include <vector>

#include "functions.h"

using namespace std;

extern int n;
extern vector<char> my_vector;


string my_function() 
{  
    string answer = "Ответ: ";
    answer += my_replace(my_vector);

    return answer;
}

string my_replace (vector<char> now_vector) 
{
    bool flag = false;
    int index = 0;
    string ans = "";
    for (int i = 1; i <= n; i++)
    {   
        if (now_vector[i] == '*' and !flag)
        {
            flag = true;
            index = i;
            ans += '*';
            continue;
        }
        if (flag)
        {
            ans += '-';
        } else {
            ans += now_vector[i];
        }
            
    }
    return ans;
}