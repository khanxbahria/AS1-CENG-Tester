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
Tab A = Tab("eee", "hhh","x");
Tab B = Tab("rrr", "v","c");
Tab C = Tab("mmm", "ll","www");
Tab D = Tab("ii", "x","rr");
Tab E = Tab("l", "uuu","uuu");
Tab F = Tab("m", "ff","k");
Tab G = Tab("j", "uu","sss");
Tab H = Tab("h", "uu","ooo");
Tab I = Tab("uuu", "b","zz");
Tab J = Tab("fff", "qqq","p");
Tab K = Tab("kkk", "p","xxx");
Tab L = Tab("xxx", "rrr","cc");
Tab M = Tab("fff", "xx","ll");
Tab N = Tab("ii", "hh","y");
Tab O = Tab("ooo", "j","aaa");
Tab P = Tab("vvv", "o","jjj");
Tab Q = Tab("i", "vvv","z");
Tab R = Tab("hh", "ttt","kk");
Tab S = Tab("ggg", "ttt","s");
Tab T = Tab("ooo", "nn","hhh");
Tab U = Tab("hhh", "www","ddd");
Tab V = Tab("zzz", "mm","w");
Tab W = Tab("rrr", "ooo","q");
Tab X = Tab("k", "xx","cc");
Tab Y = Tab("nnn", "s","oo");
Tab Z = Tab("ggg", "z","rr");
a.moveActiveTabTo(1);
b.newTab(A);
c.newTab(B);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(C);
d.changeActiveTabTo(5);
a.newTab(D);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.newTab(E);
c.changeActiveTabTo(2);
d.newTab(F);
a.newTab(G);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(H);
b.newTab(I);
c.newTab(J);
d.newTab(K);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(L);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(M);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(N);
d.newTab(O);
a.moveActiveTabTo(5);
b.newTab(P);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.newTab(Q);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(R);
d.newTab(S);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(T);
b.moveActiveTabTo(1);
c.newTab(U);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.newTab(V);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(W);
b.newTab(X);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(Y);
d.newTab(Z);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->getWindow(5);
brows->closeWindow();
brows->switchToWindow(3);
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(6);
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(3);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(5);
brows->getWindow(6);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(5);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->getWindow(8);
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->switchToWindow(4);
brows->print();
brows->print();
brows->print();
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(1);
brows->newWindow();
brows->getWindow(6);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(8);
brows->newWindow();
brows->closeWindow();
brows->print();
brows->getWindow(5);
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->switchToWindow(5);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(7);
brows->switchToWindow(7);
brows->switchToWindow(4);
brows->newWindow();
brows->switchToWindow(0);
brows->switchToWindow(0);
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(7);
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(9);
brows->print();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->getWindow(0);
brows->newWindow();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->getWindow(1);
brows->closeWindow();
brows->mergeAllWindows();
delete brows;
}
	return 0;
}