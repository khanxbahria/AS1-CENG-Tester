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
Tab A = Tab("p", "aa","ddd");
Tab B = Tab("dd", "lll","i");
Tab C = Tab("f", "ooo","q");
Tab D = Tab("ll", "xx","iii");
Tab E = Tab("hh", "l","y");
Tab F = Tab("v", "bbb","m");
Tab G = Tab("dd", "l","sss");
Tab H = Tab("xxx", "x","yy");
Tab I = Tab("yyy", "ooo","ttt");
Tab J = Tab("dd", "d","zzz");
Tab K = Tab("iii", "xxx","bb");
Tab L = Tab("yyy", "ggg","q");
Tab M = Tab("pp", "kk","uu");
Tab N = Tab("vv", "tt","ii");
Tab O = Tab("ss", "nn","dd");
Tab P = Tab("c", "d","ooo");
Tab Q = Tab("m", "ggg","aaa");
Tab R = Tab("ggg", "n","mm");
Tab S = Tab("t", "ooo","kk");
Tab T = Tab("p", "xxx","xxx");
Tab U = Tab("c", "ff","u");
Tab V = Tab("n", "ee","www");
Tab W = Tab("mmm", "yyy","y");
Tab X = Tab("yyy", "cc","ss");
Tab Y = Tab("oo", "t","j");
Tab Z = Tab("kkk", "ii","zz");
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(A);
d.changeActiveTabTo(4);
a.newTab(B);
b.newTab(C);
c.moveActiveTabTo(1);
d.newTab(D);
a.moveActiveTabTo(4);
b.newTab(E);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(F);
b.moveActiveTabTo(0);
c.newTab(G);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(H);
d.newTab(I);
a.moveActiveTabTo(3);
b.newTab(J);
c.newTab(K);
d.newTab(L);
a.newTab(M);
b.changeActiveTabTo(5);
c.newTab(N);
d.changeActiveTabTo(5);
a.newTab(O);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
b.newTab(P);
c.moveActiveTabTo(0);
d.newTab(Q);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(R);
d.newTab(S);
a.newTab(T);
b.newTab(U);
c.changeActiveTabTo(4);
d.newTab(V);
a.newTab(W);
b.newTab(X);
c.newTab(Y);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(Z);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
b.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(4);
a.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
b.changeActiveTabTo(4);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
d.moveActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(1);
brows->print();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(6);
brows->print();
brows->getWindow(3);
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->getWindow(6);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->switchToWindow(3);
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(6);
brows->getWindow(2);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(8);
brows->mergeAllWindows();
brows->getWindow(7);
brows->getWindow(1);
brows->getWindow(4);
brows->mergeAllWindows();
brows->getWindow(9);
brows->closeWindow();
brows->switchToWindow(4);
brows->getWindow(9);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(4);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->print();
brows->getWindow(8);
brows->getWindow(5);
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(6);
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(0);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(9);
brows->print();
brows->print();
brows->getWindow(8);
brows->newWindow();
brows->closeWindow();
brows->print();
brows->getWindow(7);
brows->mergeAllWindows();
brows->getWindow(4);
brows->newWindow();
brows->newWindow();
brows->getWindow(2);
delete brows;
}
	return 0;
}