// �ϰ� ������
// https://www.acmicpc.net/problem/2309
#include <bits/stdc++.h>
using namespace std;

int all_heights[9];
int sum;
pair<int, int> false_heights;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ���� ���ϱ�
    for (int i = 0; i < 9; i++) {
        cin >> all_heights[i];
        sum += all_heights[i];
    }

    // ��¥ ������ ã��
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - 100 == all_heights[i] + all_heights[j]) {
                false_heights = {all_heights[i], all_heights[j]};
            }
        }
    }

    // �������� ����
    sort(all_heights, all_heights + 9);

    // ���
    for (int height : all_heights)
        if (height != false_heights.first && height != false_heights.second) {
            cout << height << '\n';
        }
}