#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main() {
  long long N, M;
  long long a, b, k;
  long long candies = 0;
  cin >> N >> M;
  for(long long i = 0; i < M; i++)
  {
    cin >> a >> b >> k;
    candies = candies + (b - a + 1) * k;
  }
  cout << candies / N << endl;
  return 0;
}


