#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("lll", "s","fff");
Tab B = Tab("ttt", "o","aaa");
Tab C = Tab("n", "pp","uu");
Tab D = Tab("h", "l","nnn");
Tab E = Tab("yyy", "z","s");
Tab F = Tab("qqq", "xxx","uu");
Tab G = Tab("t", "bb","rrr");
Tab H = Tab("nn", "zz","www");
Tab I = Tab("n", "aa","r");
Tab J = Tab("eee", "v","dd");
Tab K = Tab("nnn", "hh","lll");
Tab L = Tab("m", "ggg","w");
Tab M = Tab("xxx", "n","b");
Tab N = Tab("e", "xx","oo");
Tab O = Tab("xxx", "pp","x");
Tab P = Tab("p", "pp","cc");
Tab Q = Tab("b", "jj","kk");
Tab R = Tab("ttt", "bb","uuu");
Tab S = Tab("xxx", "a","ttt");
Tab T = Tab("t", "qq","ss");
Tab U = Tab("o", "uu","ttt");
Tab V = Tab("g", "eee","mm");
Tab W = Tab("l", "z","oo");
Tab X = Tab("cc", "v","g");
Tab Y = Tab("d", "jjj","o");
Tab Z = Tab("mm", "r","vvv");
a.newTab(A);
b.newTab(B);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(C);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(D);
d.newTab(E);
a.newTab(F);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(G);
b.moveActiveTabTo(0);
c.newTab(H);
d.moveActiveTabTo(0);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(I);
a.changeActiveTabTo(0);
b.newTab(J);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(K);
b.moveActiveTabTo(5);
c.newTab(L);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(M);
d.changeActiveTabTo(5);
a.newTab(N);
b.newTab(O);
c.moveActiveTabTo(3);
d.newTab(P);
a.changeActiveTabTo(5);
b.newTab(Q);
c.newTab(R);
d.changeActiveTabTo(5);
a.newTab(S);
b.newTab(T);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(U);
b.newTab(V);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(W);
b.newTab(X);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(3);
b.newTab(Y);
c.newTab(Z);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(4);
a.moveActiveTabTo(3);
d.moveActiveTabTo(3);
d.moveActiveTabTo(5);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(1);
brows->newWindow();
brows->switchToWindow(8);
brows->getWindow(5);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->getWindow(3);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(5);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->getWindow(5);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(4);
brows->print();
brows->newWindow();
brows->getWindow(4);
brows->mergeAllWindows();
brows->print();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(8);
brows->closeWindow();
brows->print();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->getWindow(3);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(7);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->switchToWindow(4);
brows->getWindow(2);
brows->print();
brows->print();
brows->getWindow(3);
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
delete brows;
}
	return 0;
}