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
Tab A = Tab("nn", "x","nnn");
Tab B = Tab("sss", "ppp","m");
Tab C = Tab("vv", "bb","g");
Tab D = Tab("kk", "tt","jjj");
Tab E = Tab("qq", "vvv","nn");
Tab F = Tab("cc", "m","ggg");
Tab G = Tab("vvv", "ccc","i");
Tab H = Tab("sss", "oo","ss");
Tab I = Tab("xx", "ff","fff");
Tab J = Tab("ddd", "vv","jj");
Tab K = Tab("xx", "rr","yyy");
Tab L = Tab("g", "eee","f");
Tab M = Tab("sss", "xxx","k");
Tab N = Tab("hh", "kkk","bb");
Tab O = Tab("jjj", "l","y");
Tab P = Tab("uu", "sss","zz");
Tab Q = Tab("m", "u","o");
Tab R = Tab("bbb", "jjj","hh");
Tab S = Tab("u", "fff","r");
Tab T = Tab("iii", "vvv","ff");
Tab U = Tab("rr", "m","l");
Tab V = Tab("t", "ee","j");
Tab W = Tab("k", "ll","rr");
Tab X = Tab("yy", "rrr","vvv");
Tab Y = Tab("ccc", "qqq","ff");
Tab Z = Tab("l", "l","ooo");
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(A);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(B);
b.moveActiveTabTo(2);
c.newTab(C);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(D);
a.newTab(E);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(F);
a.moveActiveTabTo(3);
b.newTab(G);
c.changeActiveTabTo(3);
d.newTab(H);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(I);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.newTab(J);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(K);
b.changeActiveTabTo(2);
c.newTab(L);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(M);
b.newTab(N);
c.newTab(O);
d.newTab(P);
a.newTab(Q);
b.changeActiveTabTo(0);
c.newTab(R);
d.newTab(S);
a.newTab(T);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(U);
d.newTab(V);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(W);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(X);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(Y);
a.newTab(Z);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(Z);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
c.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->switchToWindow(5);
brows->getWindow(6);
brows->closeWindow();
brows->switchToWindow(7);
brows->print();
brows->getWindow(9);
brows->getWindow(0);
brows->getWindow(9);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(6);
brows->print();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(5);
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->print();
brows->getWindow(7);
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(1);
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(9);
brows->getWindow(3);
brows->switchToWindow(1);
brows->newWindow();
brows->getWindow(9);
brows->getWindow(5);
brows->closeWindow();
brows->print();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->getWindow(2);
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->print();
brows->getWindow(3);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->getWindow(0);
brows->switchToWindow(9);
brows->getWindow(0);
brows->getWindow(1);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->getWindow(5);
brows->getWindow(3);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->print();
brows->switchToWindow(9);
brows->getWindow(2);
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(1);
brows->mergeAllWindows();
brows->getWindow(3);
brows->switchToWindow(5);
brows->switchToWindow(5);
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->getWindow(7);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(2);
brows->closeWindow();
brows->print();
brows->getWindow(9);
delete brows;
}
	return 0;
}