#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

struct sportsman {
    int number;
    int score;
   
    string toString(){
        return "number is " + to_string(number) + "; score is " + to_string(score);
    }
};

sportsman findWinner(int** result, int n, int m) {
    sportsman man = sportsman();
    for (int i = 0; i < n; i++)
    {
        int sumL = 0;
        for (int j = 0; j < m; j++)
        {
            sumL = sumL + result[i][j];
        }
        if(sumL>man.score){
            man.score = sumL;
            man.number = i;
        }
    }
    return man;
}

int main()
{
    int n=0, m=0;
    cout << "Enter n, m\n";
    cin >> n >> m;
    int** array = new int*[n+1];
    string input;
    int i = 0;
    while (i < n && getline(cin, input))
    {
        array[i] = new int[m+1];
        int number;
        int j = 0;
        stringstream ss(input);
        
        while (j<m && ss >> number) {
            array[i][j]=number;
            j++;
        }
        if (input != "") {
            i++;
        }
    }
    sportsman man = findWinner(array, n, m);
    cout << man.toString();
    
}


