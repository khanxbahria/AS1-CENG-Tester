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
Tab A = Tab("cc", "n","g");
Tab B = Tab("yy", "z","kkk");
Tab C = Tab("nn", "ppp","ppp");
Tab D = Tab("www", "nnn","ff");
Tab E = Tab("l", "ddd","p");
Tab F = Tab("kkk", "ccc","i");
Tab G = Tab("dd", "qq","rrr");
Tab H = Tab("f", "zz","a");
Tab I = Tab("fff", "aa","rrr");
Tab J = Tab("uuu", "dd","uu");
Tab K = Tab("z", "w","bb");
Tab L = Tab("bbb", "n","jj");
Tab M = Tab("oo", "kkk","ee");
Tab N = Tab("s", "hhh","ff");
Tab O = Tab("sss", "m","iii");
Tab P = Tab("pp", "nnn","bb");
Tab Q = Tab("ll", "vv","e");
Tab R = Tab("ff", "zzz","vv");
Tab S = Tab("hhh", "x","dd");
Tab T = Tab("rrr", "q","mmm");
Tab U = Tab("nnn", "z","ppp");
Tab V = Tab("bb", "hh","ddd");
Tab W = Tab("n", "www","xx");
Tab X = Tab("xx", "nn","xx");
Tab Y = Tab("ww", "ww","qq");
Tab Z = Tab("hhh", "n","mm");
a.moveActiveTabTo(5);
b.newTab(A);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.newTab(B);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.newTab(C);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.newTab(D);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(E);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(F);
d.newTab(G);
a.newTab(H);
b.newTab(I);
c.moveActiveTabTo(5);
d.newTab(J);
a.newTab(K);
b.newTab(L);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(M);
b.newTab(N);
c.newTab(O);
d.newTab(P);
a.newTab(Q);
b.moveActiveTabTo(5);
c.newTab(R);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.newTab(S);
c.newTab(T);
d.newTab(U);
a.changeActiveTabTo(2);
b.newTab(V);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(W);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.newTab(X);
c.changeActiveTabTo(2);
d.newTab(Y);
a.newTab(Z);
b.newTab(Z);
c.newTab(Z);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
c.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(8);
brows->newWindow();
brows->getWindow(4);
brows->switchToWindow(5);
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(1);
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->newWindow();
brows->getWindow(8);
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(0);
brows->closeWindow();
brows->getWindow(0);
brows->newWindow();
brows->newWindow();
brows->getWindow(4);
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(6);
brows->getWindow(1);
brows->closeWindow();
brows->getWindow(9);
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->getWindow(8);
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->getWindow(5);
brows->newWindow();
brows->getWindow(7);
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(5);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->switchToWindow(9);
brows->newWindow();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->print();
brows->print();
brows->closeWindow();
brows->switchToWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(8);
brows->print();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(9);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(9);
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->print();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->print();
brows->getWindow(9);
brows->newWindow();
delete brows;
}
	return 0;
}