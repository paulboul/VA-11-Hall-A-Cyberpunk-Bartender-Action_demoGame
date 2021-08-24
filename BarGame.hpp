#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Day1bargame.hpp"
static int theDay=0;//遊戲進程
class BarGame{
public:
  void EnterBarGame();

  Day1 day1;
};
void BarGame::EnterBarGame(){

  while(1){
      cout<<"Welcome to VA-11 Hall-A"<<endl;
      cout<<"輸入遊戲天數或是輸入數字3以上返回介面"<<endl;
      cin>>theDay;//輸入天數
      system("clear");
      switch(theDay){
          case 1:
            day1.showscript();
          break;
          case 2:
          break;
          default:
            cout<<"返回成功"<<endl;
            return;
          break;

      }

  }

}