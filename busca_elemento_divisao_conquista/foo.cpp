#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxr4(vector<int>& v, int p, int r) {   
    int x, y; 
    int m = (p + r)/2; 
    if (p == r) return v[p];
    x = maxr4(v, p, m);
    y = maxr4(v, m+1, r);
    if (x > y) return x; 
    else return y;
}


int maxVal2(const vector<int>& A, int init, int end) {
    if(end - init <= 1)
        return max(A[init], A[end]);
    else{
        int m = (init + end)/2;
        int v1 = maxVal2(A,init,m);
        int v2 = maxVal2(A,m+1,end);
        return max(v1,v2);
    }
}



int main(){

    vector<int> array;

    array = {111, 122, 15, 66, 88, 1, 2, 99, 45};

    for(int i = 0; i< array.size(); i++){
        cout << array[i] << ' ';
    }
    cout << endl;

    // cout << maxVal2(array, 0, array.size()-1) << endl;

    cout << maxr4(array, 0, array.size()-1) << endl;


    return 0;
}