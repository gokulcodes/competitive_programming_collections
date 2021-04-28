#include <iostream>
#include <string>

using namespace std;
int minimumNumber(int n, string password) {
    int count, dig, low, up, special = 0;
    if(n >= 6){
        for(int i = 0; i < n; i++){
            int el = int(password[i]);
            count = 0;
            if(el >= 65 && el <= 90){
                up++;        
            }else if(el >= 97 && el <= 122){
                low++;                
            }else if(el >= 48 && el <= 57){
                dig++;    
            }else if(
                (el >= 32 && el <= 47) 
                || 
                (el >= 58 && el <= 64) 
                || 
                (el >= 91 && el <= 96) 
                || (el >= 123 && el <= 126)
            ){
                special++;                
            }
        }
        if(dig == 0){
            count++;   
        }
        if(low == 0){
            count++;   
        }
        if(up == 0){
            count++;   
        }
        if(special == 0){
            count++;   
        }
    }else{
        count = 6 - n;
    }
    return count;
}


int main(){
    string s;
    cin >> s;
    int n = s.length();
    cout << minimumNumber(n, s) << endl; 
    return 0;
}