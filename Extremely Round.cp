#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

//  vector<int> vect;
//  int arr[n];
//  unordered_set<int, int> uset;
//  unordered_map<int, int> umap;

// str.find(substr) != std::string::npos           ->      condition to check substring

int findGCD(const std::vector<int>& numbers) {
    // Use std::accumulate to compute the GCD of the entire vector
    return std::accumulate(numbers.begin(), numbers.end(), 0, [](int a, int b) {
        return std::gcd(a, b);
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
    if(n <= 10){
        cout << n << "\n"; return;
    }
    int cnt = 10;
    int add = 10;
    int num = 10;
    while(num <= n){
        num += add;
        if(num <= n){
            cnt++;
        }
        if(num/add == 10){
            add = add*10;
        }
    }
    cout << cnt << "\n";
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
