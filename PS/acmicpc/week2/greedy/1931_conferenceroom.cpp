#include <iostream>
#include <vector>

using namespace std;

// 빨리 끝나는 회의를 먼저 배정 

int main (){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second; // 시작, 끝
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { //std::sort 사용법, 세번째 인자에 람다식 사용 , [] -> 캡쳐, () -> 매개변수, {} -> 함수 본문
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    int now = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (now <= v[i].first) {
            now = v[i].second;
            ans+=1;
        }
    }
    cout << ans << '\n';
    return 0;
}