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
Tab A = Tab("qqq", "mm","oo");
Tab B = Tab("j", "ee","ttt");
Tab C = Tab("uu", "jj","ggg");
Tab D = Tab("kk", "ii","uu");
Tab E = Tab("yy", "mmm","rrr");
Tab F = Tab("v", "m","ff");
Tab G = Tab("dd", "y","k");
Tab H = Tab("tt", "h","vvv");
Tab I = Tab("lll", "fff","qqq");
Tab J = Tab("ff", "f","f");
Tab K = Tab("l", "q","zz");
Tab L = Tab("nn", "yy","kkk");
Tab M = Tab("xx", "ss","ii");
Tab N = Tab("xxx", "bbb","tt");
Tab O = Tab("nnn", "x","nn");
Tab P = Tab("u", "hh","xx");
Tab Q = Tab("eee", "i","fff");
Tab R = Tab("xx", "uuu","ii");
Tab S = Tab("i", "jj","ccc");
Tab T = Tab("u", "w","fff");
Tab U = Tab("w", "kk","ss");
Tab V = Tab("www", "nnn","x");
Tab W = Tab("eee", "x","ddd");
Tab X = Tab("b", "w","fff");
Tab Y = Tab("p", "oo","e");
Tab Z = Tab("y", "oo","zz");
a.moveActiveTabTo(1);
b.newTab(A);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(0);
b.newTab(B);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(3);
b.newTab(C);
c.newTab(D);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(E);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(F);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(G);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.newTab(H);
c.moveActiveTabTo(2);
d.newTab(I);
a.newTab(J);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(K);
a.moveActiveTabTo(0);
b.newTab(L);
c.moveActiveTabTo(0);
d.newTab(M);
a.newTab(N);
b.newTab(O);
c.newTab(P);
d.moveActiveTabTo(2);
a.changeActiveTabTo(5);
b.newTab(Q);
c.newTab(R);
d.changeActiveTabTo(5);
a.newTab(S);
b.newTab(T);
c.changeActiveTabTo(0);
d.newTab(U);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(V);
d.changeActiveTabTo(5);
a.newTab(W);
b.newTab(X);
c.newTab(Y);
d.newTab(Z);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
a.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
d.moveActiveTabTo(5);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
c.moveActiveTabTo(2);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
c.changeActiveTabTo(0);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->getWindow(0);
brows->switchToWindow(0);
brows->switchToWindow(5);
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(5);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(5);
brows->getWindow(0);
brows->switchToWindow(7);
brows->switchToWindow(9);
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->getWindow(0);
brows->closeEmptyWindows();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(7);
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->getWindow(7);
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->getWindow(1);
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(7);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(7);
brows->newWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->getWindow(6);
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(6);
brows->switchToWindow(5);
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->newWindow();
brows->closeWindow();
brows->getWindow(1);
brows->switchToWindow(8);
brows->print();
brows->closeWindow();
brows->getWindow(1);
brows->print();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->closeWindow();
brows->getWindow(2);
brows->switchToWindow(0);
brows->print();
brows->getWindow(8);
brows->getWindow(5);
delete brows;
}
	return 0;
}