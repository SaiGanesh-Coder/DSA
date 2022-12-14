#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> *vp = new vector<int>;   //dynamic
    vector<int> v;    //static

    vector<int> v1(10); //giving size here is optional
    vector<int> v2(10,-2);  // initialize all the 10 values will be 10

    sort(v2.begin(),v2.end());

    for(int i=0;i<100;i++){
        cout<<"Size "<<v.size()<<endl;
        cout<<"Size []"<<vp[0].size()<<endl;
        cout<<"Capacity "<<v.capacity()<<endl;
        v.push_back(i+1);
    }
    /*
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1]=100;
    // never use [] to insert elements
    //v[4]=1002;            
    //v[5]=1234;
    
    v.push_back(23);
    v.push_back(234);

    v.pop_back();   // it will remove the last element which was added
                */

    /*for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;     // or v.at(i)  both are safe to write in for loop
    }*/

    /*cout<<v.at(4)<<endl;         // at function will check wheather the index exists or not
    cout<<v.at(6)<<endl;*/

    /*cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;   // will show garbage value as memory is not allocated
    cout<<v[6]<<endl;   // ""  ""*/
    return 0;
}