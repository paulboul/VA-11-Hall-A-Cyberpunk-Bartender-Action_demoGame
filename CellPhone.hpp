#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include "Room.hpp"
#include<fstream>
#include "menu.h"
#include "News.hpp"
using namespace std;
#define phoneheightsize 15//手機高度
static int month=1;//月
static int day=1;//日

//手機內容
//顯示菜單大致完成
//當天日期計算
//ptt論壇-完成
//保存資料-保存日期和家具
//退出手機菜單 完成
class CellPhone{
public:
    void showCellPhoneMenu();//展示手機的app菜單
    int PhoneSelect=-1;//手機選項變量
    void PTTReddit();//ptt論壇
    void SaveFile(Room &);//保存資料
    News news;//創建新聞對象放入ptt
   
};

void CellPhone::showCellPhoneMenu(){
  while(1){

        cout<<"|----------------------|"<<endl;
        for(int i=0;i<phoneheightsize;i++){
              if(i==1){
                cout<<"|    MONTH:"<<month<<"-"<<"DAY:"<<day<<"     |"<<endl;
              }
              else if(i==3){
                cout<<"|    1.ptt論壇         |"<<endl;
              }
              else if(i==5){
                 cout<<"|       /\\_/\\          |"<<endl;
                 cout<<"|      ( o.o )         |"<<endl;
                 cout<<"|       > ^ <          |"<<endl;
              }
              else if(i==8){
                cout<<"|    2.保存資料        |"<<endl;
              }
              else if(i==11){
                cout<<"|    3.退出手機菜單    |"<<endl;
                return;
              }
             cout<<"|                      |"<<endl;
        }
        cout<<"|----------------------|"<<endl;

}
}
void CellPhone::PTTReddit(){//ptt論壇
      
       
       news.ProduceNews();
    
      
}
void CellPhone::SaveFile(Room &room){//保存資料
    ofstream ofile;
    ofile.open("Save.txt",ios::out);
    if(ofile.is_open()){
      cout<<"The file is open"<<endl;
    }
    else{
      cout<<"is not open"<<endl;
    }
    ofile<<month<<" "<<day<<"\n";//寫入日期
    for(int i=0;i<10;i++){//寫入家具
        ofile<<(char*)room.furniture[i].c_str()<<"\n";
    }
    


    ofile.close();

}

