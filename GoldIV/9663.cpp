#include <iostream>
#define MAX 15
using namespace std;

int arr[MAX];
int n, res = 0;

bool check(int level)
{
  for(int i = 0; i < level; i++)
    if(arr[i] == arr[level] || abs(arr[level] - arr[i]) == level - i){
      return false;
    }
  return true;
}

void queen(int x)
{
  if(x == n){
      res++;
  }
  else{
    for(int i = 0; i < n; i++){
      arr[x] = i; 
      if(check(x)){
        queen(x+1);
      }  
    }
  }
}
int main() {
    cin >> n;
    queen(0);
    cout << res;
}