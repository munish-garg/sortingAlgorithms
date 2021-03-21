//What we have to do is that sort the students according to their marks using the bucket like structure...
//Just like bucket can store many objects, the particular element wil store many student objects....
#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
class Student{
    public:
        int marks;
        string name;
};
void bucketSort(Student a[], int s, int e){
    int largest = INT_MIN;
    for(int i=0;i<e;i++){
        if(a[i].marks > largest){
            largest = a[i].marks;
        }
    }
    int size = largest + 1;
    vector<Student> v[size];
    for(int i=0;i<e;i++){
        int m = a[i].marks;
        v[m].push_back(a[i]);
    }
    //We have to print the toppers first....
    for(int i = size-1;i>=0;i--){
        int marker = -1;
        for(vector<Student>::iterator it = v[i].begin();it!=v[i].end();it++){
            marker = 0;
            cout<<it->marks<<" "<<it->name<<"  ";
        }
        if(marker == 0){
            cout<<endl;
        }
    }
}
int main(){
    int n; cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].marks>>s[i].name;
    }
    bucketSort(s, 0, n);
    return 0;
}