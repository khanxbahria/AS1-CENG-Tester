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
Tab A = Tab("eee", "ccc","mm");
Tab B = Tab("p", "nnn","lll");
Tab C = Tab("ooo", "w","q");
Tab D = Tab("ee", "z","vvv");
Tab E = Tab("l", "ddd","ooo");
Tab F = Tab("t", "cc","h");
Tab G = Tab("oo", "lll","xx");
Tab H = Tab("bbb", "oo","i");
Tab I = Tab("dd", "f","hhh");
Tab J = Tab("k", "ooo","yyy");
Tab K = Tab("e", "xx","mm");
Tab L = Tab("zzz", "rrr","j");
Tab M = Tab("v", "ll","u");
Tab N = Tab("fff", "tt","oo");
Tab O = Tab("e", "ttt","v");
Tab P = Tab("pp", "zz","p");
Tab Q = Tab("e", "qq","ll");
Tab R = Tab("i", "aa","qqq");
Tab S = Tab("ccc", "ppp","c");
Tab T = Tab("g", "qq","hh");
Tab U = Tab("p", "nn","vvv");
Tab V = Tab("aa", "u","ww");
Tab W = Tab("nn", "ttt","xxx");
Tab X = Tab("gg", "vvv","rr");
Tab Y = Tab("h", "ff","k");
Tab Z = Tab("e", "ss","b");
a.moveActiveTabTo(5);
b.newTab(A);
c.moveActiveTabTo(5);
d.newTab(B);
a.moveActiveTabTo(0);
b.newTab(C);
c.changeActiveTabTo(0);
d.newTab(D);
a.moveActiveTabTo(3);
b.newTab(E);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(F);
b.moveActiveTabTo(4);
c.newTab(G);
d.changeActiveTabTo(4);
a.newTab(H);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(I);
a.moveActiveTabTo(0);
b.newTab(J);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.newTab(K);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
b.newTab(L);
c.newTab(M);
d.moveActiveTabTo(5);
a.newTab(N);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.newTab(O);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(P);
a.newTab(Q);
b.newTab(R);
c.moveActiveTabTo(5);
d.newTab(S);
a.newTab(T);
b.newTab(U);
c.newTab(V);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(W);
d.newTab(X);
a.newTab(Y);
b.newTab(Z);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
c.changeActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
a.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
b.moveActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(8);
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->getWindow(4);
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(0);
brows->switchToWindow(8);
brows->getWindow(6);
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->getWindow(4);
brows->newWindow();
brows->switchToWindow(8);
brows->print();
brows->closeWindow();
brows->switchToWindow(1);
brows->newWindow();
brows->newWindow();
brows->getWindow(9);
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(9);
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->print();
brows->getWindow(4);
brows->closeWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->switchToWindow(5);
brows->closeWindow();
brows->closeWindow();
brows->getWindow(6);
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(9);
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->closeWindow();
brows->print();
brows->switchToWindow(9);
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->switchToWindow(5);
brows->getWindow(3);
brows->switchToWindow(7);
brows->newWindow();
brows->getWindow(0);
brows->mergeAllWindows();
brows->getWindow(2);
delete brows;
}
	return 0;
}