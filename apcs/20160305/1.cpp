#include<iostream>
using namespace std;
int num,a[999999],maxh=-1,minh=999;


void resort(int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;i++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i] =a[j];
                a[j] =tmp;
            }
        }
    }
}

int main(){
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> a[i];
        if(a[i]>=60){
            minh = (a[i]<minh?a[i]:minh)
        }
        else{
            maxh = (a[i]>minh?a[i]:maxh)
        }
    }
    resort(num);
    cout << a[i];
    for(int i=1;i<n;i++){
        cout << ' ' << a[i] <<endl;
    }
    if(maxh==-1){
        cout << "best case" << endl;
    }
    else{
        cout << maxh << endl;
    }
    if(minh==-1){
        cout << "worse case" << endl;
    }
    else{
        cout << minh << endl;
    }
}
