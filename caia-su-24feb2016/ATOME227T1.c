#include "dx.h"
void ATOME227T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=20227;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3685&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=625)) goto l1;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(870,R,V2)*/
V2=pile[WZ2]; 
if((V2!=2)) goto l1;
pile[v[22]]=160; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(160,R,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=41)) goto l1;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[3517])( );     /*DECSOM2(R,jvj+7)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1294,R,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==1483) goto l2;
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+14)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(206,715,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,v[13],642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=3684; pile[WZ2]=246; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,3684,246,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=20227; pile[WZ2]=218; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,20227,218,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-20); pile[WZ2]=jvj+13; pile[WZ3]=159; pile[WZ4]=jvj+15; 
(*f[298])( );     /*TRIENS1(jvj+14,(-20),jvj+13,159,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+15,289,158,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[481])( );     /*STOCKER0(jvj+9)*/
goto l1;
}
