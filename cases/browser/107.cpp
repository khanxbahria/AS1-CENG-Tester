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
Tab A = Tab("gg", "l","vv");
Tab B = Tab("vvv", "p","j");
Tab C = Tab("d", "w","qq");
Tab D = Tab("yy", "w","p");
Tab E = Tab("aa", "f","uuu");
Tab F = Tab("ttt", "iii","uuu");
Tab G = Tab("aaa", "w","n");
Tab H = Tab("qq", "rrr","uu");
Tab I = Tab("vv", "cc","xx");
Tab J = Tab("f", "y","ppp");
Tab K = Tab("xxx", "mmm","iii");
Tab L = Tab("vv", "eee","yyy");
Tab M = Tab("tt", "ll","q");
Tab N = Tab("j", "d","vvv");
Tab O = Tab("bb", "u","r");
Tab P = Tab("k", "n","xxx");
Tab Q = Tab("ttt", "d","x");
Tab R = Tab("gg", "nn","vvv");
Tab S = Tab("t", "ww","ss");
Tab T = Tab("ccc", "iii","zz");
Tab U = Tab("nnn", "oo","jjj");
Tab V = Tab("tt", "vv","a");
Tab W = Tab("gg", "ff","jjj");
Tab X = Tab("l", "vv","ss");
Tab Y = Tab("t", "uu","v");
Tab Z = Tab("x", "ss","bb");
a.moveActiveTabTo(2);
b.newTab(A);
c.newTab(B);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(C);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(D);
d.moveActiveTabTo(3);
a.newTab(E);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(F);
b.changeActiveTabTo(3);
c.newTab(G);
d.moveActiveTabTo(3);
a.newTab(H);
b.newTab(I);
c.changeActiveTabTo(3);
d.newTab(J);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(K);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(L);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(M);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(N);
a.newTab(O);
b.moveActiveTabTo(2);
c.newTab(P);
d.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(Q);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.newTab(R);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.newTab(S);
c.newTab(T);
d.newTab(U);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(V);
d.changeActiveTabTo(5);
a.newTab(W);
b.newTab(X);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(Y);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(Z);
a.changeActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
d.changeActiveTabTo(0);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
b.moveActiveTabTo(0);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(3);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(2);
c.changeActiveTabTo(5);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->switchToWindow(3);
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(0);
brows->switchToWindow(7);
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->getWindow(2);
brows->getWindow(5);
brows->getWindow(6);
brows->newWindow();
brows->print();
brows->switchToWindow(3);
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->getWindow(7);
brows->getWindow(9);
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(2);
brows->newWindow();
brows->getWindow(5);
brows->mergeAllWindows();
brows->getWindow(3);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(1);
brows->getWindow(4);
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(3);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(3);
brows->print();
brows->switchToWindow(5);
brows->getWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->switchToWindow(5);
brows->switchToWindow(5);
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->mergeAllWindows();
brows->getWindow(8);
brows->mergeAllWindows();
brows->getWindow(3);
brows->print();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->closeWindow();
brows->getWindow(4);
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->getWindow(6);
brows->newWindow();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(6);
brows->getWindow(1);
brows->print();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->switchToWindow(5);
brows->closeWindow();
brows->getWindow(7);
delete brows;
}
	return 0;
}