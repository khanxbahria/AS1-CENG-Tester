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
Tab A = Tab("m", "e","ddd");
Tab B = Tab("x", "n","www");
Tab C = Tab("yy", "ss","ttt");
Tab D = Tab("hh", "ii","q");
Tab E = Tab("g", "k","lll");
Tab F = Tab("w", "eee","kk");
Tab G = Tab("dd", "j","zzz");
Tab H = Tab("kkk", "xxx","k");
Tab I = Tab("j", "uu","kkk");
Tab J = Tab("kkk", "uuu","e");
Tab K = Tab("pp", "s","jj");
Tab L = Tab("v", "qqq","pp");
Tab M = Tab("u", "d","pp");
Tab N = Tab("sss", "ddd","yyy");
Tab O = Tab("fff", "k","rrr");
Tab P = Tab("fff", "ggg","q");
Tab Q = Tab("ppp", "nnn","y");
Tab R = Tab("xx", "aa","bb");
Tab S = Tab("sss", "fff","nn");
Tab T = Tab("uu", "qqq","y");
Tab U = Tab("ff", "q","c");
Tab V = Tab("zz", "y","cc");
Tab W = Tab("ooo", "n","e");
Tab X = Tab("o", "m","o");
Tab Y = Tab("ttt", "hhh","ddd");
Tab Z = Tab("bbb", "j","bb");
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(A);
d.moveActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(B);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.newTab(C);
c.newTab(D);
d.moveActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(E);
d.changeActiveTabTo(5);
a.newTab(F);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.newTab(G);
c.newTab(H);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.newTab(I);
c.changeActiveTabTo(1);
d.newTab(J);
a.newTab(K);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.newTab(L);
c.newTab(M);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(N);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(O);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(P);
d.changeActiveTabTo(3);
a.newTab(Q);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(R);
d.newTab(S);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(0);
b.newTab(T);
c.newTab(U);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(V);
b.newTab(W);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(X);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(Y);
d.moveActiveTabTo(5);
a.newTab(Z);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(Z);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(3);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(0);
brows->getWindow(4);
brows->newWindow();
brows->switchToWindow(0);
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->getWindow(9);
brows->getWindow(7);
brows->getWindow(9);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(1);
brows->newWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(3);
brows->getWindow(9);
brows->closeWindow();
brows->switchToWindow(9);
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->getWindow(9);
brows->switchToWindow(5);
brows->print();
brows->mergeAllWindows();
brows->getWindow(7);
brows->closeWindow();
brows->getWindow(6);
brows->switchToWindow(3);
brows->newWindow();
brows->getWindow(6);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->getWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->getWindow(8);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(1);
brows->switchToWindow(6);
brows->switchToWindow(8);
brows->getWindow(8);
brows->print();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeWindow();
brows->switchToWindow(2);
brows->newWindow();
brows->getWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(2);
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(6);
brows->print();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(1);
brows->print();
brows->getWindow(5);
delete brows;
}
	return 0;
}