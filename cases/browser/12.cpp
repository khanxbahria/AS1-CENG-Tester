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
Tab A = Tab("r", "vv","xxx");
Tab B = Tab("vvv", "ggg","g");
Tab C = Tab("zz", "zzz","ff");
Tab D = Tab("x", "q","vv");
Tab E = Tab("u", "yyy","nn");
Tab F = Tab("r", "a","ccc");
Tab G = Tab("lll", "g","bb");
Tab H = Tab("y", "eee","s");
Tab I = Tab("k", "nnn","z");
Tab J = Tab("qq", "y","aaa");
Tab K = Tab("oo", "uu","mm");
Tab L = Tab("bbb", "fff","eee");
Tab M = Tab("pp", "ppp","ooo");
Tab N = Tab("qq", "ddd","dd");
Tab O = Tab("ii", "ii","e");
Tab P = Tab("f", "bb","bb");
Tab Q = Tab("aa", "mm","z");
Tab R = Tab("ooo", "zz","p");
Tab S = Tab("jj", "w","nnn");
Tab T = Tab("xx", "nnn","r");
Tab U = Tab("nn", "o","p");
Tab V = Tab("ss", "s","xxx");
Tab W = Tab("hh", "e","x");
Tab X = Tab("n", "xx","l");
Tab Y = Tab("xx", "d","bb");
Tab Z = Tab("tt", "ooo","ii");
a.changeActiveTabTo(3);
b.newTab(A);
c.newTab(B);
d.newTab(C);
a.newTab(D);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.newTab(E);
c.newTab(F);
d.newTab(G);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(H);
d.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.newTab(I);
c.changeActiveTabTo(1);
d.newTab(J);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(K);
a.newTab(L);
b.changeActiveTabTo(3);
c.newTab(M);
d.newTab(N);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(O);
d.moveActiveTabTo(4);
a.newTab(P);
b.newTab(Q);
c.newTab(R);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(S);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(T);
d.newTab(U);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(V);
b.moveActiveTabTo(1);
c.newTab(W);
d.changeActiveTabTo(1);
a.newTab(X);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(Y);
a.newTab(Z);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
c.changeActiveTabTo(0);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
c.changeActiveTabTo(0);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->newWindow();
brows->getWindow(3);
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->getWindow(8);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->switchToWindow(9);
brows->switchToWindow(3);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->print();
brows->getWindow(7);
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->getWindow(9);
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(5);
brows->closeWindow();
brows->print();
brows->getWindow(1);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->print();
brows->switchToWindow(8);
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(7);
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(2);
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(6);
brows->getWindow(9);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->newWindow();
brows->print();
brows->getWindow(3);
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(1);
brows->print();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->getWindow(3);
delete brows;
}
	return 0;
}