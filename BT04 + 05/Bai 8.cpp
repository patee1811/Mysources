#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> examinationTimes(N);
    for (int i = 0; i < N; ++i) {
        cin >> examinationTimes[i];
    }
    sort(examinationTimes.begin(), examinationTimes.end());
    int totalWaitingTime = 0;
    int currentTime = 0;
    for (int i = 0; i < N; ++i) {
        totalWaitingTime += currentTime;
        currentTime += examinationTimes[i];
    }

    cout << totalWaitingTime << endl;

    return 0;
}

