#include<iostream>

using namespace std;

const int N = 1e6+10;

void QuickSort(int q[], int l , int r)
{
    int i = l - 1, j = r + 1, x = q[(l + r) / 2];
    if(l >= r) return;
    while(i < j)
    {
        do i ++ ; while(q[i] < x);
        do j -- ; while(q[j] > x);
            if(i < j) swap(q[i] , q[j]);
    }
    QuickSort(q,l,j);
    QuickSort(q,j + 1,r);
}
//边界问题要注意
int main()
{
    int n;
    int q[N];
    scanf("%d",&n);
    for(int i = 0; i < n; i ++) scanf("%d", &q[i]);
    QuickSort(q,0,n - 1);
    for(int i = 0; i < n; i ++) printf("%d", q[i]);
    return 0;
}
