#include "dx.h"
void TRI21(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RO=0,V2=0;
int XN,XX,Z;
int RE;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

XN=pile[v[22]]; XX=pile[v[22]+1]; Z=pile[v[22]+2]; RE=pile[v[22]+3]; v[22]+=4; 
if((v[3]>0)) goto l1;
(*f[234])( );     /*GARBAG0()*/
l1:RO=v[3];
V2=t[RO];
v[3]=V2;
x[jvj+1]=RO ;z[jvj+1]=0;
x[RE]=x[jvj+1] ;z[RE]=z[jvj+1];
r[RO]=XX;
s[RO]=XN;
t[RO]=Z;
v[0]=jvj; v[22]-=4; return;
}
