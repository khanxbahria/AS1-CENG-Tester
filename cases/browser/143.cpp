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
Tab A = Tab("g", "uuu","y");
Tab B = Tab("t", "rr","rr");
Tab C = Tab("uuu", "vvv","rrr");
Tab D = Tab("ooo", "zzz","www");
Tab E = Tab("ff", "b","sss");
Tab F = Tab("oo", "nnn","nnn");
Tab G = Tab("m", "qq","vv");
Tab H = Tab("nnn", "hh","ggg");
Tab I = Tab("iii", "oo","bb");
Tab J = Tab("iii", "bb","bbb");
Tab K = Tab("uu", "q","ff");
Tab L = Tab("ii", "s","iii");
Tab M = Tab("rr", "w","ll");
Tab N = Tab("tt", "nnn","zzz");
Tab O = Tab("cc", "rr","v");
Tab P = Tab("ppp", "xxx","nn");
Tab Q = Tab("nn", "rrr","kkk");
Tab R = Tab("ll", "t","bb");
Tab S = Tab("p", "gg","jjj");
Tab T = Tab("ss", "z","ii");
Tab U = Tab("ss", "ccc","fff");
Tab V = Tab("ww", "ss","y");
Tab W = Tab("yyy", "b","s");
Tab X = Tab("l", "oo","yy");
Tab Y = Tab("z", "t","i");
Tab Z = Tab("qq", "tt","nn");
a.newTab(A);
b.newTab(B);
c.changeActiveTabTo(5);
d.newTab(C);
a.newTab(D);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(E);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(F);
a.newTab(G);
b.moveActiveTabTo(2);
c.newTab(H);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.newTab(I);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(J);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(K);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(L);
a.newTab(M);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(N);
d.newTab(O);
a.moveActiveTabTo(1);
b.newTab(P);
c.newTab(Q);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(R);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(S);
d.newTab(T);
a.newTab(U);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(V);
b.moveActiveTabTo(4);
c.newTab(W);
d.changeActiveTabTo(4);
a.newTab(X);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(Y);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(Z);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
d.changeActiveTabTo(1);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->newWindow();
brows->switchToWindow(6);
brows->switchToWindow(6);
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(3);
brows->getWindow(5);
brows->print();
brows->getWindow(8);
brows->newWindow();
brows->newWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(5);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(1);
brows->newWindow();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(2);
brows->print();
brows->newWindow();
brows->getWindow(1);
brows->newWindow();
brows->newWindow();
brows->getWindow(9);
brows->print();
brows->switchToWindow(9);
brows->closeWindow();
brows->switchToWindow(4);
brows->switchToWindow(6);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->getWindow(4);
brows->switchToWindow(9);
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->getWindow(0);
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->getWindow(4);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->print();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(6);
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->getWindow(1);
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->getWindow(1);
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->print();
brows->newWindow();
brows->print();
brows->getWindow(5);
brows->print();
brows->getWindow(7);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
delete brows;
}
	return 0;
}