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
Tab A = Tab("f", "dd","i");
Tab B = Tab("tt", "ss","www");
Tab C = Tab("aaa", "lll","www");
Tab D = Tab("ppp", "aa","f");
Tab E = Tab("zzz", "kkk","ddd");
Tab F = Tab("h", "rr","z");
Tab G = Tab("pp", "qq","nn");
Tab H = Tab("i", "d","aaa");
Tab I = Tab("uu", "o","p");
Tab J = Tab("v", "a","qq");
Tab K = Tab("k", "v","vv");
Tab L = Tab("tt", "mmm","eee");
Tab M = Tab("ll", "k","j");
Tab N = Tab("rrr", "j","m");
Tab O = Tab("i", "kkk","kkk");
Tab P = Tab("l", "p","p");
Tab Q = Tab("ii", "kkk","f");
Tab R = Tab("nn", "mmm","yyy");
Tab S = Tab("ww", "rr","ii");
Tab T = Tab("iii", "uuu","ccc");
Tab U = Tab("hh", "dd","j");
Tab V = Tab("rr", "ee","zzz");
Tab W = Tab("cc", "ii","ii");
Tab X = Tab("zzz", "ggg","q");
Tab Y = Tab("nn", "ss","bbb");
Tab Z = Tab("mmm", "q","b");
a.moveActiveTabTo(2);
b.newTab(A);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(B);
d.moveActiveTabTo(5);
a.newTab(C);
b.newTab(D);
c.moveActiveTabTo(0);
d.newTab(E);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(F);
b.newTab(G);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(H);
a.newTab(I);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(J);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(K);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(L);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.newTab(M);
c.changeActiveTabTo(4);
d.newTab(N);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(O);
d.changeActiveTabTo(4);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(P);
a.newTab(Q);
b.changeActiveTabTo(2);
c.newTab(R);
d.changeActiveTabTo(2);
a.newTab(S);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.newTab(T);
c.newTab(U);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(V);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(W);
d.newTab(X);
a.changeActiveTabTo(5);
b.newTab(Y);
c.newTab(Z);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
d.changeActiveTabTo(1);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
c.moveActiveTabTo(2);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
c.moveActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->getWindow(9);
brows->switchToWindow(6);
brows->getWindow(2);
brows->closeWindow();
brows->getWindow(2);
brows->newWindow();
brows->switchToWindow(5);
brows->print();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(7);
brows->switchToWindow(3);
brows->newWindow();
brows->print();
brows->switchToWindow(9);
brows->closeWindow();
brows->switchToWindow(2);
brows->switchToWindow(7);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(4);
brows->switchToWindow(6);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->getWindow(0);
brows->print();
brows->switchToWindow(9);
brows->closeWindow();
brows->getWindow(0);
brows->getWindow(0);
brows->switchToWindow(2);
brows->closeWindow();
brows->print();
brows->print();
brows->newWindow();
brows->getWindow(7);
brows->switchToWindow(3);
brows->switchToWindow(5);
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->getWindow(2);
brows->closeWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(0);
brows->closeWindow();
brows->getWindow(0);
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(3);
brows->newWindow();
brows->getWindow(4);
brows->switchToWindow(2);
brows->getWindow(4);
brows->closeWindow();
brows->getWindow(0);
brows->mergeAllWindows();
brows->getWindow(1);
brows->print();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(0);
brows->newWindow();
brows->getWindow(4);
brows->getWindow(7);
brows->closeWindow();
brows->closeWindow();
brows->getWindow(3);
brows->newWindow();
brows->print();
brows->newWindow();
brows->print();
brows->newWindow();
brows->print();
brows->getWindow(3);
brows->print();
brows->switchToWindow(5);
brows->print();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(3);
brows->switchToWindow(0);
brows->getWindow(1);
brows->switchToWindow(0);
delete brows;
}
	return 0;
}