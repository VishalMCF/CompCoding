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
    int n,k,x; cin >> n >> k >> x;
    if(k==1 && x == 1){
        cout << "NO\n";
        return;
    }
    if(n%2==0){
        cout << "YES\n";
        if(x!=2){
            int times = n/2;
            cout << times << "\n";
            for(int i=0; i<times; i++){
                cout << 2 << " ";
            }
            cout << "\n";
        } else {
            cout << n << "\n";
            for(int i=0; i<n; i++){
                cout << 1 << " ";
            }
            cout << "\n";
        }
    } else {
        if(k<=2 && x==1){
            cout << "NO\n";
            return;
        } else if(k >=2 && x!=1) {
            cout << "YES\n" << n << "\n";
            for(int i=0; i<n; i++){
                cout << 1 << " ";
            }
            cout << "\n";
        } else if (k>=3 && x==1) {
            cout << "YES\n";
            int times = 0;
            while(n%3 != 0){
                n -= 2;
                times++;
            }
            cout << times+n/3 << "\n";
            for(int i=0; i<times;i++){
                cout << 2 << " ";
            }
            for(int i=0; i<n/3; i++){
                cout << 3 << " ";
            }
            cout << "\n";
        }
    }
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
