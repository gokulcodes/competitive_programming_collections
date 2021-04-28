#define ll long long
#include <bits/stdc++.h>

using namespace std;

//2 4 8 6

// 3 4 7

int digit(){
    ll k, d0, d1=0;
    cin >> k >> d0 >> d1;
    ll lastDigit  = (d0+d1)%10;
    ll sum = d0+d1+lastDigit;

    if(k == 2){
        if((d0+d1)%3){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
        return 0;
    }

    ll remDigit = k - 3;
    
    while(remDigit > 0){
        cout << " " << remDigit << " " << lastDigit << " " << sum << endl;
        if(lastDigit == 6){
            ll sets = remDigit / 4;
            sum += 20*(sets);
            cout << remDigit << endl;
            remDigit = remDigit - sets * 4;
            if(remDigit == 0){

            }else if(remDigit == 1){
                sum += 2;
            }else if(remDigit == 2){
                sum += 6;
            }else if(remDigit == 3){
                sum += 14;
            }
            remDigit = 0;
            break;
        }else if(lastDigit == 0){
            break;
        }else {
            lastDigit = (lastDigit*2)%10;
            sum += lastDigit;
            remDigit--;
        }

    }

    if(sum%3 == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}

int main(){
    int ts;
    cin >> ts;
    while (ts--){
        digit();
    }

    return 0;
}