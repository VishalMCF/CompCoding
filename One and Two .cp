#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

//  vector<int> vect;
//  int arr[n];
//  unordered_set<int, int> uset;
//  unordered_map<int, int> umap;

// str.find(substr) != std::string::npos           ->      condition to check substring

int findGCD(const vector<int>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0, [](int a, int b) {
        return gcd(a, b);
    });
}

bool checkSubstring(string* s, string* x){
    
}

void print_vect(vector<int>* vect){
    for(int i=0; i<vect->size(); i++){
        cout << vect->at(i) << " ";
    }
    cout << "\n";
}

lli vect_sum(vector<int>* vect){
    lli sum = accumulate(vect->begin(), vect->end(),0);
    return sum;
}

void take_vect_input(vector<int>* vect, int n){
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        vect->push_back(temp);
    }
}

void solve(){
    int n; cin >> n;
    vector<int> vect;
    int total2 = 0;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        vect.push_back(temp);
        if(temp==2){
            total2++;
        }
    }
    int total = 0;
    for(int i=0; i<n; i++){
        if(vect[i]==2){total++;}
        if(total*2 == total2){
            cout << (i+1) << "\n"; return;
        }
    }
    cout << -1 << "\n";
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
    while(t--){
        solve();    
    }
	return 0;
}
