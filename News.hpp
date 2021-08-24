#pragma once
#include<iostream>
#include<string>
using namespace std;
#define NEWNUMBERS 3//新聞有3條

class News{
public:
      void ProduceNews();//產生新聞
      int randnews=rand()%10+1;
};
void News::ProduceNews(){//產生新聞
  int selectcontinuereadnews=-1;//選擇還要不要繼續讀
  int SelectNewsToRead=-1;//選擇一條新聞讀
   srand((unsigned)time(NULL));
   int randnews=rand()%10+1;
  int newstimes=0;//三挑新聞報完就重製
  while(1){
  if(randnews==1){
    
    for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"蔡英文打高端第一針：沒什麼感覺"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"不是侯友宜！2024朱立倫副手竟是他？吳子嘉曝內幕"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
           cout<<i+1<<"塔利班向政府軍殘部遞橄欖枝"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
  else if(randnews==2){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"柯文哲要花28億買疫苗 蘇貞昌：國家有一定的規定與程序"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"大搖大擺開識別！網爆美軍直接開2架F18飛越台北"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"黃少祺護妻兒怒控防疫旅館服務差"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
   else if(randnews==3){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"太魯閣出軌調查出爐！李義祥死不換電瓶 貨車熄火拖車失敗釀禍"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"救命金擴大！這條件「直接領1萬」紓困 2步驟現金到手"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"玩Switch解悶 林書豪曝症狀好轉"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
  else if(randnews==4){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"馬斯克發布機器人，“鋼鐵俠”那種，特斯拉推出全球最快AI計算機，自研芯片那種"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"能變速游動的鮪魚機器人或為水下無人機帶來技術革新"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"快新聞／「不跟進」同住家人免隔板！ 陳其邁：南北移動高雄還是有風險"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
  else if(randnews==5){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"忍受不了哈利梅根亂放話 英女王捨棄政策要求官員「逐條糾正」"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"中國男帶肉包偷渡金門：想來學佛"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"海地強震罹難者暴增至2207人 當地黑道達成停戰協議投入救災"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
  else if(randnews==6){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"上海小小兵新卡面登場！首刷送超萌小小兵藍芽喇叭"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"民進黨竄出黑馬？2022桃園市長選舉 吳子嘉驚爆她恐參戰"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"小朋友鞋子總穿反？日本爸1招搞定引9萬人按讚"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
  else if(randnews==7){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"經典回歸！《越南大戰》等獨立遊戲將發行Switch新作"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"吳鳳籲「別讓孩子變3C商品奴隸」育兒方針家長超有感"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"開學文具、書包熱賣 防疫商品銷售量多3成"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
  else if(randnews==8){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"美公布「2021農藥殘留最多」12種蔬果 「先洗or先切」差很多：第一名嚇壞一票人"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"夫妻帶2周嬰「闖遊民營地」被暴打 輾殺1人加速逃離"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"為搭熱氣球 從高雄遷籍到台東"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
  else if(randnews==9){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"不甩防疫?! 南迴藝術季百人群聚用餐"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"點評【奧運最難3項目】羽球只排30！第一名竟又濕又暴力？！│健人心態"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"減肥斷捨離狠節食，月經不來了～生脈飲調理"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
   else if(randnews==10){
      for(int i=0;i<NEWNUMBERS;i++){
      if(newstimes==0){
         cout<<i+1<<"自助洗衣店大開電音趴?業者:僅出借場地"<<endl;
         newstimes++;
         cout<<endl;
      }
      else if(newstimes==1){
          cout<<i+1<<"北市動物園傳喜訊 水豚「妹妹」產2寶"<<endl;
          newstimes++;
          cout<<endl;
      }
      else if(newstimes==2){
          cout<<i+1<<"驚見3500台PS4齊挖虛擬貨幣？！ 行家透露一款遊戲貨幣恐更值錢"<<endl;
          newstimes=0;
          cout<<endl;
      }
     
    }
  }
  cout<<"輸入數字以看新聞"<<endl;
      cin>>SelectNewsToRead;
      system("clear");

      switch(SelectNewsToRead){
        case 1:{
            if(randnews==1){
              cout<<"蔡總統今（23）日上午7點30分抵達台大醫學院體育館施打高端疫苗，兌現要將手臂獻給國產疫苗的承諾，這也是全台第一劑高端疫苗，就跟一般民眾一樣在進行相關流程後注射疫苗，而當媒體問到是否緊張時，蔡總統搖搖頭比個OK手勢，接種完後還比讚，表示沒什麼感覺，而她只在現場停留1分多鐘後便離開現場，返回官邸跟東奧國手開視訊會議"<<endl;
              
            }
            else if(randnews==2){
                  cout<<"台北市長柯文哲日前表示，將編新台幣28億元預算買250萬劑疫苗，不過，仍需經議會審核同意。行政院長蘇貞昌今（23）日回應，疫苗的購買與進口，國家有一定的規定與程序，請大家依照指揮中心的規範預約施打。"<<endl;
            }
             else if(randnews==3){
               cout<<"台鐵太魯閣號在4月2日於花蓮清水段發生太魯閣出軌事故，今（23）日運安會公布事實調查報告，主委楊宏智在記者會一開始先默哀1分鐘，隨後由專任委員李鋼說明，他指出主要是因為李義祥上午就知道工程車電瓶快壞掉，卻堅持開去施工，最後熄火卡在彎道，打算只用怪手拖車，最後卻失敗讓工程車墜落軌道。"<<endl;
            }
             else if(randnews==4){
                cout<<"全球最快的AI訓練速度王座，剛剛易主了。不是英偉達GPU，也不是谷歌TPU……馬斯克治下的特斯拉，自研AI訓練芯片D1，自研AI超級計算機Dojo ExaPod，首秀即巔峰，登場就是全球第一。"<<endl;
            }
             else if(randnews==5){
                 cout<<"在哈利王子離開英國王室後，他與妻子梅根抓住機會還是不斷的消費英國王室。先前就因為梅根使用英女王的名字「莉莉貝」作為女兒的命名而引發爭議，現在英女王伊莉莎白二世也決定捨棄過往王室保持沉默的政策，要求官員逐條糾正哈利與梅根的不實言論。"<<endl;
            }
             else if(randnews==6){
                cout<<"超萌小小兵新卡面來囉！上海銀行於2019年推出的小小兵信用卡(2D&amp;3D款Bello回饋卡/BeeDo分期卡)廣受卡友喜愛，今(2021)年更是推出全新超萌卡面來搶市，卡片本身高回饋權益都在，且新卡面具有LED功能，付款感應時會發光，新戶申辦首刷再送限量超人氣IRIVER小小兵藍芽喇叭-Otto款！於2021/9/30前透過卡優專屬連結成功申辦再加贈"<<endl;
            }
             else if(randnews==7){
               cout<<"任天堂於今（12）日凌晨的獨立遊戲世界展示會（Indie World Showcase）直播上，宣布《越南大戰》、《俄羅斯方塊》等多款知名獨立遊戲IP將在Switch平台上推出新作。獨立遊戲世界展示會是任天堂自2017年起於春、夏兩季推出、面向自家Switch平台上之獨立遊戲的發表會，每場發布會時長大約在20分鐘左右。本次發布會上，任天堂帶來了世界各地的知名獨立遊戲情報，任天堂美國分部資深副總裁Steve Singer對此表示：「Switch持續扮演遊玩獨立遊戲的理想平台，玩家們將能在Switch上享受豐富多元的獨立遊戲。」"<<endl;
            }
             else if(randnews==8){
               cout<<"吃蔬果好處遠超農藥 正確洗淨安心食用不過，高敏敏強調，不要恐慌，多吃水果蔬菜對健康的好處超過所帶農藥帶來的風險，只要正確清洗乾淨，就可以安心享用。但要如何正確清洗蔬菜 呢？高敏敏分享，首先用肥皂將雙手洗乾淨（20秒），接著準備一個盆，用流動自來水清洗，大約兩次；再切掉葉子或莖上受損、腐爛部份；最後洗乾淨後，用紙巾或乾淨的毛巾擦多餘水分即可進行烹調。另外，草莓因為外皮充滿細孔，導致農藥更容易附著，因此，清洗時要更慎重，而像是甘藍、青花菜這類多層次的蔬菜，更要將褶皺打開清洗。"<<endl;
            }
             else if(randnews==9){
                cout<<"台東南迴藝術季為了防疫，從7月底延期到8月14號正式舉辦，但開幕式當天邀請了藝術家及4個鄉的代表，近百人參加戶外BUFFET。大家卻肩並肩用餐沒有梅花座，餐點也沒有專人服務，全都由賓客自己動手，就連縣長饒慶鈴也在其中。對於可能造成防疫隱憂，縣府文化處出面道歉，衛生局也會蒐證， 並對主辦單位依法開罰，最高30萬元"<<endl;
            }
             else if(randnews==10){
               cout<<"台北市士林有一家「夜店風」自助洗衣店，不但裝潢新潮，店裡電音，還搭配LED燈，讓許多人看一次就印象深刻，不過昨（22）天晚上，卻被檢舉大開電音趴，違反防疫規定，對此，業者出面回應，是借給3名DJ開直播，不是群聚，一切也都符合防疫標準。"<<endl;
            }

        }
        break;
        case 2:
        {
            if(randnews==1){
                cout<<"總統蔡英文將在2024年任滿第二任期，藍綠也將在總統大選推出最強候選人，而搭檔的副手實力也不容小覷。《美麗島電子報》董事長吳子嘉22日直言，據他了解，國民黨方面，若新北市長侯友宜不選2024，是前黨主席朱立倫出來選，他有可能找前花蓮縣長傅崑萁當副手"<<endl;
            }
            else if(randnews==2){
                cout<<"美國直接開2架F-18飛過台灣上空！包括批踢踢（PTT）等論壇在今天（23日）凌晨都爆料，根據即時航班飛行狀況網路服務「Flightradar24」的軌跡顯示，有2架F-18大黃蜂式戰鬥攻擊機直接飛越台北上空，而且還打開航空識別給一般人看到，接近台灣時打開航空識別，離開台灣時就又馬上關掉，好像刻意讓民眾發現，顯得相當不尋常，財經網美Emmy（胡采蘋）也在臉書分享該訊息"<<endl;
            }
             else if(randnews==3){
                cout<<"今年4月30日有下列投保紀錄之一，且月投保薪資在24000元（含）以上至34,800元（含）以下者。包括，曾參加就業保險或逾65歲或已領取勞工保險老年給付或其他社會保險養老給付之人員，受僱參加勞工保險或僅參加職業災害保險。"<<endl;
            }
             else if(randnews==4){
                cout<<"能在水下游動的機器人今時今日已不算什麼新聞，但要說真能遊成像魚那樣，目前來說仍是非常大的挑戰。這背後的難點，在於科學家之前無法模擬出魚類在游動時尾巴硬度的變化，因為這項數據在魚遊時是很難測量的。而現在來自維吉尼亞大學的團隊結合流體力學和生物力學，讓這一問題不再成為開發機器人的障礙。他們的鮪魚機器人擁有特別設計的尾部，在其幫助下裝置就可以在水中像真魚一樣加速或減速游動了。"<<endl;
            }
             else if(randnews==5){
                cout<<"金門海巡昨（22）日抓到一名40歲中國偷渡客，搭著橡皮艇闖入金門海域被尋獲，目前已經緊急做PCR檢測接受調查。但對於他為什麼偷渡來台灣，海巡人員也很傻眼，因為他說他想要來台灣學佛。而且男子聲稱他是靠著雙手以徒手力量划槳來到金門海域，而且被發現時他的小艇上還帶著包子跟一瓶水。"<<endl;
            }
             else if(randnews==6){
               cout<<"描述: 桃園市長鄭文燦已連任兩屆市長，而在2022年桃園市長選戰，即使大環境對民進黨不利，前立委鄭寶清、立委鄭運鵬仍有意參選。媒體人吳子嘉爆料說，聽說鄭文燦建議徵召駐美代表蕭美琴回來選桃園市長"<<endl;
            }
             else if(randnews==7){
                  cout<<"藝人吳鳳從土耳其來台發展，和老婆陳錦玉（Rynne）結婚後，育有兩個可愛女兒，常在社群網站與網友交流育兒經的他，呼籲所有家長「請不要讓孩子變成3C商品的奴隸」，否則就得慎重考慮是否要生小孩。吳鳳尚未當父親前，在飯局中見到友人直接把平板電腦給小孩，詢問為什麼讓孩子接觸3C商品？換來的答覆則是：「你現在不懂，等換你當爸爸就知道，為了安靜的吃飯，一要給孩子玩平板電腦或者手機」，不過輪到自己當父親後，從來不讓女兒碰3C商品，強調雖然沒有不發脾氣的孩子，但若讓他們接觸3C商品，只是為了安撫情緒，就得慎重考慮還要不要生孩子。"<<endl;
            }
             else if(randnews==8){
                cout<<"闖入遊民營地竟慘遭多人圍攻暴打！一對夫妻日前帶了才兩周大的孩子到了一處遊民聚集地，為了要討回被偷走的物品，沒想到卻慘遭到多名遊民衝上來圍攻，甚至還拿起棍棒攻擊他們，這對夫妻趕緊跳上車逃離，未料過程中輾斃了一名擋在他們車輛前方的遊民，整段驚悚的過程都被目擊者錄下，隨即在網上引起熱議。"<<endl;
            }
             else if(randnews==9){
              cout<<"能踏上奧運會的殿堂都是各國頂尖的運動員~也是所有運動員的夢想~個人覺得每一個項目都不簡單~你要從一個項目脫穎而出得牌是非常非常困難的~投入的訓練是一般人完全無法想~"<<endl;
            }
             else if(randnews==10){
                cout<<"台北市立動物園23日表示，水豚「妹妹」在7月30日順利產下兩隻寶寶，升格當媽媽。（台北市立動物園提供）中央社記者陳昱婷傳真 110年8月23日"<<endl;
            }
        }
        break;
        case 3:
           {
            if(randnews==1){
               cout<<"塔利班掌控阿富汗後，籌組政府的腳步加快。塔利班21日在首都喀布爾會見政界人士，宣稱希望建立一個尊重法治、無貪腐的強有力中央制度。塔利班並指，沒有組建過渡政府計畫，將直接成立一個能被各方接受的包容性政府。另一方面，由於前政府殘部在東北部攻陷少數區域，塔利班已請求俄羅斯代為傳遞和談信號。"<<endl;
            }
            else if(randnews==2){
              cout<<"「戲劇一哥」黃少祺的老婆小蓁7月中帶2兒子赴美，近日返台後，配合防疫政策、花10多萬住進防疫旅館準備隔離15天，但妻兒過去一周的隔離生活處處受氣、備受委屈，黃少祺透過電話、LINE、e-mail各種管道、數度聯絡溝通未果後，好修養的他22日罕見動怒在臉書PO文，甚至寫出防疫旅館名稱"<<endl;
            }
             else if(randnews==3){
               cout<<"林書豪日前從美國飛抵中國後驗出確診新冠肺炎，他在上海的醫院接受治療，一度陷入低潮，近日他再度發文，心情好轉表示，「我的症狀基本快要消失了。」即將能出院了，提醒要大家不要大意，繼續做好防護。"<<endl;
            }
             else if(randnews==4){
              cout<<"疫情指揮中心昨日宣布二級警戒延長至9月6日，但適度鬆綁管制，包括同住親友聚餐不受限使用隔板、梅花座及專人分菜。然而高雄市長陳其邁今（23）日表示，北部還是有不明感染源加上南北移動，所以高雄還是有風險，因此，餐廳內用還是按照原本規定。"<<endl;
            }
             else if(randnews==5){
               cout<<"海地於17日發生規模7.2強震，根據官方22日公布的傷亡數字，這起強震目前已經造成2207人死亡，而救援進度仍然十分緩慢。為此，當地有黑幫與其他幫派達成停戰協議，並且投入救災工作，同時也呼籲民眾共同加入來支持災民。"<<endl;
            }
             else if(randnews==6){
               cout<<"任天堂遊戲主機「Switch」2017年發行後，成功打出口碑，吸引大批死忠玩家擁護，每次推出新遊戲都引發熱烈討論！日本一名爸爸近期發現孩子分不清左腳、右腳的鞋子，與孩子討論後，突發奇想在鞋子內畫上Switch紅色、藍色的手把，輕鬆解決鞋子穿錯腳的問題。"<<endl;
            }
            else if(randnews==7){
                 cout<<"9月1日就要開學，許多家長正在著手準備，孩子上學的必備用品，除了往年必備的文具、書包等商品熱賣外，因為疫情影響，今年的防疫商品，更是成為家長採購的重點，防疫商品更比去年同期成長3成。"<<endl;
            }
             else if(randnews==8){
               cout<<"受疫情影響，在台東縣鹿野鄉舉辦的熱氣球嘉年華今年活動規模縮小並限定台東人才可入場，其中熱愛熱氣球的高雄陳姓民眾為此特地舉家遷戶口到台東，陳先生表示過去8年全家都會特地前往台東搭乘熱氣球，今年遷戶口後便能繼續維持追球紀錄；台東縣長饒慶鈴得知後也特地前往現場合影。"<<endl;
            }
             else if(randnews==9){
              cout<<"為了減肥，無所不用其極，尤其喜歡採取極端「斷捨離」的方法，莫過於節食。也有不少人嘗試幾個月後發現，的確成功瘦不下來了，但是，人的臉色也變得憔悴蠟黃，甚至月經也不來了……。中醫師表示，減肥方法過於激烈，恐使內分泌紊亂、影響腎氣，並且很容易復胖，造成「氣虛痰濕型肥胖」。中醫調理必需補氣又補血，推荐包括四物湯、生脈飲等三種湯方。"<<endl;
            }
             else if(randnews==10){
              cout<<"上週烏克蘭警方破獲了一家地下「礦場」，查獲大量挖取虛擬貨幣的PS4主機，引發國際軒然大波，然而熟悉比特幣或以太坊的玩家們卻出面打臉，質疑PS4主機性能有限，效率微乎其微，恐怕連電費都不夠賠，譏笑這種手法宛如天方夜譚，據當地媒體深入追查，分析涉嫌偷電的地下礦場，其實並非瞄準虛擬貨幣，而是透過不斷電運作，賺取PS4熱門體育電玩遊戲《國際足盟大賽2021》（FIFA21）中的FUT虛擬錢幣。"<<endl;
            }
        }
        break;
        default:
         cout<<"輸入選擇錯誤!!請在重新選擇選項"<<endl;
        break;
      }
      cout<<"還要繼續看新聞嗎?"<<endl;
      cout<<"1.YES|2.NO"<<endl;
      cin>>selectcontinuereadnews;
      system("clear");
      if(selectcontinuereadnews==1){
          continue;
      }
      else{
          cout<<"退出成功"<<endl;
          break;
      }
  }

      


}
