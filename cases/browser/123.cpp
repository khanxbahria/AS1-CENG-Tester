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
Tab A = Tab("bb", "qq","ff");
Tab B = Tab("k", "ttt","mmm");
Tab C = Tab("eee", "p","mm");
Tab D = Tab("d", "v","mm");
Tab E = Tab("qqq", "k","v");
Tab F = Tab("uu", "xx","zz");
Tab G = Tab("yy", "hhh","e");
Tab H = Tab("i", "ddd","rrr");
Tab I = Tab("yyy", "hhh","e");
Tab J = Tab("jj", "ii","ii");
Tab K = Tab("r", "qqq","d");
Tab L = Tab("uu", "kk","bbb");
Tab M = Tab("mmm", "c","z");
Tab N = Tab("ii", "x","bb");
Tab O = Tab("t", "bbb","ii");
Tab P = Tab("zz", "jj","o");
Tab Q = Tab("jj", "mm","h");
Tab R = Tab("iii", "ppp","pp");
Tab S = Tab("ll", "ggg","a");
Tab T = Tab("hh", "dd","d");
Tab U = Tab("ooo", "o","zz");
Tab V = Tab("zz", "d","c");
Tab W = Tab("ppp", "ww","cc");
Tab X = Tab("q", "uu","d");
Tab Y = Tab("g", "k","c");
Tab Z = Tab("ppp", "z","e");
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(A);
d.moveActiveTabTo(3);
a.newTab(B);
b.changeActiveTabTo(4);
c.newTab(C);
d.newTab(D);
a.moveActiveTabTo(2);
b.newTab(E);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(F);
b.newTab(G);
c.newTab(H);
d.changeActiveTabTo(3);
a.changeActiveTabTo(3);
b.newTab(I);
c.newTab(J);
d.newTab(K);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.newTab(L);
c.newTab(M);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(N);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(O);
a.newTab(P);
b.changeActiveTabTo(0);
c.newTab(Q);
d.newTab(R);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(S);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(T);
b.newTab(U);
c.moveActiveTabTo(0);
d.newTab(V);
a.newTab(W);
b.changeActiveTabTo(0);
c.newTab(X);
d.moveActiveTabTo(0);
a.newTab(Y);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.newTab(Z);
c.newTab(Z);
d.newTab(Z);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->getWindow(9);
brows->getWindow(1);
brows->print();
brows->print();
brows->switchToWindow(9);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(3);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->print();
brows->getWindow(3);
brows->getWindow(4);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(6);
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->getWindow(6);
brows->getWindow(9);
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->newWindow();
brows->getWindow(3);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->closeWindow();
brows->getWindow(8);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->switchToWindow(0);
brows->getWindow(0);
brows->switchToWindow(3);
brows->newWindow();
brows->switchToWindow(6);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->getWindow(5);
brows->switchToWindow(9);
brows->getWindow(0);
brows->switchToWindow(6);
brows->getWindow(8);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->getWindow(7);
brows->getWindow(2);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
delete brows;
}
	return 0;
}