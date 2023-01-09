#include <iostream>

using namespace std;

int arr[100001];
int inorder[100001];
int postorder[100001];

void preorder(int in_start, int in_end, int post_start, int post_end) {
  if (in_start > in_end || post_start > post_end) {
    return;
  }
  int root = arr[postorder[post_end]];
  int left = root - in_start;
  cout << inorder[root] << ' ';
  preorder(in_start, root - 1, post_start, post_start + left - 1);
  preorder(root + 1, in_end, post_start + left, post_end - 1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> inorder[i];
    arr[inorder[i]] = i;
  }
  for (int i = 1; i <= n; i++) {
    cin >> postorder[i];
  }
  preorder(1, n, 1, n);
}