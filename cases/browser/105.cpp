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
Tab A = Tab("gg", "cc","hh");
Tab B = Tab("kkk", "vvv","aa");
Tab C = Tab("kk", "ppp","dd");
Tab D = Tab("i", "eee","i");
Tab E = Tab("bb", "ii","gg");
Tab F = Tab("y", "v","v");
Tab G = Tab("w", "sss","i");
Tab H = Tab("n", "a","www");
Tab I = Tab("uu", "ww","yyy");
Tab J = Tab("ff", "qqq","rrr");
Tab K = Tab("xx", "kk","z");
Tab L = Tab("ii", "hh","bbb");
Tab M = Tab("lll", "aa","m");
Tab N = Tab("jjj", "rrr","ll");
Tab O = Tab("u", "ss","o");
Tab P = Tab("uuu", "bbb","ccc");
Tab Q = Tab("zz", "b","u");
Tab R = Tab("x", "aaa","www");
Tab S = Tab("dd", "oo","kkk");
Tab T = Tab("j", "oo","bbb");
Tab U = Tab("ggg", "uuu","hhh");
Tab V = Tab("bb", "fff","e");
Tab W = Tab("r", "i","g");
Tab X = Tab("j", "w","ww");
Tab Y = Tab("yy", "v","a");
Tab Z = Tab("a", "ff","f");
a.newTab(A);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.newTab(B);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(C);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(D);
b.newTab(E);
c.changeActiveTabTo(5);
d.newTab(F);
a.newTab(G);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(H);
a.newTab(I);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.newTab(J);
c.changeActiveTabTo(4);
d.newTab(K);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(L);
d.newTab(M);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(N);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(O);
d.newTab(P);
a.moveActiveTabTo(0);
b.newTab(Q);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(R);
b.newTab(S);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(T);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(U);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.newTab(V);
c.newTab(W);
d.changeActiveTabTo(1);
a.moveActiveTabTo(0);
b.newTab(X);
c.newTab(Y);
d.moveActiveTabTo(0);
a.newTab(Z);
b.changeActiveTabTo(4);
c.newTab(Z);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
b.changeActiveTabTo(1);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
d.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->switchToWindow(8);
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->getWindow(4);
brows->newWindow();
brows->print();
brows->print();
brows->getWindow(7);
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->newWindow();
brows->print();
brows->switchToWindow(9);
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(3);
brows->switchToWindow(7);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->closeWindow();
brows->closeWindow();
brows->getWindow(8);
brows->print();
brows->print();
brows->switchToWindow(1);
brows->switchToWindow(4);
brows->getWindow(2);
brows->getWindow(3);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->newWindow();
brows->getWindow(0);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(9);
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(0);
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->getWindow(0);
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->getWindow(3);
brows->switchToWindow(4);
brows->newWindow();
brows->newWindow();
brows->print();
brows->print();
brows->switchToWindow(3);
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(0);
brows->getWindow(2);
brows->closeEmptyWindows();
brows->getWindow(2);
brows->switchToWindow(2);
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(0);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->print();
brows->switchToWindow(5);
brows->newWindow();
brows->print();
brows->closeWindow();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->newWindow();
brows->print();
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(9);
delete brows;
}
	return 0;
}