#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> year;
    int num;
    int temp;
    cout << "How many years do you want to enter? ==> ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter year # " << (i + 1) << " ==> ";
        cin >> temp;
        year.push_back(temp);
    }
    cout << endl;
    for (int i = 0; i < year.size(); i++)
    {
        cout << year.at(i) << endl;
    }
}