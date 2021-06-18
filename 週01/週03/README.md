# 2020cce
2021/02/26程式碼倉庫
## 第一題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%5)/1);
}
```
## 第二題程式碼

```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) ans=ans+1;
	}
	printf("%d\n",ans);
}
```
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
	int a[10],ans=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0) ans=ans+1;
	}
	printf("%d\n",ans);
}
```
## 第四題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	if(n>=90) printf("A\n");
	else if(n<90 && n>=80) printf("B\n");
	else if(n<80 && n>=60) printf("C\n");
	else  printf("F\n");
}
```
## 第五題程式碼
```C
#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		for(int i=1;i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			{
				temp=i;
			}
		}
	}
	
	if(b>a)
	{
		for(int i=1;i<=a;i++)
		{
			if(a%i==0 && b%i==0)
			{
				temp=i;
			}
		}
	}
	
	a=a/temp;
	b=b/temp;
	
	printf("%d %d\n",a,b);
}
```	
2021/03/05程式碼倉庫
## 第一題程式碼
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int  *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
## 第二題程式碼
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int  *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int  *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int  *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int  *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    return 0;
}
```
2021/03/12程式碼倉庫
## 第一題程式碼
```C
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,20,40};
    int *p=&a[2];
    *p=222;
    p=p+2;
    *p=666;
}
```
## 第二題程式碼
```C
#include <stdio.h>
int a[5]={ 0,10,20,30,40};
void printAll(){
    for(int i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");}
int main()
{
    printAll();
    int *p=&a[2];
    *p=222;
    printAll();
    p=p+2;
    *p=666;
    printAll();
    p--;
    *p=555;
    printAll();
}
```
## 第三題程式碼
```C
#include <stdio.h>
int a[5]={ 0,10,20,30,40};
void printAll(){
    for(int i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");}
int main()
{
    printAll();
    int *p=&a[2];
    *p=222;
    printAll();
    printf("p心裡小紙條記的值是:%d\n",p);
    p=p+2;
    *p=666;
    printAll();
    printf("p心裡小紙條記的值是:%d\n",p);
    p--;
    *p=555;
    printAll();
    printf("p心裡小紙條記的值是:%d\n",p);
}
```
## 第四題程式碼
```C
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main()
{
    int b[10];

    int *p=(int*)malloc(sizeof(int)*10);

    return 0;
}
```
2021/03/19程式碼倉庫
## 第一題程式碼	
```C
#include <stdio.h>
struct POINT
{
    float x,y;
};

int main()
{
    struct POINT a;
}
```
## 第二題程式碼
```C
#include <stdio.h>
struct POINT
{
    float x,y;
};

int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
}
```
## 第三題程式碼
```C
#include <stdio.h>
struct POINT
{
    float x,y;
};

int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
    
    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    
    return 0;
}
```
## 第四題程式碼
```C
#include <stdio.h>
struct DATA
{
    int x,y;
}a[3];
struct DATA b={100,200};
int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);

    struct DATA c;
    printf("c: %d %d 像亂碼\n",c.x,c.y);

    c=b;
    printf("c: %d %d\n",c.x,c.y);
}
```
## 第五題程式碼
```C
#include <stdio.h>
struct POINT
{
    float x,y,z;
};
struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};
int main()
{
    struct POINT *p=& point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
}
```
2021/03/26程式碼倉庫
## 第一題程式碼	
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);
}
```
## 第二題程式碼
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("你看看你看看,現在印出來的line4: ==%s==\n",line4);
}
```
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};

    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }
}
```
## 第四題程式碼
```C
#include <stdio.h>
int main()
{
    printf("請看看值是多少: %d",'\0');
}
```
## 第五題程式碼
```C
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("左邊大\n");
    }else{
    printf("右邊大\n");}
}
```
## 第六題程式碼
```C
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
	scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
		if(strcmp(line[i],line[j])>0){
		strcpy(temp,line[i]);
		strcpy(line[i],line[j]);
		strcpy(line[j],temp);
		}
		}
	}
	for(int i=0;i<N;i++){
	printf("%s\n",line[i]);
	}
}
```
2021/04/09程式碼倉庫
## 第一題程式碼	
```C
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
	scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
		if(strcmp(line[i],line[j])>0){
		strcpy(temp,line[i]);
		strcpy(line[i],line[j]);
		strcpy(line[j],temp);
		}
		}
	}
	for(int i=0;i<N;i++){
	printf("%s\n",line[i]);
	}
} 
```    
 ## 第二題程式碼
 ```C
 #include <stdio.h>
#include <string.h>
int main()
{
	char a[3];
	for(int i=0;i<4;i++)
	{
		scanf("%c",&a[i]);
	}
	
	if(a[0] == a[3] && a[1] == a[2]) printf("YES\n");
	else printf("NO\n");
}
```
## 第三題程式碼
```C
#include <stdio.h>
int f(int n)
{
	int p;
	int m=0;
	
	while(n>0)
	{
		p=n%10;
		n=n/10;
		m=p+m*10;
	}
	return m;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	printf("%d\n",f(m));
}
```
## 第四題程式碼
```C
#include <stdio.h>
int main()
{
	char a[11];
	int i,x,n,count=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0) break;
	}
	scanf("%d",&x);
	n=i;
	for(i=0;i<n;i++)
	{
		if(a[i] == x) count++;
	}
	printf("%d\n",count);
}
```
## 第五題程式碼
```C
#include <stdio.h>
int f(int a,int b)
{
	if (a<b) return -1;
	else if(a==b) return 0;
	else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
## 第六題程式碼
```C
#include <stdio.h>
int main()
{
	int a,sum=0;
	while (a!=999)//999是終止條件
	{
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);//a=999
		sum+=a;
	}
	printf("The total is: %d",sum-999);
}
```
## 第七題程式碼
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a%b);
}
```
## 第八題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	if(n>=90) printf("A");
	else if(n < 90 &&  n >= 80) printf("B");
	else if(n< 80 && n>=70)printf("C");
	else if(n< 70 && n>=60)printf("D");
	else printf("F");
}
```
## 第九題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",100+((n-1500)/250)*5+5);
}
```
## 第十題程式碼
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,(n%50)/10,(n%10)/5,(n%5)/1);
}
```
2021/04/30程式碼倉庫
## 第一題程式碼	
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	
	for(int t=0;t<T;t++){
	int N=0;
	while(gets(line)!=NULL){
	if(strcmp(line,"")==0) break;
	
	strcpy(tree[N],line);
	N++;
	}
	
	qsort(tree,N,32,compare);
	
	if(t>0) printf("\n");
	int ans=1;
	printf("%s ",tree[0]);
	for(int i=0;i<N-1;i++)
	{
		if(strcmp(tree[i],tree[i+1])==0)
		{
			ans++;
		}
		
		else
		{
			printf("%.4f\n",100*ans/(float)N);
			ans=1;
			printf("%s ",tree[i+1]);
		}
	}
	printf("%.4f\n",100*ans/(float)N);
}
}
```
2021/05/07程式碼倉庫
## 第一題程式碼	
```C
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare(const void *p1,const void *p2){
	int d1=*(int*)p1;
	int d2=*(int*)p2;
	if(d1>d2)return 1;
	if(d1==d2)return 0;
	if(d1<d2)return -1;
	}
int main()
{
	qsort(a,10,sizeof(int),compare);
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
```
## 第二題程式碼	
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[2000][80];
char others[80];
int compare(const void*p1,const void*p2)
{
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	
	int result=strcmp(s1,s2);
	if(result>0) return 1;
	if(result==0)return 0;
	if(result<0)return -1;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",name[i]);
		gets(others);
		}
	qsort(name,n,80,compare);
	

	printf("%s ",name[0]);
	int ans=1;
	for(int i=0;i<n-1;i++){
		if(strcmp(name[i],name[i+1])==0){
		ans++;}else{
			printf("%d\n",ans);
			printf("%s ",name[i+1]);
			ans=1;
	}
}
printf("%d\n",ans);
}
```
## 第三題程式碼	
```C
#include <stdio.h>
struct data{
    int ans;
    char c;
    };
    struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}   
```
## 第四題程式碼	
```C
#include <stdio.h>
typedef struct data{
    int ans;
    char c;
    }DATA;
    ///struct data box;
    DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
```
## 第五題程式碼	
```C
#include <stdio.h>
char line[2000];
int ans[256];
int main()
{
	for(int t=0;gets(line);t++){
	
		if(t>0) printf("\n");
		printf("blahblahblah\n");
		printf("blahblahblah\n");
		printf("blahblahblah\n");
	}
}
```
2021/05/14程式碼倉庫
## 第一題程式碼
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={};
		
		for(int i=0;line[i]!=0;i++){
		char c=line[i];
		ans[c]++;
		}
		
		if (t>0) printf("\n");
		for(int i=0;i<256;i++){
		if(ans[i]>0)printf("%d %d\n",i,ans[i]);
		}
		}
}
```
## 第二題程式碼
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={};
		char c[256]={};
		for(int i=0;i<256;i++) c[i]=i;
		
		for(int i=0;line[i]!=0;i++){
		char c=line[i];
		ans[c]++;
		}
		
		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
					}
				if(ans[i] == ans[j] && c[i]<c[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
					}
				}
			}
		if (t>0) printf("\n");
		for(int i=0;i<256;i++){
		if(ans[i]>0)printf("%d %d\n",c[i],ans[i]);
		}
	}	
}
```
## 第三題程式碼
```C
#include<stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
	int ans=0;
	
	for(int k=0;k<N-1;k++){
		for(int i=0;i<N-1;i++){
			if(a[i]>a[i+1]){
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				ans++;
				}
			}
		}
	printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
2021/05/21程式碼倉庫
## 第一題程式碼
```C
void setup()//只做一次設定
{
size(1024,400);
}
void draw()//每秒狂做60次
{
if(mousePressed)background(160,200,200);
else background(15,165,200);
textSize(50);//字的大小  設50號字
text(a,100,100);//將a在100,100畫出來
}
int a=0;//外部變數
void mousePressed(){//按下去時，會呼叫這個函式
  a++;
}
```
## 第二題程式碼
```C
void setup(){
  size(1024,400);
  textFont(createFont ("標楷體",50));
}
void draw(){
  background(160,200,200);
  textSize(50);
  int h=hour();
  int m=minute();
  int s=second();
  fill(255,0,0);//充滿墨水的色彩
  text("NOW:"+ h +":"+ m +":"+ s ,100,100);//現在時間
 //    字串    數 字串 數 字串 數
  int total= h*60*60+m*60+s;
  int total2=12*60*60+0*60+0;
  text("總秒數:"+total,100,200);
  int ans=total2-total;
  int hh=ans/60/60%60,mm=ans/60%60,ss=ans%60;
  text("還剩下:"+hh+":"+mm+":"+ss,100,300);
}
```
2021/05/28程式碼倉庫
## 第一題程式碼
```C
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++)a[i]=i+1;
  for(int i=0;i<10000;i++){
  int i1=(int)random(49),i2=(int)random(49);
  int temp=a[i1];
  a[i1]=a[i2];
  a[i2]=temp;
}
}
int N=0;
void draw(){
  background(#2C9CF0);
  for(int i=0;i<N;i++){
    fill(255);ellipse(50+i*50,100,40,40);
    textAlign(CENTER,CENTER);
    fill(0);  text(a[i],50+i*50,100);
  }
}
void mousePressed(){
  N++;
}
```
2021/06/04程式碼倉庫
## 第一題程式碼
```C
void setup(){
    size(400,200);
    textSize(40);
}
void draw(){
    background(41,109,207);
    int s=second();
    text(s,100,100);
}
```
## 第二題程式碼
```C
void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(41,109,207);
  int s=second();
  text(9-s%10,100,100);
}
```
## 第三題程式碼
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player=new SoundFile(this,"tada.mp3");
}
void draw(){
  background(41,109,207);
  int s=second();
  text(9-s%10,100,100);
  if(9-s%10==0 &&!player.isPlaying()){
    player.play();
  }
}
```
## 第四題程式碼
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player=new SoundFile(this,"bell.mp3");
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  if(player.isPlaying() ){
    player.stop();
  }else{
    player.play();
  }
}
```
## 第五題程式碼
```C
function setup(){
    createCanvas(400,200);
    textSize(40);
}
function draw(){
    background(41,109,207);
    let s=second();
    text(s,100,100);
}
```
2021/06/11程式碼倉庫
## 第一題程式碼
```C
void setup()
{
    size(400,200);
}
void draw()
{
  background(57,255,127);
  fill(255);
  ellipse(100,100,180,180);
  fill(255,0,0);
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}
```
## 第二題程式碼
```C
void setup()
{
    size(400,200);
    fill(255,0,0);
    textSize(40);
}
float shift=0,v=0;
void mousePressed()
{
  v=random(10)+5;
}
void draw()
{
  background(57,255,127);
  for(int i=0;i<24;i++)
{
  if(i%3==0)fill(0);
  if(i%3==1)fill(255);
  if(i%3==2)fill(200,180,0);
  float start=radians(0+shift+i*360/24);
  float stop=radians(360/24+shift+i*360/24);
  arc(100,100,180,180,start,stop);
  if(v>0.1)
{
  shift+=v;
  v=v*0.99;
}
  text(shift,200,100);
  text(v,200,150);
}
}    
```
2021/06/18程式碼倉庫
## 第一題程式碼
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:  "+Q,100,100);
  text("A:  "+line,100,150);
}
void keyPressed(){
  line=line+key;
}
```
## 第二題程式碼
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:  "+Q,100,100);
  text("You:"+line,100,150);
}
void mousePressed(){
  line=line+"a";
}
```
## 第三題程式碼
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:  "+Q,100,100);
  text("A:  "+line,100,150);
}
void keyPressed(){
  int len=line.length();
  if(key>='a' && key<='z') line = line+key;
  if(key>='A' && key<='Z') line = line+key;
  if(key==BACKSPACE) line=line.substring(0,len-1);
}
```
## 第四題程式碼
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:  "+Q,100,100);
  text("A:  "+line,100,150);
}
void keyPressed(){
  int len=line.length();
  if(key>='a' && key<='z') line = line+key;
  if(key>='A' && key<='Z') line = line+key;
  if(key==BACKSPACE && len>0) line=line.substring(0,len-1);
}
```
## 第五題程式碼
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Score: "+score,100,50);
  text("Q:  "+Q,100,100);
  text("A:  "+line,100,150);
}
int score=0;
void keyPressed(){
  int len=line.length();
  if(key>='a' && key<='z') line = line+key;
  if(key>='A' && key<='Z') line = line+key;
  if(key==BACKSPACE && len>0) line=line.substring(0,len-1);
  if(key == ENTER){
    if(line.equals(Q)==true){
      score++;
    }else score--;
}
}
```
## 第六題程式碼
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String []Q={ "hello" ,"world","other"};
int Qi=0;
void draw(){
  background(0);
  text("Score: "+score,100,50);
  text("Q: "+Q[Qi],100,100);
  text("A: "+line,100,150);
}
int score=0;
void keyPressed(){
  int len=line.length();
  if(key>='a' && key<='z') line = line+key;
  if(key>='A' && key<='Z') line = line+key;
  if(key==BACKSPACE && len>0) line=line.substring(0,len-1);
  if(key == ENTER){
    if(line.equals(Q[Qi])==true){
      score++;
      Qi++;
      line="";
    }else score--;
}
}
```
