#include<iostream>
#include<climits>
using namespace std;
void countingSort(int* a, int s, int e){
    int largest = INT_MIN;
    for(int i=0;i<=e;i++){
        if(a[i]>largest){
            largest = a[i];
        }
    }
    int size = largest+1;
    int freq[size] = {0} ;
    for(int i=0;i<=e;i++){
        freq[a[i]]++;
    }
    //In this way, the frequency of every element is stored in the frequency array..
    int j = 0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0){
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    countingSort(a, 0, n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}