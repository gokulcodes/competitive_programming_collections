#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
    return a > 0 && b > 0 && a < b; 
}

vector<int> sizeArray(vector<int> arr){
    sort(arr.begin(), arr.end());
    auto it1 = lower_bound(arr.begin(), arr.end(), 0);
    auto it2 = upper_bound(arr.begin(), arr.end(), 0);
    int pos = it2 - it1;
    arr.erase(arr.begin(), arr.begin()+pos);    
    return arr;
}

void cutTheSticks(vector<int> arr) {
    vector<int> result;
    
    for(auto i = 0; i < (int)arr.size(); i++){
        vector<int> new_vector = sizeArray(arr);
        if(new_vector.size() == 0){
            break;
        }
        result.push_back(new_vector.size());

        int min_el = *min_element(new_vector.begin(), new_vector.end(), comp);
        for(auto j = 0; j < (int)arr.size(); j++){
           if(arr[j] != 0){
                arr[j] = arr[j] - min_el;
           }
        }

    }

    for(auto i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }

}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    while(n--){
        int el;
        cin >> el;
        arr.push_back(el);
    }

    cutTheSticks(arr);


    return 0;
}