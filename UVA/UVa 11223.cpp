#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

char match(string x)
{
	if(x == ".-") return 'A';
	else if(x == "-...") return 'B';
	else if(x == "-.-.") return 'C';
	else if(x == "-..") return 'D';
	else if(x == ".") return 'E';
	else if(x == "..-.") return 'F';
	else if(x == "--.") return 'G';
	else if(x == "....") return 'H';
	else if(x == "..") return 'I';
	else if(x == ".---") return 'J';
	else if(x == "-.-") return 'K';
	else if(x == ".-..") return 'L';
	else if(x == "--") return 'M';
	else if(x == "-.") return 'N';
	else if(x == "---") return 'O';
	else if(x == ".--.") return 'P';
	else if(x == "--.-") return 'Q';
	else if(x == ".-.") return 'R';
	else if(x == "...") return 'S';
	else if(x == "-") return 'T';
	else if(x == "..-") return 'U';
	else if(x == "...-") return 'V';
	else if(x == ".--") return 'W';
	else if(x == "-..-") return 'X';
	else if(x == "-.--") return 'Y';
	else if(x == "--..") return 'Z';
	else if(x == "-----") return '0';
	else if(x == ".----") return '1';
	else if(x == "..---") return '2';
	else if(x == "...--") return '3';
	else if(x == "....-") return '4';
	else if(x == ".....") return '5';
	else if(x == "-....") return '6';
	else if(x == "--...") return '7';
	else if(x == "---..") return '8';
	else if(x == "----.") return '9';
	else if(x == ".-.-.-") return '.';
	else if(x == "--..--") return ',';
	else if(x == "..--..") return '?';
	else if(x == ".----.") return '\'';
	else if(x == "-.-.--") return '!';
	else if(x == "-..-.") return '/';
	else if(x == "-.--.") return '(';
	else if(x == "-.--.-") return ')';
	else if(x == ".-...") return '&';
	else if(x == "---...") return ':';
	else if(x == "-.-.-.") return ';';
	else if(x == "-...-") return '=';
	else if(x == ".-.-.") return '+';
	else if(x == "-....-") return '-';
	else if(x == "..--.-") return '_';
	else if(x == ".-..-.") return '"';
	else if(x == ".--.-.") return '@';
}

int main()
{
	int t, z = 0; cin >> t;
	cin.ignore();
	while(t--){
		z++;
		string s;
		getline(cin, s);
		cout << "Message #" << z << endl;
		string a;
		int x = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] != ' '){
				a.push_back(s[i]);
				x = 0;
			}
			else{
				x++;
				if(x > 1) cout << " ";
				else{
					cout << match(a);
					a.clear();
				}
			}
		}
		if(a.size() != 0) cout << match(a);
		cout << '\n';
		if(t) cout << '\n';
	}
}

