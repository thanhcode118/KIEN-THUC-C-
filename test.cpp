#include <bits/stdc++.h>
using namespace std;
void merge( int a[], int l , int m, int r){
    vector<int>x(a+l,a+m+1);
    vector<int>y(a+m+1,a+r+1);
    int i=0, j=0;
    //i<x.size() && j<y.size() là i, j nhỏ hơn độ dài mảng;
    while(i<x.size() && j<y.size()){
        if (x[i]<=y[j]){
            a[l]=x[i]; i++;l++;    // chỉ so sánh dc 2  mảng có độ dài bằng nhau
        }
        else {
            a[l]=y[j];j++;l++;
        }
         // so sánh các phần tử hai mảng, nếu phần tử nào nhỏ hơn thì đẩy ra trước (a[l])
    }   
    while(i<x.size()){
        a[l]=x[i];i++;l++;
    }
    while(j<y.size()){
        a[l]=y[j]; j++;l++;
    }
    //i<x.size() va j<y.size() là kiểm tra thử có phần tử nào còn sót sau cái while
    //đầu tiên không, vì cái while đầu tiên chỉ xét chung 2 trường hợp, còn lỡ hai 
    //mảng đó có độ dài khác nhau thì sao?
}
// void merge la dung để sắp xếp hai mảng
// void mergeSort dùng để trộn hai mảng đã sắp xếp
// ở merge lại rồi sắp xếp 
void mergeSort(int a[], int l, int r){
    if (l<r){
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
}
}
int main(){
    int n=100;;
    int a[100];
    srand(time(NULL));
    for (int i=0;i<n;i++){
        a[i]=rand()%1000;
    }
    mergeSort(a,0,n-1);
    for (int x:a){
        cout<<x<<" ";
    }
    return 0;
}
