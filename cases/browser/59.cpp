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
Tab A = Tab("oo", "nn","aa");
Tab B = Tab("ff", "m","zzz");
Tab C = Tab("y", "iii","nn");
Tab D = Tab("gg", "nnn","mmm");
Tab E = Tab("zzz", "www","www");
Tab F = Tab("zzz", "vv","hh");
Tab G = Tab("kk", "uu","zzz");
Tab H = Tab("vvv", "sss","l");
Tab I = Tab("hh", "fff","xx");
Tab J = Tab("j", "rr","rrr");
Tab K = Tab("x", "aa","j");
Tab L = Tab("t", "qq","ii");
Tab M = Tab("yy", "b","z");
Tab N = Tab("xxx", "v","z");
Tab O = Tab("b", "e","bb");
Tab P = Tab("bb", "tt","ee");
Tab Q = Tab("o", "uuu","nnn");
Tab R = Tab("ee", "uu","aa");
Tab S = Tab("a", "w","t");
Tab T = Tab("vvv", "u","u");
Tab U = Tab("xx", "oo","gg");
Tab V = Tab("c", "ttt","lll");
Tab W = Tab("tt", "www","bbb");
Tab X = Tab("bbb", "r","d");
Tab Y = Tab("b", "v","jj");
Tab Z = Tab("o", "ii","x");
a.newTab(A);
b.newTab(B);
c.moveActiveTabTo(0);
d.newTab(C);
a.newTab(D);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(E);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(F);
b.newTab(G);
c.changeActiveTabTo(3);
d.newTab(H);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(I);
a.moveActiveTabTo(3);
b.newTab(J);
c.newTab(K);
d.newTab(L);
a.newTab(M);
b.newTab(N);
c.changeActiveTabTo(0);
d.newTab(O);
a.moveActiveTabTo(4);
b.newTab(P);
c.newTab(Q);
d.moveActiveTabTo(4);
a.newTab(R);
b.changeActiveTabTo(1);
c.newTab(S);
d.newTab(T);
a.changeActiveTabTo(4);
b.newTab(U);
c.moveActiveTabTo(4);
d.newTab(V);
a.newTab(W);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(X);
b.moveActiveTabTo(5);
c.newTab(Y);
d.newTab(Z);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
b.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(7);
brows->switchToWindow(8);
brows->newWindow();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(5);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(0);
brows->closeWindow();
brows->getWindow(7);
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->newWindow();
brows->getWindow(7);
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->print();
brows->getWindow(6);
brows->switchToWindow(3);
brows->print();
brows->mergeAllWindows();
brows->getWindow(9);
brows->getWindow(2);
brows->newWindow();
brows->getWindow(7);
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(6);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(5);
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->switchToWindow(2);
brows->closeWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(5);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->mergeAllWindows();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->getWindow(2);
brows->print();
brows->newWindow();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->getWindow(8);
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->getWindow(2);
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->getWindow(5);
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->switchToWindow(8);
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(8);
brows->switchToWindow(2);
brows->closeWindow();
brows->switchToWindow(1);
brows->getWindow(2);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->getWindow(6);
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->switchToWindow(8);
delete brows;
}
	return 0;
}