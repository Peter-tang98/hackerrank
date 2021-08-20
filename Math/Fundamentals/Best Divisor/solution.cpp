
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
*/

int s(int a, int r = 0){
  while (a > 0)
  {
    r += a % 10;
    a /= 10;
  }
  return r;
}

int main(){
  int n, max = 0;
  cin >> n;
  for(int i = 1; i <= n/2; i++)
    if (n % i == 0)
       max = (s(i) > s(max) || (s(i) == s(max) && i < max)) ? i : max;
    
    cout << ((s(n) > s(max) || (s(n) == s(max) && n < max)) ? n : max) << endl;
}

// input
12
    
// output
6

