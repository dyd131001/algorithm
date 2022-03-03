#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;


int arrsum(int n, vector<int> S){
    int result = 0;
    for(int i =1 ; i<n ; i++)
        result += S[i];
    return result;
}

void exchangesort(int n , vector<int>& S){
    for(int i=0 ; i < n ; i++){
        for(int j = i+1 ; j< n ; j++){
            if(S[i] > S[j])
                swap(S[i], S[j]);
        }
}
}


int main(void){
    vector<int> S;
    int temp;
    int n;
    cin >> n;
    for (int i= 0 ; i<n ; i++){
        cin >> temp;
        S.push_back(temp);
    }
    for(int i =0 ; i < n ; i++)
       cout << S[i] << ' ';
    cout << endl;
    exchangesort(n,S);
    for(int i =0 ; i < n ; i++)
        cout << S[i] << ' ';
}
