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
Tab A = Tab("iii", "ff","pp");
Tab B = Tab("jjj", "rr","u");
Tab C = Tab("uuu", "ff","t");
Tab D = Tab("rr", "yy","qq");
Tab E = Tab("t", "bbb","a");
Tab F = Tab("jjj", "a","mm");
Tab G = Tab("k", "gg","dd");
Tab H = Tab("zz", "w","y");
Tab I = Tab("v", "aa","k");
Tab J = Tab("vv", "tt","b");
Tab K = Tab("r", "ppp","bb");
Tab L = Tab("gg", "sss","y");
Tab M = Tab("ppp", "www","ww");
Tab N = Tab("uuu", "u","ww");
Tab O = Tab("nnn", "xxx","jjj");
Tab P = Tab("q", "nnn","kk");
Tab Q = Tab("jj", "f","sss");
Tab R = Tab("h", "gg","dd");
Tab S = Tab("r", "gg","h");
Tab T = Tab("j", "n","uu");
Tab U = Tab("c", "w","kk");
Tab V = Tab("j", "o","xx");
Tab W = Tab("v", "ff","vvv");
Tab X = Tab("yy", "l","ff");
Tab Y = Tab("g", "p","rr");
Tab Z = Tab("f", "ee","f");
a.changeActiveTabTo(4);
b.newTab(A);
c.changeActiveTabTo(4);
d.newTab(B);
a.newTab(C);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(D);
d.changeActiveTabTo(0);
a.newTab(E);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(F);
d.moveActiveTabTo(2);
a.newTab(G);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.newTab(H);
c.newTab(I);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(J);
d.moveActiveTabTo(5);
a.newTab(K);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(L);
b.moveActiveTabTo(2);
c.newTab(M);
d.changeActiveTabTo(2);
a.newTab(N);
b.moveActiveTabTo(1);
c.newTab(O);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(P);
b.newTab(Q);
c.newTab(R);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.newTab(S);
c.newTab(T);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.newTab(U);
c.moveActiveTabTo(3);
d.newTab(V);
a.newTab(W);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.newTab(X);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(Y);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.newTab(Z);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
d.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
c.moveActiveTabTo(3);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
b.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(4);
brows->switchToWindow(1);
brows->closeWindow();
brows->switchToWindow(6);
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(8);
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->getWindow(6);
brows->closeWindow();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->print();
brows->closeWindow();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->newWindow();
brows->print();
brows->getWindow(6);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->getWindow(5);
brows->newWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(2);
brows->newWindow();
brows->newWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(4);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(6);
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(1);
brows->mergeAllWindows();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(6);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->switchToWindow(3);
brows->getWindow(6);
brows->print();
brows->print();
brows->switchToWindow(0);
brows->switchToWindow(3);
brows->switchToWindow(0);
brows->closeWindow();
brows->print();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->newWindow();
brows->switchToWindow(2);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(9);
brows->getWindow(0);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
delete brows;
}
	return 0;
}