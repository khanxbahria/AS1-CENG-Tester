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
Tab A = Tab("ll", "jjj","xxx");
Tab B = Tab("t", "q","v");
Tab C = Tab("hhh", "tt","x");
Tab D = Tab("vvv", "tt","ggg");
Tab E = Tab("vvv", "iii","k");
Tab F = Tab("qq", "ggg","nnn");
Tab G = Tab("zz", "q","z");
Tab H = Tab("v", "o","c");
Tab I = Tab("kk", "uu","ttt");
Tab J = Tab("l", "zzz","bb");
Tab K = Tab("d", "bbb","ee");
Tab L = Tab("kkk", "zz","xxx");
Tab M = Tab("a", "zz","cc");
Tab N = Tab("sss", "www","p");
Tab O = Tab("tt", "qq","hhh");
Tab P = Tab("j", "www","ss");
Tab Q = Tab("w", "z","y");
Tab R = Tab("k", "aaa","xxx");
Tab S = Tab("vv", "sss","oo");
Tab T = Tab("fff", "aaa","xxx");
Tab U = Tab("t", "ppp","m");
Tab V = Tab("q", "lll","l");
Tab W = Tab("o", "ttt","kk");
Tab X = Tab("gg", "lll","hh");
Tab Y = Tab("u", "d","jj");
Tab Z = Tab("eee", "ggg","l");
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(A);
d.moveActiveTabTo(3);
a.newTab(B);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(C);
b.newTab(D);
c.newTab(E);
d.newTab(F);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.newTab(G);
c.moveActiveTabTo(2);
d.newTab(H);
a.newTab(I);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(J);
a.moveActiveTabTo(3);
b.newTab(K);
c.newTab(L);
d.newTab(M);
a.newTab(N);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.newTab(O);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(P);
b.moveActiveTabTo(4);
c.newTab(Q);
d.newTab(R);
a.moveActiveTabTo(0);
b.newTab(S);
c.changeActiveTabTo(0);
d.newTab(T);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(U);
d.changeActiveTabTo(3);
a.newTab(V);
b.newTab(W);
c.moveActiveTabTo(4);
d.newTab(X);
a.newTab(Y);
b.newTab(Z);
c.newTab(Z);
d.moveActiveTabTo(1);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
c.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(2);
c.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->switchToWindow(1);
brows->switchToWindow(6);
brows->newWindow();
brows->newWindow();
brows->getWindow(5);
brows->getWindow(6);
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->getWindow(3);
brows->newWindow();
brows->newWindow();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->getWindow(8);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->getWindow(4);
brows->closeWindow();
brows->print();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(9);
brows->switchToWindow(9);
brows->getWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(9);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(9);
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(8);
brows->print();
brows->getWindow(3);
brows->getWindow(4);
brows->switchToWindow(9);
brows->closeWindow();
brows->print();
brows->switchToWindow(3);
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->closeWindow();
brows->switchToWindow(6);
brows->print();
brows->mergeAllWindows();
brows->getWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(2);
brows->getWindow(7);
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->print();
brows->getWindow(4);
delete brows;
}
	return 0;
}