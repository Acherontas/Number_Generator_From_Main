#include <iostream>
#include <math.h>
#include <string.h>
#include <cmath>
#include <thread>
#include <chrono>
using namespace std;

int sxolia=0;

/*
Aionnio is Acherontas voyeristics behaviours enjoy ur stay me fido
to apotelesma to sum xoris to cd ean mpei os neos arithmos emfanizei
se ena vathos kiniseon N to idio apotelesma xD
ean den stathetopoiithei sto idio tote ta 2 teleutaia apotelesmata
pou teinoun sto cd einai ta apotelesmata xD
*/

int cdi=0;
int m;
int fl=0;
int cd(int n){
    m=n%10;
    cdi+=m;
    fl=-1;
    if(n/10==0){
        fl=1;if(fl==1){}
        return cdi;   //return 1;
    }
    else
    {
        cd(n/10);
    }
    return cdi;
}
int lk=0;

int get_max(int sizeofnumber,int* ar){
int tmp=0;
tmp=ar[0];
int maxx=0;
maxx=tmp;
if(sxolia==1){cout<<"get max with size " << sizeofnumber <<"\n";}
for(int i=1;i<=sizeofnumber;i++){
if(sxolia==1){cout<<"sigkrisi number " << ar[i] << " me max " << maxx <<"\n";}
if(ar[i]>maxx){maxx=ar[i];}
}
return maxx;
//epistrefeis ton megisto arithmo
}

int keeper_is_min=0;
int ksum=0;
int ksm[4];

int semis=1; //den einai logiko
int smis[4];

int prt_lk(int mnb){
int lkm=mnb;
//cout<<"prt lk " << lkm <<"\n";
//if(lkm<0){cout<<"arnitikos\n";}
if(lkm >=0){
          //cout<<" -------> " <<lkm <<"\n";
          if(lkm<=9){goto A;}
           }
if(lkm<0 || lkm>9 ){//cout<<"With : " << lkm <<"\n";
         while(lkm>9 || lkm<0){
             cdi=0;
             lkm=cd(mnb);
             //cout<<" -----> " << lkm << "\n";
             //if(lkm<=9){cout<<"final addition m44 " << lkm <<"\n";break;}
             if(lkm<=9){
                       //cout<<"final addition sum " << lkm <<"\n";
                       break;}
             mnb=lkm;
         }
    }
A:cout<<" ";
//cout<<"with sum " << lkm << "\n";
return lkm;
}

int sumi=0;
int idxs_zero(int sizeofnumber,int* ar,int abc,int shf,int maxnumber){
   //semis=0;
   if(sxolia==1){cout<<"\n";
   cout<<"using size of number           : " << sizeofnumber << "\n";
   cout<<"using default array from main  : " << keeper_is_min << "\n";
   cout<<"and maxnumber                  : " << maxnumber <<"\n";}
   sizeofnumber+=1;
   //int max_two=get_max(sizeofnumber,ar);
   int kll=0;
   int restr=0;//=-(max_two-(sumofdigits-1));
   //kll=restr;
   int ar_ze[abc];
   int re_ar_ze[abc];
   cout<<"\n";
   int xli=0;
   int yli=0;
   if((maxnumber==keeper_is_min || maxnumber<keeper_is_min)  && yli==0){
      if(sxolia==1){cout<<"no need to extend\n";}
      xli=0;
      for(int i=keeper_is_min;i>=0;i--){
           re_ar_ze[xli]=i;
           xli+=1;
      }
      xli=0;
      for(int i=0;i<=keeper_is_min;i++){
           ar_ze[xli]=i;
           xli+=1;
      }
      if(sxolia==1){cout<<"Using Keepers Arrays \n";}
      cout<<"\n";
      yli+=1;
   }
   if(maxnumber>keeper_is_min && yli==0){
      if(sxolia==1){cout<<"need to extend \n";}
      restr=keeper_is_min-maxnumber;
      if(sxolia==1){cout<<"me diafora       : " << restr <<" and " << -restr <<"\n";}
      kll=(restr);xli=0;
      if(sxolia==1){cout<<"kll is           : " << kll <<"\n";}
      for(int i=maxnumber;i>=restr;i--){
       //cout<<i << " " << i-i+kll <<"\n";
       re_ar_ze[xli]=i;ar_ze[xli]=i-i+kll;
       kll+=1;
       xli+=1;
      }
      yli=1;
   }
if(sxolia==1){cout<<"-----------------------------------------------------\n";
cout<<"Corrected Arrays \n";
for(int i=0;i<=xli-1;i++){cout<<ar_ze[i] <<" ";}
cout<<"\n";
for(int i=0;i<=xli-1;i++){cout<<re_ar_ze[i]<<" ";}
cout<<"\n";}
int number=0;int posi=0;int x=0;int y=0;
int returned_number=0;
int rnmb[sizeofnumber];int szn=0;
//if(shf>0){sizeofnumber=9;}
int will_count_them=0;
for(int i=0;i<=sizeofnumber;i++){
 y=0;posi=0;x=0;
 number=ar[i];
 if(sxolia==1){cout<<"using number : "<< number << " " << ar[i] << " @i "<<i; }
 while(x<=xli-1){
   if(number==re_ar_ze[x]){posi=x;returned_number=ar_ze[posi];y=1;rnmb[szn]=ar_ze[posi];szn+=1;
   if(sxolia==1){cout<<" finding : " << returned_number << " " << ar_ze[posi] << "\n";
   cout<<"counter from : " << will_count_them << " to : " ;}
   will_count_them+=1;
   if(sxolia==1){cout<<will_count_them <<"\n";}
   }
    x+=1;
    if(y==1){break;}
    if(will_count_them==sizeofnumber){cout<<"\n";cout<<"breaking cause of sizes \n";break;}
 }
 if(will_count_them==sizeofnumber){cout<<"\n";cout<<"breaking cause of sizes \n";break;}
 if(sxolia==1){cout<<"\n";}
 //cout<<"i return with number : "<< returned_number <<"\n" ;
}
sumi=0;
cout<<"**************************************\n";
for(int i=0;i<=will_count_them-1;i++){cout<< rnmb[i] << " ";sumi=sumi+rnmb[i];}
cdi=0;lk=0;
lk=cd(sumi);
cout<<"with sum : " << sumi <<"\n";
cout<<" interting value: " << sumi << " @index " <<semis <<" ---> ";
smis[semis]=sumi; semis+=1;
cout<<smis[semis-1] << " with new index " << semis <<"\n";
int pr=prt_lk(lk);
ksm[ksum]=pr;ksum+=1;
cout<<"\n";
cout<<"-----------------------------------------------------\n";
cout<<"\n";
return 0;
}

int smm=0;
int sm[4];
int collect_them[514];int cthm=0;
string lkrp[4]={"Main     ","Number | ","Number / ","Kathetos "};
int lpr=0;
int shr_akra(char k,char m,int a1,int a2,int a3,int a4){
//cout<<"using : " << k << " with " << m << " and " << a1 << " " << a2 << " " << a3 << " " << a4 <<"\n";
//cout<<"with table values : " << smis[0] << " " << smis[1] << " " << smis[2] << " " << smis[3] <<"\n";
if(k=='P' && m=='A'){
int m3=0;
int m4=0;
m3=smis[3]+smis[0];
m4=smis[2]+smis[1];
lpr=prt_lk(m3);
cout<<smis[3] <<" + " << smis[0] << " = " << m3 <<" and sum " << lpr <<"\n";
cthm+=1; collect_them[cthm]=abs(lpr);
cout<<"\n";
lpr=prt_lk(m4);
cout<<smis[2] << " + " << smis[1] << " = " << m4 <<" and sum " << lpr <<"\n";
cout<<"\n";
}
if(k=='A' && m=='A'){
int m1=0;
int m2=0;
m1=smis[3]-smis[0];
m2=smis[2]-smis[1];
lpr=prt_lk(m1);
cout<<smis[3] <<" - " << smis[0] << " = " << m1 <<" and sum "<< lpr <<"\n";
cout<<"\n";
lpr=prt_lk(m2);
cout<<smis[2] << " - " << smis[1] << " = " << m2 <<" and sum " << lpr <<"\n";
cout<<"\n";
}
if(k=='M' && m=='A'){
int m33=0;
int m44=0;
m33=smis[0]+smis[1];
m44=smis[2]+smis[3];
lpr=prt_lk(m33);
cout<<smis[0] <<" + " << smis[1] << " = " << m33 <<" and sum " << lpr <<"\n";
cout<<"\n";
lpr=prt_lk(m44);
cout<<smis[2] << " + " << smis[3] << " = " << m44 <<" and sum " << lpr <<"\n";
cout<<"\n";
}
return 0;
}

string str;
int g_times=0;
int main_n=0;int main_t=0;
int timen=0;

int main(int argc, char** argv){
cout<<"use 0 for sxolia on or off default is 0 \n";
cout<<"enter ur number \n";
cout<<"enter the loop times default value is 11 for range 9 and 1 for 1 loop \n";
cout<<"enter the pause time between \n";
sxolia=stoi(argv[1]);
int sumkath=0,sumunkath=0;
int ark=0;// was 1
int kth=0, tme=1,nm=0,tk=0,sumofkath=0;
//string str;
int sumarka[514],sumunark[514],kathetos[514];
char arkatheto[514];
int x=0,y=0,zz=0;
int sumone=0, sumtwo=0,sumofnum=0;
char l;int yy=0;
int i=0;
int main_number[514];int mnb=0;
int trp=0;
string mln; //mln is ur new number as str
//int g_times=0;
str=argv[2];
g_times=stoi(argv[3]);
timen=stoi(argv[4]);
g_times=g_times-1;
//cout<<"enter ur number : " ;
//cin>>str;
for(int g=0;g<=g_times;g++){
if(sxolia==1){cout<<"using times : " << g <<" of : " << g_times <<"\n";}
sumkath=0;sumunkath=0;ark=0;kth=0;tme=1;nm=0;tk=0;
sumofkath=0;x=0;y=0;zz=0;sumone=0;sumtwo=0;sumofnum=0;
yy=0;i=0;mnb=0;trp=0;
if(sxolia==1){cout<<"for number " << str <<"\n";
cout<<"str size is " << str.size() << " " << str.size()-1 <<"\n";
cout<<"\n";
cout<<"  ";}
for(int i=0;i<=str.size()-1;i++){cout<< str.at(i) << " " ;}
if(sxolia==1){cout<<"\n";
cout<<"erasing ar-kathetos\n";}
for(int i=0;i<=str.size();i++){arkatheto[i]=' '; } //kathetos[i]=0;sumarka[i]=0;sumunark[i]=0;
if(sxolia==1){cout<<"erasing others\n";}
for(int i=0;i<514;i++){kathetos[i]=-1;sumarka[i]=-1;sumunark[i]=-1;main_number[i]=-1;}
if(sxolia==1){cout<<"Going for dashes using " << str <<"\n";}
for(int i=0;i<=9;i++) { //cout<<"Generating dashes for " << str <<"\n";
char k;
x=0,y=0,zz=0,nm=0;
while(x<=str.size()-1) { //cout<<"while number is " << str  <<"\n";
          k=str.at(nm); //cout<<"k is " << k <<"\n";
          y=stold(&k);  //cout<<"and y is " << y <<"\n";
          if(tk==0){kathetos[kth]=9-y; kth+=1;}
          if(y>0 && tme<=y){ arkatheto[zz]='|';  zz+=1;  goto A;}
          if(y>0 && tme>y){arkatheto[zz]='/'; zz+=1;goto A;}
          if(y==0 ){arkatheto[zz]='/';zz+=1;goto A;}
          if(tme>str.size()){arkatheto[zz]='/';zz+=1;goto A;}
          A:
          x+=1;
          nm+=1;
}
if(tme<=9){
sumkath=0;sumunkath=0;
if(sxolia==1){cout<<tme <<" " ;}
for(int i=0;i<=str.size()-1;i++) {
if(sxolia==1){cout<< arkatheto[i] << " ";}
if(arkatheto[i]=='|'){sumkath+=1;}
if(arkatheto[i]=='/'){sumunkath+=1;}
}
if(sxolia==1){cout<<"with | " << sumkath << " and / " << sumunkath <<"\n";}
sumarka[ark]=sumkath;sumunark[ark]=sumunkath;ark+=1;
}
cout<<"\n";
tme+=1;
for(int i=0;i<=str.size()-1;i++){arkatheto[i]='\0';}
tk+=1;
}
sumone=0;sumtwo=0;
for(int i=0;i<=8;i++){sumone=sumone+sumarka[i];sumtwo=sumtwo+sumunark[i];} //was 1 and 9
sumofnum=0;l='\0';yy=0;
for(int i=0;i<=str.size()-1;i++){l=str.at(i);yy=stoi(&l);sumofnum=sumofnum+yy;}
cout<<"sums are :\n";
cout<<"\n";
cout<<"Main     : " ;
i=0;mnb=0;
for(i=0;i<=str.size()-1;i++){cout<< str.at(i) << " " ; l=str.at(i); yy=stoi(&l); main_number[mnb]=yy;mnb+=1;}
cdi=0;
trp=prt_lk(sumofnum); sm[smm]=trp;//trp+=1;
cout<<"with sum : "<< sumofnum << " :: " << trp << " and i "  << i-1 <<"\n";
cout<<"\n";
cout<<"Number | : ";
for(i=0;i<=8;i++){cout<<sumarka[i] << " ";} //was 1 and 9
cdi=0;//lk=cd(sumone);
trp=prt_lk(sumone); sm[smm]=trp; smm+=1;
cout<<"with sum : " << sumone << " :: " << trp << " and i " << i-1  <<"\n";
cout<<"\n";
cout<<"Number / : ";
for(i=0;i<=8;i++){cout<<sumunark[i] <<" ";} //was 1 and 9
cdi=0;
trp=prt_lk(sumtwo); sm[smm]=trp; smm+=1;
cout<<"with sum : " << sumtwo << " :: " << trp << " and i " << i-1 <<"\n";
cout<<"\n";
cout<<"Kathetos : " ;
for(i=0;i<=str.size()-1;i++){sumofkath=sumofkath+kathetos[i];}
for(i=0;i<=str.size()-1;i++){cout<<kathetos[i] << " " ;}
cdi=0;trp=prt_lk(sumofkath);
sm[smm]=trp;smm+=1;
cout<<"with sum " << sumofkath << " :: " << trp << " and i " << i-1 << "\n";
cout<<"\n";
cout<<"\n";
cout<<"---Playing with Indexing starting with zero \n";
cout<<"Main Number : ";
for(int i=0;i<=str.size()-1;i++){cout<<main_number[i]<< " " ;}
cout<<" ----> " << sm[0] <<"\n";
keeper_is_min=str.size()-1;
int max_number_in_line=get_max(str.size(),main_number);
cout<<"\n";
if(sxolia==1){cout<<"will use keeper : " << keeper_is_min << " with max number in line " << max_number_in_line <<"\n";}
idxs_zero(str.size()-1,main_number,514,0,max_number_in_line);
//keeper=str.size()-1;
cout<<"Number | : ";
for(i=0;i<=8;i++){cout<<sumarka[i] << " ";} //was 1  and 9
cout<<" ----> " << sm[1] <<"\n";
max_number_in_line=get_max(9,sumarka);
idxs_zero(8,sumarka,514,8,max_number_in_line); //was 9
cout<<"Number / : ";
for(i=0;i<=8;i++){cout<<sumunark[i] <<" ";} //was 1 and 9
cout<<" ----> " << sm[2] <<"\n";
max_number_in_line=get_max(9,sumunark);
idxs_zero(8,sumunark,514,8,max_number_in_line); //was 9
cout<<"\n";
cout<<"Kathetos : ";
for(i=0;i<=str.size()-1;i++){cout<<kathetos[i] << " " ;}
cout<<" ----> " << sm[3] <<"\n";
max_number_in_line=get_max(str.size(),kathetos);
idxs_zero(str.size()-1,kathetos,514,0,max_number_in_line);
cout<<"\n";
cout<<"C:Main Sums | I:Index Sums\n";
cout<<"                  C     I\n";
for(int i=0;i<=3;i++){
cout<<"@i " << i << " --> " << lkrp[i] << sm[i] << " and " << ksm[i] <<" and " << smis[i] <<"\n";
}
if(main_t==0){main_n=sm[0]; main_t+=1;}
cout<<"\n";
cout<<"---------------------Prostheseis Akron-----------\n";
shr_akra('P','A',smis[0],smis[1],smis[2],smis[3]);
cout<<"---------------------Afaireseis Akron------------\n";
shr_akra('A','A',smis[0],smis[1],smis[2],smis[3]);
cout<<"---------------Prosthesi Akrou-Mesou-------------\n";
shr_akra('M','A',smis[0],smis[1],smis[2],smis[3]);

int tmp=0;
mln.clear();
str.clear();
if(smis[0]<0){tmp=abs(smis[0]);smis[0]=tmp;}
tmp=0;
if(smis[1]<0){tmp=abs(smis[1]);smis[1]=tmp;}
tmp=0;
if(smis[2]<0){tmp=abs(smis[2]);smis[2]=tmp;}
tmp=0;
if(smis[3]<0){tmp=abs(smis[3]);smis[3]=tmp;}
mln+=to_string(smis[0]);
mln+=to_string(smis[1]);
mln+=to_string(smis[2]);
mln+=to_string(smis[3]);
str=mln;
cout<<"using new str : "<< str <<" with moving time " << g << "\n";
for(int i=0;i<=4;i++){smis[i]=-1;} semis=0;
for(int i=0;i<=4;i++){ksm[i]=-1;} ksum=0;
for(int i=0;i<=4;i++){sm[i]=-1;} smm=0;
std::this_thread::sleep_for(std::chrono::milliseconds(timen));
}

cout<<"\n";
cout<<"for main number sum : " << main_n <<"\n";
for(int l=1;l<=g_times-1;l++){cout<<"@" <<l << " ::--> " << collect_them[l] << "\n" ;}
cout<<"\n";
cout<<"i prosthesi merous i olon tha sou vgalei to athroisma tou main number\n";

return 0;
}
