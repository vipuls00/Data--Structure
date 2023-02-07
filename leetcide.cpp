#include<iostream>
#include<vector>
using namespace std;
int main()
{   int n,count=0; 
    string element;
    cin>>n;
    vector<string> vec1;
    vector<string> vec2;
    cout<<"enter lements ";


    for(int i=0;i<n;i++)
    {
        cin>>element;
        vec1.push_back(element);
    }
    int m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
      for(int j=i;i<n;j++)
      {
        if(vec1[i]==vec1[j])
        {
          count++;
        }
      }
      if(count<m) 
      {
        vec2.push_back(vec1.at(i));
      }
    }
    for(int i=0;i<n;i++)
    {  
        cout<<vec2.at(i);

    }

    return 0;
}