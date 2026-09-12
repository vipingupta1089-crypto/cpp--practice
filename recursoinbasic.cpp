#include<iostream>
using namespace std;
void printfrecu(vector<int>&arr,int idx){
    if(idx==-1)return ;
    cout<<arr[idx]<<" ";
    //printfrecu(arr,idx+1); starting array index se print hua hai
printfrecu(arr,idx-1);//reverse array print karane ke liye
}
int main(){
    vector<int>arr={3,4,5,6,7,8};
    printfrecu(arr,arr.size()-1);
}