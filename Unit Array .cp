#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

//  vector<int> vect;
//  int arr[n];
//  unordered_set<int, int> uset;
//  unordered_map<int, int> umap;

// str.find(substr) != std::string::npos           ->      condition to check substring

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
    
    take_vect_input(&vect,n);
    
    lli sum = 0;
    
    int multiple = 1;
    
    for(int i=0; i<vect.size(); i++){
        multiple = multiple*vect[i];
        sum += vect[i];
    }
    int operations = 0;
    while(sum < 0 || multiple == -1){
        operations += 1;
        sum += 2;
        multiple = (multiple == -1 ? 1 : -1);
    }
    cout << operations << "\n";
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
