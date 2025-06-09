#include<iostream>
#include<algorithm>
#include<vector>
#include <numeric>

using namespace std;

void print(vector<int> &v){
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec = {9,60,90,8,45,87,90,69,69,55,7};

    // 1 COUNTING
    
    int n = count(vec.begin(), vec.end(), 69);
    int m = count_if(vec.begin(), vec.end(), [](int x){return x<10;});
    cout<<"n "<<n<<endl;
    cout<<"m "<<m<<endl;

    // 2 MIN and MAX

    vector<int>::iterator itr;
    itr = max_element(vec.begin(), vec.end());
    cout<<"max "<<*itr<<endl;
    itr = min_element(vec.begin(), vec.end());

    // 3 linear searching

    itr = find(vec.begin(), vec.end(), 55);
    itr = find_if(vec.begin(), vec.end(), [](int x){return x>80;});
    cout<<"find if "<<*itr<<endl;

    vector<int> sub = {45, 87, 90};
    itr = search(vec.begin(), vec.end(), sub.begin(), sub.end());
    cout<<"search "<<*itr<<endl;

    // 4 MOVE
    vector<int> v1 = {9,60,70,8,45,87,90};
    vector<int> v2 = {0,0,0,0,0,0,0,0,0,0,0};
    vector<int> v3 = {0,0,0,0,0,0,0,0,0,0,0};

    // copy
    copy(v1.begin(), v1.end(), //SOURCE
     v2.begin())  ;              //DESTINATION

    // print(v1);
    // print(v2);

    copy_if(v1.begin(), v1.end(),
        v2.begin(),
        [](int x){ return x>80;});

    // print(v1);
    // print(v2);

    // 5 TRANSFORM
    transform(v1.begin(), v1.end(),  //SOURCE
        v3.begin(),                    //DESTINATION
        [](int x){return x-1;});       //OPERATION

    // print(v1);
    // print(v3);

    transform (v1.begin(), v1.end(),   //SOURCE #1
        v2.begin(),                    // SOURCE #2
        v3.begin(),                    // DESTINATION #3
        [](int x, int y){return x+y;});
        // v3[0] = v1[0] + v2[0] ...
    
    // 6 BINARY SEARCH
    bool found = binary_search(v1.begin(), v1.end(), 90);
    // v1 should be in sorted order!

    // 7 MERGE
    // CAN ALSO STORE DUPLICATES
    vector<int> p1 = {8,9,9,10};
    vector<int> p2 = {7,9,10};
    vector<int> vec_out;
    vec_out.resize(p1.size() + p2.size());


    merge(p1.begin(), p1.end(),
        p2.begin(), p2.end(),
        vec_out.begin());

    print(vec_out);

    // 8 SET OPERATIONS

    // UNION
    set_union(p1.begin(), p1.end(),
            p2.begin(), p2.end(),
            vec_out.begin());
    // if X is in both p1 and p2, only one P is kept in vec_out;
    set_intersection(p1.begin(), p1.end(),
    p2.begin(), p2.end(),
    vec_out.begin());

    // PARTIAL SUM
    vector<int> p3(p1.size());
    partial_sum(p1.begin(), p1.end(), p3.begin());
    // p2[0] = p1[0];
    // p2[1] = p1[0] + p1[1];
}



