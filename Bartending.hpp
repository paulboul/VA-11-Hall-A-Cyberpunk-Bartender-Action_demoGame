#pragma once
#include<iostream>
#include<string>
using namespace std;
class bartending{
public:
  int ShakingBottole(string name);//把料給搖換
  int  Adelhyde=0;
  int Bronson_Ext=0;
  int Pwd_Delta=0;
  int Flanergide=0;
  int Karmotrine=0;
  int Mix(string name);
  int bigIceBall;
  int bigOldAge;
  int bigShakeWine;
  void checkWineNumber();
};
void bartending::checkWineNumber(){
    cout<<"1.Adelhyde'numbers: "<<Adelhyde<<endl;
   cout<<"2.Bronson_Ext'numbers: "<<Bronson_Ext<<endl;
    cout<<"3.Pwd_Delta'numbers: "<<Pwd_Delta<<endl;
     cout<<"4.Flanergide'numbers: "<<Flanergide<<endl;
      cout<<"5.Karmotrine'numbers: "<<Karmotrine<<endl;
      if(bigIceBall==1){
        cout<<"已加冰"<<endl;
      }
      else{
        cout<<"未加冰"<<endl;
      }
      if(bigOldAge==1){
        cout<<"已陳年"<<endl;
      }
      else{
        cout<<"未陳年"<<endl;
      }
      if(bigShakeWine==1){
        cout<<"已搖超過5秒了"<<endl;
      }
      else{
         cout<<"未已搖超過5秒了"<<endl;
      }
}
int bartending::Mix(string name){
    
  if(name=="sugarRush"&&Adelhyde==2&&Pwd_Delta==1){
    return 1;
  }
  return 0;
     
}
int bartending::ShakingBottole(string name){
  int getwine;
  int getice=-1;
  int getage=-1;
  int getshakeWine=-1;
  int mix=0;
while(1){
    cout<<"輸入你想要的原料"<<endl;
  cout<<"1.Adelhyde'numbers: "<<Adelhyde<<endl;
   cout<<"2.Bronson_Ext'numbers: "<<Bronson_Ext<<endl;
    cout<<"3.Pwd_Delta'numbers: "<<Pwd_Delta<<endl;
     cout<<"4.Flanergide'numbers: "<<Flanergide<<endl;
      cout<<"5.Karmotrine'numbers: "<<Karmotrine<<endl;
       cin>>getwine;
         system("clear");
  if(getwine==1){
    ++Adelhyde;
    }
  else if(getwine==2){
    ++Bronson_Ext;
  }
  else if(getwine==3){
    ++Pwd_Delta;
  }
  else if(getwine==4){
    ++Flanergide;
  }
  else{
    ++Karmotrine;
  }
  int selectcontinue=-1;
  cout<<"還要繼續加酒?|1.yes|2.no"<<endl;
  cin>>selectcontinue;
  system("clear");
  if(selectcontinue==1){
    cout<<"繼續加酒"<<endl;
    continue;
    
    
  }
  else{
    cout<<"進行下一步"<<endl;
    break;
  }
  }

  cout<<"需要加冰嗎?"<<endl;
  cin>>getice;
  
  if(getice==1){
    cout<<"已加上冰塊"<<endl;
    bigIceBall=1;
  }
  else{
    cout<<"未加上加冰塊"<<endl;
    bigIceBall=0;
  }

  cout<<"需要陳年嗎?"<<endl;
  cin>>getage;
  if(getage==1){
    cout<<"已陳年"<<endl;
    bigOldAge=1;
  }
  else{
    cout<<"未陳年"<<endl;
    bigOldAge=0;
  }
  cout<<"需要搖超過5秒嗎?"<<endl;
  cin>>getshakeWine;
  if(getshakeWine==1){
    cout<<"已搖超過5秒了"<<endl;
    bigShakeWine=1;
  }
  else{
    cout<<"未已搖超過5秒了"<<endl;
    bigShakeWine=0;
  }

  checkWineNumber();
  mix=Mix(name);
  return mix;

 

}

