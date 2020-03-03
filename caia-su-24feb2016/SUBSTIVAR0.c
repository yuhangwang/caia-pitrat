#include "dx.h"
void SUBSTIVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V16=0;
int S,X,Y,BT,T;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; BT=pile[v[22]+3]; T=pile[v[22]+4]; R=pile[v[22]+5]; v[22]+=6; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[BT]!=250)) goto l2;
pile[v[22]]=T; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[760])( );     /*MEMEX0(T,X,jvj+1)*/
if((x[jvj+1]==135)) goto l1;
l2:x[R]=x[T] ;z[R]=z[T];
if((x[BT]==250)) goto l4;
pile[v[22]]=T; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[760])( );     /*MEMEX0(T,X,jvj+2)*/
if((x[jvj+2]==135)) goto l3;
l4:pile[v[22]]=100; pile[WZ1]=T; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,T,jvj+4)*/
x[jvj+10]=w[x[jvj+4]][9];
l5:if((x[jvj+10]>0)) goto l6;
x[jvj+11]=w[x[jvj+4]][8];
l8:if((x[jvj+11]<=0)) goto l11;
x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=T; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,T,jvj+8)*/
x[jvj+12]=x[jvj+8] ;z[jvj+12]=z[jvj+8];
l9:if((x[jvj+12]>0)) goto l10;
x[jvj+11]=t[x[jvj+11]];
goto l8;
l1:pile[v[22]]=Y; pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(Y,R)*/
l11:v[0]=jvj; v[22]-=6; return;
l3:pile[v[22]]=Y; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(Y,jvj+3)*/
if((V17=w[x[BT]][1])==incon) goto l11;
if((V17!=23)) goto l12;
V16=x[T];
pile[v[22]]=BT; pile[WZ1]=S; pile[WZ2]=V16; 
(*f[134])( );     /*OTA0(BT,S,V16)*/
pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(S,BT,jvj+3)*/
goto l11;
l6:x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=T; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+5,T,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ2]=jvj+5; pile[WZ3]=X; pile[WZ4]=Y; 
(*f[4003])( );     /*SUBSTIVAR1(jvj+6,T,jvj+5,X,Y)*/
l7:x[jvj+10]=t[x[jvj+10]];
goto l5;
l10:x[jvj+9]=s[x[jvj+12]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+12];
pile[v[22]]=jvj+9; pile[WZ1]=T; pile[WZ2]=jvj+7; pile[WZ3]=X; pile[WZ4]=Y; 
(*f[4003])( );     /*SUBSTIVAR1(jvj+9,T,jvj+7,X,Y)*/
x[jvj+12]=t[x[jvj+12]];
goto l9;
l12:pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(S,BT,jvj+3)*/
goto l11;
}
