#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int>a={1,2,3,4,5};
vector<int>b={1,3,4,5,6,7};
vector<int>res(11);
auto it=set_union(a.begin(),a.end(),b.begin(),b.end(),res.begin());
res.resize(it-res.begin());   //(**)
for(int x:res) cout<<x<<" ";
}
//(**): dùng để chỉnh kích thước trong mảng res,
//vì chưa chắc mảng res đã đủ 11 số, nếu dư thì sẽ thêm nhiều giá trị rác
//set_union
//set_intersection
//set_difference
//set_symmetric_difference