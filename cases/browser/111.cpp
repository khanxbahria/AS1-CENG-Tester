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
Tab A = Tab("uu", "cc","ddd");
Tab B = Tab("zzz", "ccc","jjj");
Tab C = Tab("www", "s","ppp");
Tab D = Tab("gg", "bbb","tt");
Tab E = Tab("ss", "zzz","u");
Tab F = Tab("x", "o","b");
Tab G = Tab("n", "tt","dd");
Tab H = Tab("mmm", "ii","ww");
Tab I = Tab("e", "w","p");
Tab J = Tab("c", "h","bbb");
Tab K = Tab("iii", "l","kk");
Tab L = Tab("mm", "sss","qqq");
Tab M = Tab("ddd", "jj","zz");
Tab N = Tab("mm", "uu","gg");
Tab O = Tab("ppp", "b","m");
Tab P = Tab("j", "xx","m");
Tab Q = Tab("ggg", "ddd","ggg");
Tab R = Tab("nn", "z","yy");
Tab S = Tab("kk", "ww","g");
Tab T = Tab("ff", "eee","zz");
Tab U = Tab("ff", "l","ff");
Tab V = Tab("iii", "i","ccc");
Tab W = Tab("l", "www","bbb");
Tab X = Tab("ooo", "x","c");
Tab Y = Tab("qqq", "ooo","xxx");
Tab Z = Tab("ff", "ooo","kkk");
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(A);
b.newTab(B);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(C);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(D);
b.changeActiveTabTo(4);
c.newTab(E);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(3);
b.newTab(F);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(G);
c.newTab(H);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.newTab(I);
c.changeActiveTabTo(3);
d.newTab(J);
a.newTab(K);
b.newTab(L);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(M);
a.moveActiveTabTo(4);
b.newTab(N);
c.changeActiveTabTo(4);
d.newTab(O);
a.changeActiveTabTo(3);
b.newTab(P);
c.newTab(Q);
d.newTab(R);
a.moveActiveTabTo(3);
b.newTab(S);
c.newTab(T);
d.moveActiveTabTo(3);
a.newTab(U);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(V);
a.newTab(W);
b.newTab(X);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.newTab(Y);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(Z);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
d.changeActiveTabTo(5);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
d.moveActiveTabTo(1);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(8);
brows->getWindow(1);
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(1);
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->newWindow();
brows->newWindow();
brows->switchToWindow(2);
brows->newWindow();
brows->switchToWindow(8);
brows->newWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(3);
brows->getWindow(5);
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->switchToWindow(7);
brows->print();
brows->getWindow(3);
brows->getWindow(5);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->switchToWindow(7);
brows->switchToWindow(0);
brows->print();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(8);
brows->switchToWindow(0);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->newWindow();
brows->closeWindow();
brows->print();
brows->print();
brows->switchToWindow(0);
brows->getWindow(7);
brows->print();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->newWindow();
brows->getWindow(0);
brows->closeWindow();
brows->closeWindow();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->getWindow(7);
brows->newWindow();
brows->closeWindow();
brows->print();
brows->switchToWindow(6);
brows->getWindow(8);
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(8);
brows->getWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->getWindow(7);
brows->print();
brows->switchToWindow(4);
brows->switchToWindow(8);
brows->closeWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->newWindow();
brows->print();
brows->print();
brows->print();
brows->newWindow();
brows->switchToWindow(5);
brows->mergeAllWindows();
delete brows;
}
	return 0;
}