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
Tab A = Tab("qq", "oo","ooo");
Tab B = Tab("j", "w","w");
Tab C = Tab("p", "t","l");
Tab D = Tab("w", "ddd","d");
Tab E = Tab("m", "ll","j");
Tab F = Tab("s", "iii","p");
Tab G = Tab("yyy", "xx","kk");
Tab H = Tab("t", "ggg","d");
Tab I = Tab("yy", "r","g");
Tab J = Tab("bb", "k","qq");
Tab K = Tab("y", "aa","ll");
Tab L = Tab("ee", "ccc","mmm");
Tab M = Tab("oo", "rr","z");
Tab N = Tab("m", "ppp","qq");
Tab O = Tab("n", "gg","t");
Tab P = Tab("ddd", "t","p");
Tab Q = Tab("ss", "ii","nnn");
Tab R = Tab("www", "vv","u");
Tab S = Tab("k", "h","yyy");
Tab T = Tab("bbb", "ddd","j");
Tab U = Tab("lll", "ooo","xx");
Tab V = Tab("x", "ww","h");
Tab W = Tab("ttt", "www","iii");
Tab X = Tab("uu", "c","xx");
Tab Y = Tab("j", "i","d");
Tab Z = Tab("v", "l","gg");
a.changeActiveTabTo(2);
b.newTab(A);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(B);
d.newTab(C);
a.changeActiveTabTo(0);
b.newTab(D);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(E);
d.newTab(F);
a.changeActiveTabTo(5);
b.newTab(G);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(H);
b.moveActiveTabTo(2);
c.newTab(I);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(J);
b.newTab(K);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.newTab(L);
c.moveActiveTabTo(3);
d.newTab(M);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(N);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(O);
d.moveActiveTabTo(3);
a.newTab(P);
b.newTab(Q);
c.moveActiveTabTo(3);
d.newTab(R);
a.changeActiveTabTo(4);
b.newTab(S);
c.newTab(T);
d.newTab(U);
a.newTab(V);
b.changeActiveTabTo(1);
c.newTab(W);
d.newTab(X);
a.changeActiveTabTo(2);
b.newTab(Y);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(Z);
b.newTab(Z);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(2);
b.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(1);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(3);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(6);
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->getWindow(6);
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(2);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(2);
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(8);
brows->print();
brows->mergeAllWindows();
brows->getWindow(0);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(4);
brows->switchToWindow(9);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->print();
brows->switchToWindow(2);
brows->getWindow(6);
brows->newWindow();
brows->closeWindow();
brows->getWindow(6);
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->print();
brows->getWindow(6);
brows->print();
brows->getWindow(1);
brows->switchToWindow(1);
brows->print();
brows->print();
brows->switchToWindow(7);
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(4);
brows->closeWindow();
brows->getWindow(8);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->switchToWindow(8);
brows->closeWindow();
brows->newWindow();
delete brows;
}
	return 0;
}