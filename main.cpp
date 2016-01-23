#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int number;
    cout<<"enter a number please"<<endl;
    cin>>number;

    queue<vector<int> > subsets;
    subsets.push(vector<int>());


    for(int i=1;i<=number;++i)
    {
        vector<int> temp;
        while(temp.size()<i)
        {
            temp = subsets.front();
            subsets.push(temp);
            subsets.pop();
            temp.push_back(i);
            subsets.push(temp);
        }
    }
    int myCount = subsets.size();
    while(!subsets.empty()){
        vector<int> element = subsets.front();
        subsets.pop();
        cout<<"{ ";
        for(int i=0; i<element.size();i++)
            cout<<element[i]<<" ";
        cout<<"}"<<endl;
    }
    cout << "Total count: " << myCount << endl;
    return 0;
}
