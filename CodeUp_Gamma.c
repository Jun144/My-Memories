/*
 ============================================================================
 Name        : CodeUp_Gamma.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* CodeUp 1001

#include <stdio.h>
int main(void) {
	printf("Hello");
}

*/

/* CodeUp 1002

#include <stdio.h>
int main(void) {
	printf("Hello World");
}

 */

/* CodeUp 1003

#include <stdio.h>
int main(void) {
	printf("Hello\nWorld");
}

 */

/* CodeUp 1004

 #include <stdio.h>
int main(void) {
	printf("\'Hello\'");
}

*/

/* CodeUp 4016

#include <stdio.h>
int main(){
	int a,b,c,gcd,i;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<=a;i++){
		if(a%i==0&&b%i==0&&c%i==0) gcd=i;
	}
	printf("%d",gcd);
}

*/

/* CodeUp 4751

#include <stdio.h>
int main(){
	int i,j,n,temp1,temp2,temp0;
	static int a[100][3];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(j=0;j<=n;j++){
		for(i=0;i<n-1;i++){
			if(a[i][2]<a[i+1][2]){
				temp0=a[i][0];
				temp1=a[i][1];
				temp2=a[i][2];
				a[i][0]=a[i+1][0];
				a[i][1]=a[i+1][1];
				a[i][2]=a[i+1][2];
				a[i+1][0]=temp0;
				a[i+1][1]=temp1;
				a[i+1][2]=temp2;
			}
		}
	}
	if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]){
		for(i=3;;i++){
			if(a[i][0]!=a[0][0]) {
				a[2][0]=a[i][0];
				a[2][1]=a[i][1];
				break;
			}
		}
	}
	printf("%d %d\n%d %d\n%d %d",a[0][0],a[0][1],a[1][0],a[1][1],a[2][0],a[2][1]);
}
*/

/* CodeUp 4696
#include <stdio.h>
int main(){
	int i,j,n;
	int sum,sumi,sumj;
	int x;
	static int a[100050];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n;i<100050;i++) a[i]=1200000000;
	sum=a[0]+a[1];
	sumi=0; sumj=1;
	sum=(sum>0) ? sum:-sum;
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(i>j){
				x=a[i]+a[j];
				x=(x>0) ? x:-x;
				if(x<sum){
					sum=x;
					sumi=i;
					sumj=j;
				}
				if(sum==0) goto end;
			}
		}
	}
	end:
	i=(a[sumi]>=a[sumj]) ? a[sumi]:a[sumj];
	j=(a[sumi]<a[sumj]) ? a[sumi]:a[sumj];
	printf("%d %d",j,i);
}
*/

/* CodeUp 1677

#include <stdio.h>
int main(){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	printf("+");
	for(i=1;i<n-1;i++) printf("-");
	printf("+\n");
	for(j=1;j<m-1;j++){
		printf("|");
		for(i=1;i<n-1;i++) printf(" ");
		printf("|\n");
	}
	printf("+");
	for(i=1;i<n-1;i++) printf("-");
	printf("+");
}

*/

/* CodeUp 1515

#include <stdio.h>
int main(){
	int a,i,j;
	static int f[27][27],l[27][27];
	for(i=1;i<26;i++){
		for(j=1;j<26;j++) scanf("%d",&f[i][j]);
	}
	for(i=1;i<26;i++){
			for(j=1;j<26;j++) {
				a=f[i-1][j]+f[i+1][j]+f[i-1][j-1]+f[i][j-1]+f[i+1][j-1]
				+f[i-1][j+1]+f[i][j+1]+f[i+1][j+1];
				if(f[i][j]==1){
					if(a==2||a==3) l[i][j]=1;
					else l[i][j]=0;
				}
				else{
					if(a==3) l[i][j]=1;
					else l[i][j]=0;
				}
			}
	}
	for(i=1;i<26;i++){
		for(j=1;j<26;j++) printf("%d ",l[i][j]);
		if(i!=25) printf("\n");
	}
}

*/

/* CodeUp 1520
#include <stdio.h>
int main(){
	int a,n,m,i,j,x,y,z,k,q;
	static int f[172][172],l[172][172];
	scanf("%d %d",&n,&m);
	scanf("%d %d %d",&x,&y,&z);
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++) scanf("%d",&f[i][j]);
	}
	scanf("%d",&k);
	for(q=0;q<k;q++){
		for(i=1;i<n+1;i++){
			for(j=1;j<m+1;j++) {
				a=f[i-1][j]+f[i+1][j]+f[i-1][j-1]+f[i][j-1]+f[i+1][j-1]
				+f[i-1][j+1]+f[i][j+1]+f[i+1][j+1];
				if(f[i][j]==1){
					if(a>=y&&a<z) l[i][j]=1;
					else l[i][j]=0;
				}
				else{
					if(a==x) l[i][j]=1;
					else l[i][j]=0;
				}
			}
		}
		for(i=1;i<n+1;i++){
				for(j=1;j<m+1;j++) f[i][j]=l[i][j];
		}
	}
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++) printf("%d ",f[i][j]);
		if(i!=m) printf("\n");
	}
}
*/

/*  CodeUp 1525
#include <stdio.h>
int main(){
	static int a[12][12],b[12][12];
	int n,i,j,k;
	static int p[8][4];
	for(i=0;i<8;i++) p[i][0]=i+1;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++) scanf("%d",&a[i][j]);
	}
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d %d",&p[i][1],&p[i][2]);
	for(i=0;i<12;i++) a[i][0]=a[i][11]=a[0][i]=a[11][i]=-1;
	for(i=1;i<=10;i++){
			for(j=1;j<=10;j++){
				if(a[i][j]>0){
					for(k=0;k<=a[i][j]&&a[i-k][j]!=-1;){
						b[i-k][j]=-2;
						k++;
					}
					for(k=0;k<=a[i][j]&&a[i+k][j]!=-1;){
						b[i+k][j]=-2;
						k++;
					}
					for(k=0;k<=a[i][j]&&a[i][j+k]!=-1;){
						b[i][j+k]=-2;
						k++;
					}
					for(k=0;k<=a[i][j]&&a[i][j-k]!=-1;){
						b[i][j-k]=-2;
						k++;
					}

				}
				else b[i][j]=a[i][j];
			}
	}
	for(i=0;i<n;i++){
		if(b[p[i][1]][p[i][2]]==0){
			b[p[i][1]][p[i][2]]=i+1; p[i][3]=1;
		}
		else p[i][3]=0;
	}
	for(i=1;i<=10;i++){
			for(j=1;j<=10;j++) printf("%d ",b[i][j]);
			printf("\n");
	}
	printf("Character Information\n");
	for(i=1;i<=n;i++){
		printf("player %d",i);
		if(p[i-1][3]==1) printf(" survive");
		else printf(" dead");
		if(i!=n) printf("\n");
	}
}
*/

/* CodeUp 4711

#include <stdio.h>
int main(){
	int max,i,p;
	static int a[4][2];
	for(i=0;i<4;i++) scanf("%d %d",&a[i][0],&a[i][1]);
	p=max=a[0][1];
	for(i=1;i<4;i++){
		p=p+a[i][1]-a[i][0];
		max = (max>p) ? max:p;
	}
	printf("%d",max);
}

*/

/* CodeUp 4716

#include <stdio.h>
int main(){
	int max,i,p;
	static int a[10][2];
	for(i=0;i<10;i++) scanf("%d %d",&a[i][0],&a[i][1]);
	p=max=a[0][1];
	for(i=1;i<10;i++){
		p=p+a[i][1]-a[i][0];
		max = (max>p) ? max:p;
	}
	printf("%d",max);
}
*/

/* CodeUp 4056
#include <stdio.h>
int main(){
	int t,i;
	float g;
	scanf("%d",&t);//총급여액
	if(t<=500) g=0.7*t;
	else if(t<=1500) g=350+0.4*(t-500);
	else if(t<=4500) g=750+0.15*(t-1500);
	else if(t<=10000) g=1200+0.05*(t-4500);
	else g=1475+0.02*(t-10000);
	for(i=1;;i++){
		if(i<=g&&g<i+1) break;
	}
	printf("%d",i);
}
*/

/* CodeUp 4721
#include <stdio.h>
int main(){
	static int v[1000][3];
	static int i,n,a1,a2,a3,b1,b2,b3,c1,c2,c3,t1,t2,t3,w,ws;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d %d %d",&v[i][0],&v[i][1],&v[i][2]);
	for(i=0;i<n;i++){
		if(v[i][0]==1) a1++;
		if(v[i][0]==2) b1++;
		if(v[i][0]==3) c1++;
		if(v[i][1]==1) a2++;
		if(v[i][1]==2) b2++;
		if(v[i][1]==3) c2++;
		if(v[i][2]==1) a3++;
		if(v[i][2]==2) b3++;
		if(v[i][2]==3) c3++;
	}
	t1=a1+2*b1+3*c1;
	t2=a2+2*b2+3*c2;
	t3=a3+2*b3+3*c3;
	if(t1!=t2&&t2!=t3&&t3!=t1) w=(t1>t2) ? 1:(t2>t3) ? 2:3;
	else if(t1==t2&&t1<t3) w=3;
	else if(t1==t2&&t1>t3){
		if(c1>c2) w=1; else if(c1<c2) w=2;
		else{
			if(b1>b2) w=1; else if(b1<b2) w=2; else w=-1;
		}
	}
	else if(t1==t3&&t1<t2) w=2;
	else if(t1==t3&&t1>t2){
		if(c1>c3) w=1; else if(c1<c3) w=3;
		else{
			if(b1>b3) w=1; else if(b1<b3) w=3; else w=-1;
		}
	}
	else if(t3==t2&&t3<t1) w=1;
	else if(t3==t2&&t1<t3){
		if(c2>c3) w=2; else if(c2<c3) w=3;
		else{
			if(b2>b3) w=2; else if(b2<b3) w=3; else w=-2;
		}
	}
	else w=-1;
	switch(w){
	case 1: ws=t1; break;
	case 2: ws=t2; break;
	case 3: ws=t3; break;
	case -1: w=0;ws=t1;break;
	case -2: w=0;ws=t2;break;
	}
	printf("%d %d",w,ws);
}
*/

/* CodeUp 4031
#include <stdio.h>
int main(){
	static int maxo,maxe,i,max;
	static int a[7];
	for(i=0;i<7;i++) scanf("%d",&a[i]);
	for(i=0;i<7;i++){
		if(a[i]%2==0) maxe=(maxe>a[i]) ? maxe:a[i];
		else maxo=(maxo>a[i]) ? maxo:a[i];
	}
	max=maxo+maxe;
	printf("%d",max);
}
*/

/* CodeUp 4746
#include <stdio.h>
int main(){
	static int s[3],e[3];
	static int t,a,b;
	scanf("%d %d %d",&s[0],&s[1],&s[2]);
	scanf("%d",&t);
	e[2]=(s[2]+t)%60;
	b=(s[2]+t)/60;
	e[1]=(s[1]+b)%60;
	a=(s[1]+b)/60;
	e[0]=(s[0]+a)%24;
	printf("%d %d %d",e[0],e[1],e[2]);
}
*/

/* CodeUp 4741
#include <stdio.h>
int main(){
	static int s[3],e[3];
	static int t,a,b;
	scanf("%d %d",&s[0],&s[1]);
	scanf("%d",&t);
	e[1]=(s[1]+t)%60;
	a=(s[1]+t)/60;
	e[0]=(s[0]+a)%24;
	printf("%d %d",e[0],e[1]);
}

 */

/* CodeUp 1525 ++
#include <stdio.h>
int main(){
	static int input[12][12],output[12][12];
	int i,j,n,k,c;
	static int p[9][3];
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++) scanf("%d",&input[i][j]);
	}
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d %d",&p[i][0],&p[i][1]);
	for(i=0;i<12;i++) input[0][i]=input[i][0]=input[11][i]=input[i][11]=-1;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			if(input[i][j]>0){
				c=input[i][j];
				for(k=0;k<=c;k++){
					if(input[i][j+k]==-1) break;
					else output[i][j+k]=-2;
				}
				for(k=0;k<=c;k++){
					if(input[i][j-k]==-1) break;
					else output[i][j-k]=-2;
				}
				for(k=0;k<=c;k++){
					if(input[i+k][j]==-1) break;
					else output[i+k][j]=-2;
				}
				for(k=0;k<=c;k++){
					if(input[i-k][j]==-1) break;
					else output[i-k][j]=-2;
				}
			}
			if(output[i][j]==0) output[i][j]=input[i][j];
		}
	}
	for(i=1;i<=n;i++){
			if(output[p[i][0]][p[i][1]]!=0) p[i][2]=-1;
			else{
				p[i][2]=i;
				output[p[i][0]][p[i][1]]=i;
			}
		}
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++) printf("%d ",output[i][j]);
		printf("\n");
	}
		printf("Character Information\n");
		for(i=1;i<=n;i++){
			printf("player %d ",i);
			if(p[i][2]==-1) printf("dead");
			else printf("survive");
			if(i!=n) printf("\n");
		}
}
*/

/* CodeUp 1513
#include <stdio.h>
int main(){
	static int t[101][101];
	int i,j,n,c,m,dx,dy,x,y;
	dx=-1;dy=1;
	scanf("%d",&n);
	for(i=0;i<101;i++) t[i][0]=t[0][i]=t[n+1][i]=t[i][n+1]=-1;
	m=(n*n+n)/2;
	x=n;y=1;
	for(c=1;c<=m;){
		t[x][y]=c;
		if(t[x+dx][y+dy]!=0){
			if(dx==-1){
				c++;
				x=x-dx;
				t[x][y]=c;
				dx=1;dy=-1;
			}
			else{
				c++;
				y=y-dy;
				t[x][y]=c;
				dx=-1;dy=1;
			}
			if(c>=m) break;
		}
		c++;
		x+=dx; y+=dy;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++) printf("%d ",t[i][j]);
		if(i!=n) printf("\n");
	}
}
*/

/* CodeUp 2033
#include <stdio.h>
int main(){
	static int lad[100000][2];
	int k,i,n,s;
	scanf("%d %d",&k,&n);
	for(i=0;i<n;i++) scanf("%d %d",&lad[i][0],&lad[i][1]);
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(lad[i][0]==s){
			s=lad[i][1];
		}
		else if(lad[i][1]==s) s=lad[i][0];
	}
	printf("%d",s);
}

*/

/* CodeUp 1411
#include <stdio.h>
int main(){
	static int i,n,s,sum;
	static int c[50];
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d",&c[i]);
		sum+=c[i];
	}
	s=(n*n+n)/2;
	printf("%d",s-sum);
}
*/

/* CodeUp 1807
#include <stdio.h>
int main(){
	int a,i,b,l,lc,c;
	scanf("%d %d",&a,&b);
	lc=0;
	for(i=a;i<=b;i++){
		c=0;
		for(;;){
			if(i%2==0) i=i/2;
			else i=3*i+1;
			c++;
			if(i==1) break;
		}
		if(c>lc){
			lc=c;
			l=i;
		}
	}
	printf("%d",l);
}

*/

/* CodeUp 4726
#include <stdio.h>
int main(){
	int i,j,n,k,max;
	static int a[100000],b[100000];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-k+1;i++){
		for(j=0;j<k;j++){
			b[i]+=a[i+j];
		}
	}
	max=b[0];
	for(i=0;i<n-k+1;){
		max=(max>b[i]) ? max:b[i];
	}
	printf("%d",max);
}
*/

/* CodeUp 4726 ++
#include <stdio.h>
int main(){
	int i,j,n,k,max;
	static int a[100000],b[100000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==-99) break;
	}
	for(i=0;i<n-k+1;i++){
		for(j=i;j<i+k;j++){
			b[i]+=a[j];
		}
	}
	max=b[0];
	for(i=0;i<n-k+1;i++){
		max = (max>b[i]) ? max:b[i];
	}
	printf("%d",max);
}

*/

/* CodeUp 1099
#include <stdio.h>
int main(){
	static int a[10][10];
	static int i,j,x,y;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++) scanf("%d",&a[i][j]);
	}
	x=y=1;
	a[1][1]=9;
	for(;;){
		if(a[x][y+1]==0){
			a[x][y+1]=9;
			y++;
		}
		else if(a[x][y+1]==2){
			a[x][y+1]=9;
			break;
		}
		else if(a[x+1][y]==0){
			a[x+1][y]=9;
			x++;
		}
		else if(a[x+1][y]==2){
			a[x+1][y]=9;
			break;
		}
		else break;
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++) printf("%d ",a[i][j]);
		if(i!=9) printf("\n");
	}
}

*/

/* CodeUp 1098
#include <stdio.h>
int main(){
	static int b[100][100],s[10][4];
	int i,j,w,h,n;
	scanf("%d %d",&h,&w);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<4;j++) scanf("%d",&s[i][j]);
	}
	for(i=0;i<n;i++){
		if(s[i][1]==0){ //가로
			for(j=0;j<s[i][0];j++){
				b[s[i][2]-1][s[i][3]-1+j]=1;
			}
		}
		else{ //세로
			for(j=0;j<s[i][0];j++){
				b[s[i][2]-1+j][s[i][3]-1]=1;
			}
		}
	}
	for(i=0;i<h;i++){
		for(j=0;j<w;j++) printf("%d ",b[i][j]);
		if(i!=h-1) printf("\n");
	}
}

*/

/* CodeUp 1097
#include <stdio.h>
int main(){
	static int b[19][19],s[10][2];
	int i,j,n;
	for(i=0;i<19;i++){
		for(j=0;j<19;j++) scanf("%d",&b[i][j]);
	}
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d %d",&s[i][0],&s[i][1]);
	for(i=0;i<n;i++){
		for(j=0;j<19;j++) {
			b[s[i][0]-1][j]= (b[s[i][0]-1][j]==1) ? 0:1;
			b[j][s[i][1]-1]=(b[j][s[i][1]-1]==1) ? 0:1;
		}
	}
	for(i=0;i<19;i++){
		for(j=0;j<19;j++) printf("%d ",b[i][j]);
		if(i!=18) printf("\n");
	}
}
*/

/* CodeUp 1096
#include <stdio.h>
int main(){
	static int b[19][19],s[10][2];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d %d",&s[i][0],&s[i][1]);
	for(i=0;i<n;i++){
		b[s[i][0]-1][s[i][1]-1]=1;
	}
	for(i=0;i<19;i++){
		for(j=0;j<19;j++) printf("%d ",b[i][j]);
		if(i!=18) printf("\n");
	}
}
*/

/* CodeUp 1093
#include <stdio.h>
int main(){
	int i,n;
	static int s[23],c[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
		s[c[i]-1]++;
	}
	for(i=0;i<23;i++) printf("%d ",s[i]);
}
*/

/* CodeUp 1094
#include <stdio.h>
int main(){
	int i,n;
	static int c[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	for(i=n-1;i>=0;i--) printf("%d ",c[i]);
}

*/

/* CodeUp 1095*/
#include <stdio.h>
int main(){
	int i,n,min;
	static int c[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	min=c[0];
	for(i=0;i<n;i++) min=(min<c[i]) ? min:c[i];
	printf("%d",min);
}

