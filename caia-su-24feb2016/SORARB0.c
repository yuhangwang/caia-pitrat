#include "dx.h"
void SORARB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,I=0,L=0,V8=0,V4=0,V5=0;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=10543;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==882&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=incon;
K=0;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
I=0;
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+6; 
(*f[391])( );     /*QUADRI10(117,0,130,0,jvj+6)*/
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
if((x[jvj+5]!=x[jvj+4])) goto l1;
L=I;
l3:if(x[jvj+5]!=incon) goto l4;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
l1:pile[v[22]]=I; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1200])( );     /*SORARC0(I,jvj+5,jvj+6,L)*/
L=pile[WZ3]; 
goto l3;
l4:pile[v[22]]=226; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(226,jvj+5,jvj+8)*/
if((x[jvj+8]!=0)) goto l5;
V4=K+1;
pile[v[22]]=L; pile[WZ1]=K; pile[WZ2]=V4; 
(*f[364])( );     /*SLG3(L,K,V4)*/
fflush(stdout);
l5:for(i=x[jvj+8],V5=0;i>0;i=t[i],V5++)  ;
if((V5>1)) goto l6;
if((V5!=1)) goto l7;
if((x[jvj+8]<=0)) goto l7;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=L; pile[WZ2]=K; pile[WZ3]=jvj+6; 
(*f[1201])( );     /*SORARB1(jvj+9,L,K,jvj+6)*/
goto l7;
l6:pile[v[22]]=L; pile[WZ1]=K; 
(*f[1175])( );     /*SLG4(L,K)*/
V8=K+1;
l2:if((x[jvj+8]<=0)) goto l7;
x[jvj+7]=s[x[jvj+8]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+8];
pile[v[22]]=jvj+7; pile[WZ1]=0; pile[WZ2]=V8; pile[WZ3]=jvj+6; 
(*f[1201])( );     /*SORARB1(jvj+7,0,V8,jvj+6)*/
x[jvj+8]=t[x[jvj+8]];
goto l2;
}
