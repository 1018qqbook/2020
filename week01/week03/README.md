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
  
 
  
 
   
