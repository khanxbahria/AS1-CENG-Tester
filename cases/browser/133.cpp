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
Tab A = Tab("m", "q","rr");
Tab B = Tab("j", "y","ccc");
Tab C = Tab("l", "hh","www");
Tab D = Tab("ss", "d","u");
Tab E = Tab("ff", "d","bbb");
Tab F = Tab("aaa", "r","fff");
Tab G = Tab("rr", "bb","aa");
Tab H = Tab("b", "nn","n");
Tab I = Tab("dd", "bb","ppp");
Tab J = Tab("ttt", "v","tt");
Tab K = Tab("q", "e","mm");
Tab L = Tab("ll", "ppp","gg");
Tab M = Tab("d", "ggg","ppp");
Tab N = Tab("dd", "gg","nn");
Tab O = Tab("ggg", "qq","v");
Tab P = Tab("yyy", "ooo","t");
Tab Q = Tab("e", "uuu","cc");
Tab R = Tab("vv", "qq","z");
Tab S = Tab("dd", "bbb","a");
Tab T = Tab("r", "www","hhh");
Tab U = Tab("y", "a","r");
Tab V = Tab("ggg", "kkk","c");
Tab W = Tab("ttt", "hh","c");
Tab X = Tab("gg", "hhh","iii");
Tab Y = Tab("xxx", "j","ll");
Tab Z = Tab("jj", "pp","pp");
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(A);
b.newTab(B);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(C);
b.newTab(D);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(E);
b.newTab(F);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(G);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(H);
b.newTab(I);
c.moveActiveTabTo(1);
d.newTab(J);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(K);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(L);
a.changeActiveTabTo(0);
b.newTab(M);
c.changeActiveTabTo(0);
d.newTab(N);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(O);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.newTab(P);
c.newTab(Q);
d.changeActiveTabTo(3);
a.newTab(R);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(4);
b.newTab(S);
c.newTab(T);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(U);
a.newTab(V);
b.newTab(W);
c.moveActiveTabTo(1);
d.newTab(X);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.newTab(Y);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(Z);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(5);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
c.changeActiveTabTo(2);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(6);
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(7);
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->getWindow(6);
brows->switchToWindow(7);
brows->switchToWindow(3);
brows->closeWindow();
brows->print();
brows->print();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->getWindow(4);
brows->newWindow();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->print();
brows->newWindow();
brows->newWindow();
brows->getWindow(9);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->getWindow(3);
brows->print();
brows->newWindow();
brows->print();
brows->getWindow(5);
brows->switchToWindow(1);
brows->print();
brows->switchToWindow(7);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(7);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->getWindow(7);
brows->newWindow();
brows->getWindow(5);
brows->getWindow(3);
brows->getWindow(7);
brows->print();
brows->print();
brows->closeWindow();
brows->getWindow(0);
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(2);
brows->getWindow(2);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(2);
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(2);
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->getWindow(2);
brows->getWindow(4);
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->print();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->switchToWindow(4);
brows->switchToWindow(0);
brows->print();
brows->switchToWindow(5);
brows->closeWindow();
brows->getWindow(9);
brows->print();
delete brows;
}
	return 0;
}