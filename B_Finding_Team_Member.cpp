#include <iostream>
#include<vector>
#include <utility>
#include <algorithm>
using namespace std;
 
 
int paired[401][401];       // paired[i][j] = 1 iff i and j are paired
 
 
 
bool comparator(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b){
  return b.first < a.first;
}
 
 
 
int main(int argc, char *argv[]){
  int n;
  cin >> n;
  vector<pair<int, pair<int, int> > > strength;
  int temp;
  for (int i = 2; i <= 2 * n; i++) {
    for (int j = 1; j <= i - 1; j++) {
      cin >> temp;
      strength.push_back(make_pair(temp, make_pair(i, j)));
    }
  }
  sort(strength.begin(), strength.end(), comparator);
  // for (int i = 0; i < strength.size(); i++) {
  //   std::cout << strength[i].first << std::endl;
  // }
  int pairs[2 * n + 1] = {0};
  for (int i = 0; i < strength.size(); i++) {
    if(pairs[strength[i].second.first] == 0 && pairs[strength[i].second.second] == 0){
      pairs[strength[i].second.first] = strength[i].second.second;
      pairs[strength[i].second.second] = strength[i].second.first;
    }
  }
  for (int i = 1; i < 2 * n + 1; i++) {
    std::cout << pairs[i] << std::endl;
  }
  return 0;
}