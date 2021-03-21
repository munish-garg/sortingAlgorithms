#include<iostream>
using namespace std;
void quickSort(int a[], int s, int e){
    //base case..
    if(s>=e){
        return ;
    }
    int idx = s-1, i = s;
    //Since, we have not maintained any region of the smaller elements..
    int pivot = a[e];
    for(; i<e; i++){
        if(a[i]<= pivot){
            idx++;
            swap(a[idx], a[i]);
        }
    }
    //Now the idx points to the last element of the smaller region..
    //So, after this element, we have to place the pivot element so that the entire region can be bifurcated..
    swap(a[e], a[idx+1]);
    idx++;
    quickSort(a, s, idx-1);
    quickSort(a, idx+1, e);
    return;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a, 0, n-1);
    for(int i = 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}