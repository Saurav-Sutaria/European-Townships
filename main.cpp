#include<bits/stdc++.h>
using namespace std;

vector<int> split(string s){
    vector<int> ans;
    string num = "";
    for(auto i:s){
        if(i == ','){
            ans.push_back(stoi(num));
            num="";
        }else num += i;
    }
    ans.push_back(stoi(num));
    return ans;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("./input-small.txt", "r", stdin);
    // freopen("./output-small.txt", "w", stdout);
    // #endif

    #ifndef ONLINE_JUDGE
    freopen("./input-large.txt", "r", stdin);
    freopen("./output-large.txt", "w", stdout);
    #endif

    int t; cin>>t;
    for(int townships = 1;townships <=t; townships++){
        int n; cin>>n;
        float totalWalls = 0;
        for(int houses=0;houses<n;houses++){
            int totalRoom,r,s,h;
            cin.ignore();
            string inpStr;
            cin>>inpStr;
            vector<int> tempArr = split(inpStr);
            totalRoom = tempArr[0];
            r = tempArr[1];
            s = tempArr[2];
            h = tempArr[3];
            totalWalls += (r*3) + (s*4) + (h*6);
        }
        float accWalls = (totalWalls/3.0);
        float accQuant = accWalls * 1.5;
        float regWalls = (totalWalls*(2.0/3.0));
        float regQuant = regWalls*2.25;
        float totalTime = (accWalls*2.5) + (regWalls*3.25);
        cout<<"Case #"<<townships<<": ";
        cout<<fixed<<setprecision(2)<<totalTime<<", "<<accQuant<<", "<<regQuant<<endl;
    }
}