#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    bool cons = true;
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            if(cons){
                for(int j = 1; j < m; j++){
                    cout << ".";
                }
                cout << "#";
                cout << endl;
                cons = false;
            }else{
                cout << "#";
                for(int j = 1; j < m; j++){
                    cout << ".";
                }
                cout << endl;
                cons = true;
            }
        }else{
            for(int k = 1; k <= m; k++){
                cout << "#";
            }
            cout << endl;
        }
    }


    return 0;
}