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
Tab A = Tab("s", "h","aa");
Tab B = Tab("jj", "rr","gg");
Tab C = Tab("ww", "tt","u");
Tab D = Tab("kkk", "zzz","q");
Tab E = Tab("kkk", "h","v");
Tab F = Tab("gg", "ttt","ttt");
Tab G = Tab("uu", "a","m");
Tab H = Tab("ss", "tt","q");
Tab I = Tab("rr", "kkk","q");
Tab J = Tab("jj", "ww","xxx");
Tab K = Tab("vv", "eee","nnn");
Tab L = Tab("jj", "ee","pp");
Tab M = Tab("yy", "f","ww");
Tab N = Tab("o", "zz","tt");
Tab O = Tab("ss", "ss","ddd");
Tab P = Tab("gg", "ww","dd");
Tab Q = Tab("t", "yy","mm");
Tab R = Tab("jjj", "qq","hhh");
Tab S = Tab("r", "f","hhh");
Tab T = Tab("aaa", "vvv","nnn");
Tab U = Tab("jjj", "vvv","zz");
Tab V = Tab("bb", "x","j");
Tab W = Tab("ll", "uu","r");
Tab X = Tab("jj", "cc","nnn");
Tab Y = Tab("sss", "k","mm");
Tab Z = Tab("u", "h","nn");
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(A);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.newTab(B);
c.newTab(C);
d.newTab(D);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(E);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(F);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.newTab(G);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(H);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(I);
b.newTab(J);
c.newTab(K);
d.newTab(L);
a.moveActiveTabTo(0);
b.newTab(M);
c.moveActiveTabTo(0);
d.newTab(N);
a.moveActiveTabTo(3);
b.newTab(O);
c.moveActiveTabTo(3);
d.newTab(P);
a.newTab(Q);
b.newTab(R);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.newTab(S);
c.newTab(T);
d.moveActiveTabTo(1);
a.newTab(U);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.newTab(V);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.newTab(W);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(X);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(Y);
a.newTab(Z);
b.moveActiveTabTo(5);
c.newTab(Z);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->getWindow(2);
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(4);
brows->switchToWindow(0);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->getWindow(5);
brows->closeWindow();
brows->switchToWindow(2);
brows->newWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->getWindow(7);
brows->print();
brows->print();
brows->newWindow();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(6);
brows->print();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->print();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(9);
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->getWindow(9);
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(9);
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(9);
delete brows;
}
	return 0;
}