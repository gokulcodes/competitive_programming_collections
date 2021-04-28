#include <bits/stdc++.h>

using namespace std;
int reverseInt(int el){
    int rev=0, rem=0;
    while(el!=0){
        rem = el % 10;
        rev = rev*10 + rem;
        el /= 10;
    }
    return rev;
}

// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
    int count = 0;
    for(int s = i; s <= j; s++){
        int dif = (s - reverseInt(s))%k;
        if(dif==0){
            count++;
        }
    }
    return count;
}


int main(){
    int i , j, k;
    cin >> i >> j >> k;
    cout << beautifulDays(i, j, k) << endl; 

    return 0;
}