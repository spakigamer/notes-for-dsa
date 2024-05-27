#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> a(2,9);
    int y=upper_bound(a.begin(),a.end(),9)-a.begin();
    int h=lower_bound(a.begin(),a.end(),2)-a.begin();
    cout<<y<<endl<<h<<endl;
    return 0;
    // Lower Bound:
    // The lower bound of a value in a sorted sequence is the iterator pointing 
    // to the first element that is not less than the given value. In other words, 
    // it points to the smallest element that is greater than or equal to the given value.

    // Upper Bound:
    // The upper bound of a value in a sorted sequence is the iterator 
    // pointing to the first element that is greater than the given value. 
    // It points to the smallest element that is strictly greater than the given value.

}