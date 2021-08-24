#pragma once
#include<iostream>
#include<string>
using namespace std;
#include<cstdlib>
#define randcattalk 3//隨機跟貓說話變量
//#define furnitureMyRoomNumbers 10//查看自身房間的家具數目-完成
//跟貓說話-完成 之後在加主角對話
//查看家具-完成
//查看房間顏色-完成
//退出房間介面-完成
class Room{
public:

  void showRoomMenu();
  string RoomColor;//房間顏色
  string CatName;//貓的名子
  string *furniture;//家具數量
  int RoomSelect=-1;
  Room(string catName="Froge",string roomColor="gray"){
    furniture=new string[10];//家具可以放10個
    this->RoomColor=roomColor;
    this->CatName=catName;
    furnitureNumbers=furniture->size()-1;
   
  }
  void TalkeToCat();
  void CheckRoomColor();
  void CheckRoomFurniture();
  int furnitureNumbers=0;

};
void Room::showRoomMenu(){
  cout<<"|----------------------|"<<endl;
   cout<<"|                      |"<<endl;
   cout<<"|     1.跟貓說話       |"<<endl;
   cout<<"|                      |"<<endl;
   cout<<"|     2.查看家具       |"<<endl;
   cout<<"|                      |"<<endl;
   cout<<"|     3.查看房間顏色   |"<<endl;
   cout<<"|                      |"<<endl;
   cout<<"|     4.退出房間介面   |"<<endl;
  cout<<"|                      |"<<endl;
   cout<<"|----------------------|"<<endl;

}
void Room::TalkeToCat(){
  srand((unsigned)time(NULL));
  int CatTalk=rand()%randcattalk+1;//隨機挑一句話
  if(CatTalk==1){
    cout<<CatName<<":記得出門前要餵我喔!"<<endl;
    
  }
  else if(CatTalk==2){
    cout<<CatName<<":路上小心，記得買罐罐給我!"<<endl;
    
  }
  else if(CatTalk==3){
    cout<<CatName<<":為啥你都這麼喜歡看ptt?"<<endl;
     
  }
 

}
void Room::CheckRoomFurniture(){
    cout<<"現在擺設的家具或物品有:"<<endl;
    //furniture[0]="公仔";
    
    for(int i=1;i<=furnitureNumbers;i++){
        cout<<*(furniture+i)<<endl;
    }
    //cout<<furnitureNumbers<<endl;
}
void Room::CheckRoomColor(){
    cout<<"現在房間顏色是:"<<RoomColor<<endl;
    //system("color 8F");視窗背景灰色
}


