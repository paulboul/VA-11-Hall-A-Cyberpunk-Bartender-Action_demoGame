#include <iostream>
#include<string>
using namespace std;
#include "MainMenu.hpp"
#include "Game.hpp"
//動態文字小說
//選項菜單進入遊戲
//存檔點
//菜單選項介面
//手機查看介面
//屋子狀態
//商店介面
//酒吧介面
//調酒介面，每種酒的物件
//眾多人物對象
//新聞事件

int main() {
int select=0;//輸入選擇的變量
MainMenu m;//遊戲主菜單對象
Game g;//進入遊戲對象

while(true){
  
  m.showMenu();//展示遊戲主菜單
  cout<<"輸入選擇"<<endl;
  cin>>select;//輸入選項
  system("clear");
  switch(select){
    case 1:{//創建新遊戲

      g.EnterGame();
      
      break;
      }
    case 2:{//離開遊戲
      int leave=-1;
      cout<<"確定離開遊戲[1.YES,2.NO]"<<endl;
      cin>>leave;
      if(leave==1){//離開遊戲
        cout<<"已退出遊戲"<<endl;
        exit(0);
      }
      else if(leave==2){//回到遊戲主菜單
        break;
      }
      break;
      }
    default:
      cout<<"輸入選擇錯誤!!請在重新選擇選項"<<endl;
      break;
  }
}



}