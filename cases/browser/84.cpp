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
Tab A = Tab("ccc", "z","rrr");
Tab B = Tab("ttt", "vvv","eee");
Tab C = Tab("s", "p","xx");
Tab D = Tab("ss", "uu","c");
Tab E = Tab("q", "jj","yy");
Tab F = Tab("w", "fff","ee");
Tab G = Tab("d", "hhh","uu");
Tab H = Tab("v", "fff","mm");
Tab I = Tab("t", "z","www");
Tab J = Tab("rrr", "rr","g");
Tab K = Tab("bb", "ww","c");
Tab L = Tab("o", "ppp","i");
Tab M = Tab("sss", "ggg","yyy");
Tab N = Tab("cc", "ccc","ooo");
Tab O = Tab("ff", "q","iii");
Tab P = Tab("zzz", "jjj","p");
Tab Q = Tab("ccc", "u","n");
Tab R = Tab("ddd", "k","e");
Tab S = Tab("l", "e","www");
Tab T = Tab("www", "cc","ss");
Tab U = Tab("gg", "jjj","p");
Tab V = Tab("yy", "v","kk");
Tab W = Tab("f", "ggg","ooo");
Tab X = Tab("qqq", "yyy","yyy");
Tab Y = Tab("kk", "m","nnn");
Tab Z = Tab("hh", "pp","qq");
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.newTab(A);
c.moveActiveTabTo(5);
d.newTab(B);
a.moveActiveTabTo(5);
b.newTab(C);
c.changeActiveTabTo(5);
d.newTab(D);
a.changeActiveTabTo(4);
b.newTab(E);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(F);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(G);
b.newTab(H);
c.newTab(I);
d.moveActiveTabTo(5);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.newTab(J);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(K);
b.newTab(L);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.newTab(M);
b.moveActiveTabTo(0);
c.newTab(N);
d.moveActiveTabTo(0);
a.newTab(O);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(P);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(Q);
a.newTab(R);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(S);
d.moveActiveTabTo(1);
a.newTab(T);
b.moveActiveTabTo(4);
c.newTab(U);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(V);
d.newTab(W);
a.newTab(X);
b.newTab(Y);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(Z);
b.newTab(Z);
c.newTab(Z);
d.newTab(Z);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->switchToWindow(8);
brows->newWindow();
brows->switchToWindow(7);
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(4);
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->getWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->getWindow(3);
brows->closeEmptyWindows();
brows->getWindow(3);
brows->print();
brows->getWindow(0);
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->switchToWindow(4);
brows->print();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->getWindow(3);
brows->switchToWindow(6);
brows->getWindow(6);
brows->getWindow(3);
brows->switchToWindow(1);
brows->print();
brows->switchToWindow(1);
brows->getWindow(8);
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(8);
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(6);
brows->getWindow(8);
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(7);
brows->switchToWindow(3);
brows->switchToWindow(0);
brows->closeWindow();
brows->switchToWindow(4);
brows->getWindow(8);
brows->closeWindow();
brows->print();
brows->newWindow();
brows->getWindow(1);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(6);
brows->getWindow(1);
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->closeEmptyWindows();
brows->getWindow(5);
brows->getWindow(5);
brows->getWindow(5);
brows->getWindow(3);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(7);
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(1);
brows->switchToWindow(3);
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(2);
brows->closeWindow();
brows->print();
brows->switchToWindow(8);
brows->closeWindow();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(8);
delete brows;
}
	return 0;
}