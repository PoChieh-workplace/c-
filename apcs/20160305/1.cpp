#include<iostream>
using namespace std;
int num,a[999999],maxh=-1,minh=999;

int main(){
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> a[i];
        if(a[i]>=60){
            minh = (a[i]<minh?a[i]:minh);
        }
        else{
            maxh = (a[i]>minh?a[i]:maxh);
        }
    }
    cout << 1;
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;i++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i] =a[j];
                a[j] =tmp;
            }
        }
    }
    cout << 2;
    for(int i=1;i<num;i++){
        cout << ' ' << a[i];
    }
    cout << endl;
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
    cout << 3;
}
