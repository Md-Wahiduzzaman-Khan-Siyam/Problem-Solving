#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int z = 1; z <= t; z++){
        int cy = 10;
        vector <string> name;
        vector <string> atck;
        vector <string> dffn;
        int att[10], dff[10], i = 0;
        while(cy--){
            string nm; cin >> nm;
            name.push_back(nm);
            cin >> att[i] >> dff[i];
            i++;
        }

        for(i = 0; i < 10; i++){
            int ind = i;
            if(att[i] == -1) continue;
            for(int j = 0; j < 10; j++){
                if(att[ind] < att[j] && att[ind] > -1){
                     ind = j;
                }
                else if(att[ind] == att[j]){
                    if(dff[ind] > dff[j]){
                        ind = j;
                    }
                    else if(dff[ind] == dff[j]){
                        if(name[ind] > name[j]){
                            ind = j;
                        }
                    }
                }
            }
            atck.push_back(name[ind]);
            att[ind] = -1;
            if(atck.size() == 5) break;
        }
        for(i = 0; i < 10; i++){
            if(att[i] > -1) dffn.push_back(name[i]);
        }

        sort(atck.begin(), atck.end());
        sort(dffn.begin(), dffn.end());
        cout << "Case " << z << ":" << endl << "(";

        for(i = 0; i < 5; i++){
            cout << atck[i];
            if(i+1 < 5) cout << ", ";
        } cout << ")" << '\n' << "(";

        for(i = 0; i < 5; i++){
            cout << dffn[i];
            if(i+1 < 5) cout << ", ";
        } cout << ")" << '\n';
    }
}

