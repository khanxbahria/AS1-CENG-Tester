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
Tab A = Tab("j", "i","ff");
Tab B = Tab("ppp", "t","n");
Tab C = Tab("yyy", "kkk","b");
Tab D = Tab("ttt", "d","e");
Tab E = Tab("ff", "x","p");
Tab F = Tab("hh", "b","u");
Tab G = Tab("b", "ccc","h");
Tab H = Tab("ss", "yyy","tt");
Tab I = Tab("qqq", "p","h");
Tab J = Tab("f", "r","ee");
Tab K = Tab("m", "ii","ttt");
Tab L = Tab("d", "aa","kk");
Tab M = Tab("a", "nn","xx");
Tab N = Tab("dd", "e","z");
Tab O = Tab("yy", "gg","ddd");
Tab P = Tab("f", "rr","i");
Tab Q = Tab("nnn", "d","b");
Tab R = Tab("hh", "lll","zz");
Tab S = Tab("uu", "nn","bb");
Tab T = Tab("qqq", "t","ii");
Tab U = Tab("zz", "zz","hhh");
Tab V = Tab("yy", "uu","ff");
Tab W = Tab("jjj", "ccc","k");
Tab X = Tab("zzz", "mmm","u");
Tab Y = Tab("xx", "lll","tt");
Tab Z = Tab("zzz", "uuu","gg");
a.moveActiveTabTo(4);
b.newTab(A);
c.newTab(B);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(C);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(D);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(E);
d.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.newTab(F);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(G);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(H);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(I);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.newTab(J);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(K);
b.changeActiveTabTo(4);
c.newTab(L);
d.newTab(M);
a.newTab(N);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(O);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(P);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(Q);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.newTab(R);
c.newTab(S);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(T);
c.newTab(U);
d.newTab(V);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(W);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(X);
d.newTab(Y);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(Z);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
c.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(0);
d.changeActiveTabTo(0);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->print();
brows->getWindow(1);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(9);
brows->getWindow(0);
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->getWindow(9);
brows->getWindow(0);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(5);
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->getWindow(4);
brows->switchToWindow(8);
brows->switchToWindow(3);
brows->getWindow(8);
brows->switchToWindow(7);
brows->switchToWindow(9);
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->getWindow(2);
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->getWindow(0);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->closeWindow();
brows->switchToWindow(0);
brows->print();
brows->switchToWindow(3);
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->getWindow(6);
brows->print();
brows->switchToWindow(7);
brows->print();
brows->switchToWindow(1);
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(1);
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(5);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(6);
brows->switchToWindow(4);
brows->switchToWindow(1);
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(0);
brows->print();
brows->newWindow();
brows->newWindow();
brows->print();
delete brows;
}
	return 0;
}