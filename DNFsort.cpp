//Used to sort the array of 0, 1 and 2 in a single pass...
#include<iostream>
using namespace std;
void dnf_sort(int *a, int n){
    int low = 0, mid = 0, high = n-1;
    while(mid<high){
        if(a[mid] == 0){
            swap(a[low], a[mid]);
            mid++;
            low++;
        }
        if(a[mid] == 1){
            mid++;
        }
        if(a[mid] == 2){
            swap(a[mid], a[high]);
            high--;
        }
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dnf_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}