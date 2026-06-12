#include <iostream>
#include <algorithm>
using namespace std;

long long A[200005];
long long B[200005];

int main()
{
    int N, M;
    cin >> N >> M;

    for(int i = 0; i < N; i++)
        cin >> A[i];

    for(int i = 0; i < M; i++)
        cin >> B[i];

    sort(A, A + N);
    sort(B, B + M);

    int i = 0;
    int j = 0;
    int ans = 0;

    while(i < N && j < M)
    {
        if(B[j] <= 2 * A[i])
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    cout << ans;

    return 0;
}
