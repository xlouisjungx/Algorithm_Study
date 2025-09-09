#include <iostream>
#include <vector>
using namespace std;

int n = 0, k = 0;
vector<int> before[10];
bool visited[10];
int ans = 0;

void dfs(int depth) {
    if (depth == n) {
        ans++;
        return;
    }
    
    for (int num = 1; num <= n; num++) {
        if (visited[num]) continue;
        
        bool ok = true;
        for (int pre : before[num]) {
            if (!visited[pre]) {
                ok = false;
                break;
            }
        }
        
        if (!ok) continue;
        
        visited[num] = true;
        dfs(depth + 1);
        visited[num] = false;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    cin >> n;
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        before[y].push_back(x);
    }
    
    dfs(0);
    cout << ans << "\n";
    
    return 0;
}