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
Tab A = Tab("ddd", "yyy","yy");
Tab B = Tab("oo", "fff","yyy");
Tab C = Tab("s", "yyy","uu");
Tab D = Tab("aa", "qqq","aa");
Tab E = Tab("ss", "yyy","b");
Tab F = Tab("u", "c","yyy");
Tab G = Tab("ccc", "u","l");
Tab H = Tab("rr", "ccc","ee");
Tab I = Tab("tt", "w","rr");
Tab J = Tab("cc", "hhh","p");
Tab K = Tab("f", "m","nnn");
Tab L = Tab("ddd", "hh","h");
Tab M = Tab("eee", "z","jj");
Tab N = Tab("j", "l","x");
Tab O = Tab("ppp", "www","y");
Tab P = Tab("mm", "vvv","ggg");
Tab Q = Tab("n", "o","gg");
Tab R = Tab("c", "n","a");
Tab S = Tab("iii", "o","iii");
Tab T = Tab("fff", "d","cc");
Tab U = Tab("x", "y","ii");
Tab V = Tab("lll", "g","hhh");
Tab W = Tab("rr", "rr","ggg");
Tab X = Tab("c", "dd","ii");
Tab Y = Tab("f", "i","ooo");
Tab Z = Tab("o", "ee","qqq");
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
b.newTab(A);
c.newTab(B);
d.changeActiveTabTo(4);
a.newTab(C);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(D);
a.newTab(E);
b.newTab(F);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.newTab(G);
b.moveActiveTabTo(1);
c.newTab(H);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(I);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.newTab(J);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(1);
b.newTab(K);
c.moveActiveTabTo(1);
d.newTab(L);
a.changeActiveTabTo(3);
b.newTab(M);
c.newTab(N);
d.changeActiveTabTo(3);
a.newTab(O);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(P);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(Q);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(R);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(S);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(T);
b.newTab(U);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.newTab(V);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(W);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(X);
a.changeActiveTabTo(0);
b.newTab(Y);
c.newTab(Z);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
c.changeActiveTabTo(3);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
c.changeActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->switchToWindow(8);
brows->closeWindow();
brows->getWindow(9);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->getWindow(0);
brows->getWindow(4);
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(0);
brows->getWindow(5);
brows->closeWindow();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->mergeAllWindows();
brows->getWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(8);
brows->getWindow(4);
brows->switchToWindow(3);
brows->print();
brows->print();
brows->getWindow(3);
brows->switchToWindow(6);
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->getWindow(8);
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(7);
brows->print();
brows->newWindow();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->switchToWindow(1);
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(6);
brows->getWindow(2);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
delete brows;
}
	return 0;
}