#include <iostream>



using namespace std;

int main()
{
    char myword[] = { 'C', 'c', 'G', 'g' };
    cout << "Enter the line\n";
    string input;
    cin >> input;
    float cnt = 0;
    for (int i = 0; i < input.size(); i++)
    {

        char* foo = std::find(std::begin(myword), std::end(myword), input[i]);
        if (foo != std::end(myword)) {
            cnt++;
        }
    }

    cout << cnt / input.size() * 100;





}


