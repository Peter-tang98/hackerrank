#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'strangeGrid' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER r
 *  2. INTEGER c

int strangeGrid(int r, int c) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int r = stoi(first_multiple_input[0]);

    int c = stoi(first_multiple_input[1]);

    int result = strangeGrid(r, c);

    fout << result << "\n";

    fout.close();

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
 */

int main() {
  long long r, c;
  cin >> r >> c;
  
  long long r1[5] = {0, 2, 4, 6, 8};
  long long r2[5] = {1, 3, 5, 7, 9};
  
  if(r % 2 == 0){
      long long res, val = r/2;
      val = val - 1;
      res = (val * 10) + r2[c - 1];
      cout << res << endl;
  }
  else if(r % 2 != 0){
      long long res, val = (r + 1) / 2;
      val = val - 1;
      res = (val * 10) + r2[c - 1];
      res = res - 1;
      cout << res << endl;
  }
  return 0;
}
