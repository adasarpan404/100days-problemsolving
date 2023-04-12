#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {4, 5, 1, 2, 3};
    int n = sizeof(a)/sizeof(a[0]);

    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
        {
          if (a[j] < a[min_idx])
              min_idx = j;
        }

        if (min_idx!=i)
            swap(a[min_idx], a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}