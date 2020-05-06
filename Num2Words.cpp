#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int g=DETECT,e;
initgraph(&g, &e,"C:\\TURBOC3\\BGI");
int x=getmaxx()/2,y=getmaxy()/2;
setcolor(12);
	for(int m=178;m>0;m-=2)
	{
	setcolor(m-175);
	delay(10);
	circle(x-10,y-10,m);
	}
setcolor(14);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 6);
settextjustify(x,y);
outtextxy(x-170,y-120,"Numbers");
delay(300);
  outtextxy(x-50,y-40,"To");
 delay(300);
  outtextxy(x-125,y+40,"Words");
getche();
  closegraph();
char ch,c,d;
int temp=0,size=0,rem,count=0;
int num[310],num1[310];
char ones[10][10]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
char teen[10][20] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
char ty[10][10] = { "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
char ill[100][100] = { "M", "B", "Tr", "Quadr", "Quint", "Sext", "Sept", "Oct", "Non", "Dec","Undec","Duodec","Tredec","Quattuordec","Quindec","Sexdec","Septendec","Octodec","Novemdec","Vigint","Unvigint","Duovigint","Trevigint","Quattuorvigint","Quinvigint","Sexvigint","Septenvigint","Octovigint","Novemvigint","Trigint","Untrigint","Duotrigint","Tretrigint","Quattuortrigint","Quintrigint","Sextrigint","Septentrigint","Octotrigint","Novemtrigint","Quadragint","Unquadragint","Duoquadragint",
"Trequadragint","Quattuorquadragint","quinquadragint","Sexquadragint","Septenquadragint","Octoquadragint","Novemquadragint","Quinquagint","Unquinquagint","Duoquinquagint","Trequinquagint","Quattuorquinquagint","Quinquinquagint","Sexquinquagint","Septenquinquagint","Octoquinquagint","Novemquinquagint","Sexagint","Unsexagint","Duosexagint","Tresexagint","Quattuorsexagint","Quinsexagint",
"Sexsexagint","Septensexagint","Octosexagint","Novemsexagint","Septuagint","Unseptuagint","Duoseptuagint","Treseptuagint","Quattuorseptuagint","Quinseptuagint","Sexseptuagint","Septenseptuagint","Octoseptuagint","Novemseptuagint","Octogint","Unoctogint","Duooctogint","Treoctogint","Quattuoroctogint","Quinoctogint","Sexoctogint","Septenoctogint","Octooctogint","Novemoctogint","Nonagint","Unnonagint","Duononagint","Trenonagint","Quattuornonagint","Quinnonagint","Sexnonagint","Septennonagint","Octononagint","Novemnonagint","Cent"};
textcolor(12);cprintf("Enter the number: ");
for(int i=1;;++i)
{
	if(scanf("%1d%1[\n]", &num[i-1],&ch)==2 || scanf("%[^0-9\n]%1[\n]",&d,&ch)==2 )
	break;
	else if(scanf("%[^0-9\n]",&c)==1)
	continue;
}
size=i;
cprintf("Number of digits: ");cout<<size<<endl;
if(size>306)
{
cout<<"\n\nError too many digits! "<<endl;
getche();
exit(0);
}
rem=(size%3);
if(rem==0)
rem=3;
for(int k=0;k<(3-rem);k++)
num1[k]=0;
for(int j=0,f=(3-rem);j<(size+3-rem);j++,f++)
num1[f]=num[j];
temp=(size+3-rem)/3;
cprintf("The number in words: ");
for(i=0;i<(size+3-rem);i+=3,temp--)
{
if(num1[i]==0 && num1[i+1]==0 && num1[i+2]==0)
{
	count+=3;
	continue;
}
if(num1[i]!=0)
	cout<<ones[num1[i]-1]<<" Hundred ";
if(num1[i+1]>1)
	{
	cout<<ty[num1[i+1]-2]<<" ";
	if(num1[i+2]!=0)
	cout<<ones[num1[i+2]-1]<<" ";
	}
if(num1[i+1]==1)
	cout<<teen[num1[i+2]]<<" ";
if(num1[i+1]==0)
	cout<<ones[num1[i+2]-1]<<" ";
if((temp-3)>=0)
	cout<<ill[temp-3]<<"illion ";
if(temp==2)
	cout<<"Thousand ";
}
if( (size==1 && num[0]==0) || (count==(size+3-rem)) )
cout<<"Zero"<<endl;
getche();
}

