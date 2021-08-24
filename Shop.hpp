#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Room.hpp"
#define ItemNumbers 10//商店家具數目
//商店完成
class Shop{
public:
    string Item[15]{//預設項目
        "達摩公仔","快冷電風扇","投影植物","大同電鍋","kira-miki海報","紅牛精神飲料","海盜船套裝電腦","維力炸醬麵","貓罐頭","麵筋罐頭"
    };
    void ShowShopMenu();//展示商店菜單
    void BuyItem(int s,Room &,int);//購買商品
    int ShopSelect=-1;//商店選擇
    int pos=-1;//家具或商品空間位置

};
void Shop::ShowShopMenu(){
  cout<<"|-----------------------|"<<endl;
  for(int i=0;i<ItemNumbers;i++){
    cout<<"|"<<i+1<<"."<<Item[i]<<"-|"<<endl;
  }
  cout<<"|-----------------------|"<<endl;
}
void Shop::BuyItem(int s,Room &f,int pos){
    int ShopItemSize=sizeof(Item)/sizeof(Item[0]);
    //cout<<len<<endl;
    //cout<<f.furnitureNumbers<<endl;
    for(int i=1;i<=ShopItemSize;i++){
      if(s==i){
        if(f.furnitureNumbers==10){//空間不足，不能再放家具了
          cout<<"你的家裡空間不足，不能再放家具了!!!"<<endl;
          break;
        }
        else{//空間足夠，可放
          if(f.furniture[s].empty()==0){//同個位置，不能放家具
              
              cout<<"這裡已經擺了"<<f.furniture[s]<<endl;
          }
          else{
              f.furniture[pos]=Item[i];
              f.furnitureNumbers++;
          }
          
        }
      }
    }
}
