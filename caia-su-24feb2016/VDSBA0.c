#include "dx.h"
void VDSBA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1260; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1260,B,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=A; pile[WZ1]=110; pile[WZ2]=jvj+3; 
(*f[329])( );     /*TRI13(A,110,jvj+3)*/
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
pile[v[22]]=B; pile[WZ1]=1260; 
(*f[36])( );     /*PLUSC0(B,1260,jvj+3)*/
l4:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=A)) goto l3;
x[R]=x[jvj+2] ;z[R]=z[jvj+2];
goto l4;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
}
