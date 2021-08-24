#pragma once
#include<iostream>
#include<string>
#include <stdio.h>
#include "Bartending.hpp"
using namespace std;
void EnterTalk(){//按enter就跳下一行對話
    char ch;
    getchar();
}
class Day1{
public:
  void showscript();
  bartending Bartender;
};
void Day1::showscript(){
 
  /*cout<<"Anna: Psst."<<endl;
  EnterTalk();
   EnterTalk();
  cout<<"Anna: Hey over here."<<endl;  
 EnterTalk();
  cout<<"BOO!"<<endl;
 EnterTalk();
  cout<<"Anna: How's that for an entrance."<<endl;
 EnterTalk();
  cout<<"Anna: ..."<<endl;
 EnterTalk();
cout<<"Anna: Come on Jo.look sharp! The game's starting and the player needs a good first impression of its main character."<<endl;
 EnterTalk();

cout<<"Anna: I know you served a bunch of tuxedo-clad Corgis over the weekend and bar will eventually close."<<endl;

EnterTalk();
cout<<"Anna: ...and I'll admit my little prank on you might've gone a bit overboard."<<endl;
EnterTalk();
cout<<"Anna: But remember, life is 90% how you take it! Stay focused and look at the brighter side of things."<<endl;
EnterTalk();
cout<<"Anna: I have no idea what the brighter side is, but you should totally find it."<<endl;
EnterTalk();
cout<<"Anna: In any case,you should totally check that parcel you just got."<<endl;
EnterTalk();
cout<<"Anna: See ya!"<<endl;
EnterTalk();
cout<<"Jill: ...!"<<endl;
EnterTalk();
cout<<"Jill: Oh... *yawn* just a dream."<<endl;
EnterTalk();
cout<<"Jill:(Hm? There's something near the  door)."<<endl;
EnterTalk();
cout<<"Jill enter the bar.."<<endl;
EnterTalk();
cout<<"Jill: G'evening."<<endl;
EnterTalk();
cout<<"???: Ah! Hey there, Jill."<<endl;
EnterTalk();
cout<<"Jill: ..."<<endl;
EnterTalk();
cout<<"Jill:Oh, Hey, John."<<endl;
EnterTalk();
cout<<"???:..."<<endl;
EnterTalk();
cout<<"Jill: When will you admit have a John face,Gil?"<<endl;
EnterTalk();
cout<<"Gillian: When you let people call you Jules."<<endl;
EnterTalk();
cout<<"Jill: Quiet."<<endl;
EnterTalk();
cout<<"Gillian: Are you okay? You look distracted."<<endl;
EnterTalk();
cout<<"Jill: Where's Boss?"<<endl;
EnterTalk();
cout<<"Gillian: Dunno. She went out to buy some stuff and..."<<endl;
EnterTalk();
cout<<"Gillian: Did you hear what I just told you?"<<endl;
EnterTalk();
cout<<"Jill: You said something?"<<endl;
EnterTalk();
cout<<"Gillian: Yes. That you look diestracted. Very,very distracted"<<endl;
EnterTalk();
cout<<"Jill: It's nothing. I'm just thinking about... stuff."<<endl;
EnterTalk();
cout<<"Gillian: What stuff?"<<endl;
EnterTalk();
cout<<"Jill:Well, I have to pay rent by the 30th which is always stressful, and-"<<endl;
EnterTalk();
cout<<"Gillian:Ah."<<endl;
EnterTalk();
cout<<"Jill: (There's also the fact that I spent a full yesterday apparently talking to myself.)"<<endl;
EnterTalk();
cout<<"Jill:(Not to mention the fact that two days ago, I found out the bar is at risk of closing.)"<<endl;
EnterTalk();
cout<<"Jill: (So not only is my life begin shaken up, I'm apparently going crazy.)"<<endl;
EnterTalk();
cout<<"Jill: (On top od that, neutering Fore left me with a completely empty wallet and I'll get evicted if I miss rent again...)"<<endl;
EnterTalk();
cout<<"Jill: (And there're all the beer cans around my apartment, and...)"<<endl;
EnterTalk();
cout<<"Gillian: Jill!"<<endl;
EnterTalk();
cout<<"Jill: Sorry, did you say something?"<<endl;
EnterTalk();
cout<<"Gillian:..can you really work today?"<<endl;
EnterTalk();
cout<<"Jill: Of course I can!"<<endl;
EnterTalk();
cout<<"Gillian: Let's go through the basics, then , shall we? Just in case."<<endl;
EnterTalk();
cout<<"Jill:..."<<endl;
EnterTalk();
cout<<"Gillian: If you can make a Piano Man,I'll skip the rest,But ,Bear with me for a second here, okay?"<<endl;
EnterTalk();
cout<<"Jill:..."<<endl;
EnterTalk();
cout<<"Gillian: Let's start with a Sugar Rush"<<endl;
EnterTalk();
cout<<"Gillian: Look for the recipe using the nabigation bar in hte recipe book that wiil show up on the top left."<<endl;
EnterTalk();
cout<<"Gillian: You can also sort drinks by flavors like \"Sweet\" or types like \"Manly\"."<<endl;
EnterTalk();
cout<<"Gillian: Drag the desired amount of ingredients from their cells on the right to the shaker in the center."<<endl;
EnterTalk();
cout<<"Jill: Gil..."<<endl;
EnterTalk();
cout<<"Gillian: When done,press the mix button, and then press it again to stop mixing."<<endl;
EnterTalk();
cout<<"Gillian: Click the serve button or the drink itself to serve it and that'll be all."<<endl;
EnterTalk();
cout<<"Gillian: Oh,but if the drink looks messed up, you'll need ot press the Reset button and try again."<<endl;
EnterTalk();
cout<<"Gillian: You can press Reset at any time.Even while the Shaker is moving. Don't be afraid to use it."<<endl;
EnterTalk();
cout<<"Jill: Gil,I'm the one that went through the fomral BTC instruction."<<endl;
EnterTalk();
cout<<"Gillian: Then this should be no problem!"<<endl;
EnterTalk();
cout<<"Jill: *sigh*"<<endl;
EnterTalk();
cout<<"Gil wants eigher a Sugar Rush or a Piano Man,If I mess up the ingredients or the drink, I can press the Reset button and try again."<<endl;*/
int x=Bartender.ShakingBottole("sugarRush");//開始搖飲料
if(x==1){
cout<<"continue game"<<endl;
  EnterTalk();
  cout<<"Jill: Here.Happy?"<<endl;
  EnterTalk();
  cout<<"Gillian: Yes,Very.I stand correted."<<endl;
  cout<<"Gillian: Now, let's get working."<<endl;
  EnterTalk();
  cout<<"Gillian:Oh, yeah! Before I forget!"<<endl;
  EnterTalk();
  cout<<"Jill: Hm?"<<endl;
  EnterTalk();
  cout<<"Gillian: You can make any drink big by doubling the amount of ingredients."<<endl;
  EnterTalk();
  cout<<"Gillian: But if the recipe already has over 10 ingredients, the drink is already big."<<endl;
  EnterTalk();
  cout<<"Gillian:Oh and if a recipe says it uses \"Optional Karmotrine \" it means you can use none or fill it to the brim."<<endl;
  EnterTalk();
  cout<<"Gillian: Optional Karmotrine doesn't count towards making a big drink, of course."<<endl;
  EnterTalk();
  cout<<"Gillian:Karmotrine is the alcoholic factor in a drink,It doesn't change the taste but the amount still has an effect. "<<endl;
  EnterTalk();
  cout<<"Gillian: If you add too much of it, the client wiil get drunk faster. So please be mindful ot that"<<endl;
  EnterTalk();
  cout<<"Jill:Are you done with the exposition."<<endl;
  EnterTalk();
  cout<<"Now I am. Yeah."<<endl;
  EnterTalk();
  cout<<"Dana: Hey,guys!"<<endl;
  EnterTalk();
  cout<<"Jill:Oh Bo-... eh?"<<endl;
  EnterTalk();
  cout<<"Jill:W-Who's that?"<<endl;
  EnterTalk();
  cout<<"Dana: I don't know.Found her while I was out shopping."<<endl;
  EnterTalk();
  cout<<"Gillian: Why bring her here?"<<endl;
  EnterTalk();
  cout<<"Dana: Well, it was either leave her outside at the mercy of society's finest or bring her unconecious body in here"<<endl;
  EnterTalk();
  cout<<"Jill:She's going to make such a ruckus when she wakes up. You know that."<<endl;
  EnterTalk();
  cout<<"Dana: That's up for you to deal with.I'll be in my office."<<endl;
   EnterTalk();
  cout<<"Jill: You can't just push that responsibility onto us! We have work to do, damn it!"<<endl;
  EnterTalk();
  cout<<"Dana: There're two of you! Believe in yourselves!"<<endl;
  EnterTalk();
  cout<<"Jill:*sigh*"<<endl;
  EnterTalk();
  cout<<"Do you think Chief Knocked her out?"<<endl;
  EnterTalk();
  cout<<"Jill: Nah, that's unlikely. She'd be crowing about it or tauting us if that were the case."<<endl;
  EnterTalk();
  cout<<"Jill: And it's not like her to pick o such a samll girl... at least not unprovoked."<<endl;
  EnterTalk();
  cout<<"Gillian: Yeah,you're right."<<endl;
  EnterTalk();
  cout<<"Gillian: We'll just need to keep it quiet. She seems to be just sleeping soundly,not comatose"<<endl;
  EnterTalk();
  cout<<"Jill:Yeah."<<endl;
  EnterTalk();
  cout<<"Gillian:Okay then. Time ot start the night!"<<endl;
  EnterTalk();
  cout<<"Jill: Yes, I'll start working while YOU go clean the bathroom."<<endl;
  EnterTalk();
  cout<<"Gillian: Um... come again?"<<endl;
  EnterTalk();
  cout<<"Jill: While you spent the whole weekend and Monday doing god-knows-what, we've had some interesting clients come in."<<endl;
  EnterTalk();
  cout<<"Jill: Dogs. Lots of 'em"<<endl;
  EnterTalk();
  cout<<"Gillian: You're joking."<<endl;
  EnterTalk();
  cout<<"Jill: Gil. you've known me for how long now? Do I look like the kind of woman whoe would make a joke like that?"<<endl;
  EnterTalk();
  cout<<"Gillian: Well..."<<endl;
  EnterTalk();
  cout<<"Jill: So! As punishment for leaving me to deal with all of that on my lonesome, you'll be in charge of cleaning the bathrooms."<<endl;
  EnterTalk();
  cout<<"Jill: Have fun!"<<endl;
  EnterTalk();
  cout<<"Gillian: Just that? Fine. I see no problem."<<endl;
  EnterTalk();
  cout<<"Gillian: Where's the cleaning stuff?"<<endl;
  EnterTalk();
  cout<<"Jill: Here."<<endl;
  EnterTalk();
  cout<<"Gillian: ... you brought that from home. didn't you?"<<endl;
  EnterTalk();
  cout<<"Jill: That I did."<<endl;
  EnterTalk();
  cout<<"Gillian: Fiiiiiiiiiine"<<endl;
  EnterTalk();
  cout<<"Jill:(With that out of the way, let's play some music on teh new \"Jukebox\".)"<<endl;
  EnterTalk();
  cout<<"Jill:(This model needs to have all of its 12 slots filled with songs before it can start.)"<<endl;
  EnterTalk();
  cout<<"Jill: (I wonder what was the logic behind that decision...)"<<endl;
  EnterTalk();
  cout<<"Time to mix drinks and change lives."<<endl;
  EnterTalk();
  cout<<"The demo game is done"<<endl;

}
else{
  cout<<"game quit"<<endl;

}

  

}