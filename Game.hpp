#pragma once
#include<iostream>
#include<string>
using namespace std;

#include "CellPhone.hpp"
#include "Room.hpp"
#include "Shop.hpp"
#include "BarGame.hpp"
class Game{
public:
   
    void EnterGame();//進入遊戲，提供四個選項操作
    int GameSelect=-1;//遊戲選項
    CellPhone myselfphone;//手機對象
    Room myroom;//房間對象
    Shop shop;//商店對象
    BarGame bargame;//酒吧對象
};
void Game::EnterGame(){
      
      while(true){
      cout<<"|----------------------|"<<endl;
      cout<<"|                      |"<<endl;
      cout<<"|      1.房間狀態      |"<<endl;
      cout<<"|                      |"<<endl;
      cout<<"|      2.手機狀態      |"<<endl;
      cout<<"|                      |"<<endl;
      cout<<"|      3.去商店逛逛    |"<<endl;
      cout<<"|                      |"<<endl;
      cout<<"|      4.去酒吧工作    |   "<<endl;
      cout<<"|                      |"<<endl;
      cout<<"|      5.返回開頭介面  |   "<<endl;
      cout<<"|----------------------|"<<endl;
      cout<<"輸入選擇"<<endl;
      cin>>GameSelect;
      system("clear");
      switch(GameSelect){
        case 1://房間狀態
          while(1){
          myroom.showRoomMenu();
          cout<<"輸入選項:"<<endl;
          cin>>myroom.RoomSelect;
          system("clear");
          if(myroom.RoomSelect==1){//跟貓說話
              myroom.TalkeToCat();
             
          }
          else if(myroom.RoomSelect==2){//查看家具 
              myroom.CheckRoomFurniture();
          }
          else if(myroom.RoomSelect==3){//查看房間顏色
              myroom.CheckRoomColor();
          }
          else if(myroom.RoomSelect==4){//退出房間介面
            cout<<"退出成功"<<endl;
            break;
          }
          else{
            cout<<"輸入選擇錯誤!!請在重新選擇選項"<<endl;
          }
         
            }
          break;
        case 2://查看手機狀態
            while(1){
            myselfphone.showCellPhoneMenu();
            cout<<"輸入選項:"<<endl;
            cin>>myselfphone.PhoneSelect;//輸入手機選項
            system("clear");
                if(myselfphone.PhoneSelect==1){//ptt論壇
                      myselfphone.PTTReddit();
                }
                else if(myselfphone.PhoneSelect==2){//保存資料 
                      myselfphone.SaveFile(myroom);
                }
                else if(myselfphone.PhoneSelect==3){//退出手機菜單
                      cout<<"退出成功"<<endl;
                      break;
                }
                else{
                  cout<<"輸入選擇錯誤!!請在重新選擇選項"<<endl;
                }
              }
            
          break;
        case 3://去商店逛逛
          while(1){
              int buy_or_notbuy=-1;//先詢問是否要不要購買商品
              cout<<"要購買商品嗎|1.YES|2.NO"<<endl;
              cin>>buy_or_notbuy;
              system("clear");
              if(buy_or_notbuy==1){//買東西
                shop.ShowShopMenu();
                cout<<"輸入要購買的家具或物品:"<<endl;
                cin>>shop.ShopSelect;
                cout<<"再次輸入家具或物品位置"<<endl;
                cin>>shop.pos;
                shop.BuyItem(shop.ShopSelect,myroom,shop.pos);
              }
              else{//不買東西
                cout<<"退出商店成功"<<endl;
                break;
              }
          }
          break;
        case 4://去酒吧工作
          bargame.EnterBarGame();
          break;
        case 5:{//返回開頭介面
          int s=-1;
          cout<<"想要返回開頭介面嗎?1.YES|2.NO"<<endl;
          cin>>s;
          system("clear");
          if(s==1){
            cout<<"退出成功"<<endl;
            return;
          }
          else if(s==2){
                break;
            }
          }
        default:
          cout<<"輸入選擇錯誤!!請在重新選擇選項"<<endl;
          break;
      }
      
    }
}