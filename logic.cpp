#include <stdbool.h>
#include <stdio.h>

#define p(x) printf(" %d ", x)

//all function will be defined on NAND
bool NAND (bool a, bool b)	{ return !(a && b); }
bool NOT (bool a)	{ return NAND(a, a); }
bool AND (bool a, bool b)	{ return NOT(NAND(a,b)); }
bool OR (bool a, bool b) { return NAND( NOT(a), NOT(b)); }
bool XOR (bool a, bool b) { return AND( OR(a,b) , NAND(a,b)); }



int main(){
	p(XOR(1,1));
	p(XOR(0,1));
	p(XOR(1,0));
	p(XOR(0,0));

}