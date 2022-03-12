#include<iostream>
 
using namespace std;
 
struct SV{
char HovaTen[20];
int mssv,lop;
};

SV a;
 
void NhapTT(){
  fflush(stdin);
  cout<<"\n Nhap Sinh vien: ";
  cout<<"\n - Ho ten: ";
  gets(a.HovaTen);
  cout<<"\n - mssv: ";
  cin>>a.mssv;
  cout<<"\n - Lop: ";
  cin>>a.lop;
}
 
void InTT(){
cout<<"\n In sinh vien: ";
cout<<"\n - Ho ten: "<<a.HovaTen;
cout<<"\n - Ma so sinh Vien: "<<a.mssv;
cout<<"\n - Ten Lop:"<<a.lop;
}
int main(){
  NhapTT();
  InTT();
 
return 0;
}

