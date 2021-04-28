#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, count, k = 0;
    cin >> n >> k;
    
    for(int i = 0; i != n; i++){
        int el;
        cin >> el;
        if(el > k){
            count++;
        }
    }
    cout << count;
    return 0;
}
/*
Hello, I am Gokul. Currently, Pursuing bachelors in Computer Science. My Ultimate goal is to land a job at Google. Knowledge in Web, Mobile and competitive coding contest and Product Design. Presently, I've been working on Web, Mobile and Competitive Programming contest.
*/