#include<bits/stdc++.h>
using namespace std;
char n[100];
int s=0,c=0,t=0;
void back_track(int ind,int val){
	if(n[ind]=='\0'){
		if(val==s)
			c++;
		t++;
		return;
	}
	if(n[ind]=='+')
		back_track(ind+1,val+1);
	else
		if(n[ind]=='-')
			back_track(ind+1,val-1);
		else{
			back_track(ind+1,val+1);
			back_track(ind+1,val-1);
		}
}
int main(){
	char m[100];
	scanf("%s %s",m,n);
	for(int i=0;m[i];i++){
		if(m[i]=='+')
			 s++;
	    else s--;
	}

    back_track(0,0);
    cout<<t<<"\n";
    printf("%.9lf\n",(double)c/t);
	return 0;
}
