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
Tab A = Tab("ee", "uuu","jjj");
Tab B = Tab("ccc", "aaa","gg");
Tab C = Tab("dd", "aa","gg");
Tab D = Tab("c", "fff","ccc");
Tab E = Tab("mmm", "cc","kkk");
Tab F = Tab("yyy", "k","bb");
Tab G = Tab("ww", "o","tt");
Tab H = Tab("d", "ddd","ggg");
Tab I = Tab("nn", "zz","cc");
Tab J = Tab("jjj", "x","kk");
Tab K = Tab("y", "eee","b");
Tab L = Tab("o", "vvv","f");
Tab M = Tab("xx", "e","v");
Tab N = Tab("q", "m","r");
Tab O = Tab("ss", "mm","hhh");
Tab P = Tab("k", "cc","bb");
Tab Q = Tab("ee", "aa","o");
Tab R = Tab("z", "ccc","m");
Tab S = Tab("aaa", "www","a");
Tab T = Tab("ttt", "x","v");
Tab U = Tab("d", "ccc","b");
Tab V = Tab("i", "s","v");
Tab W = Tab("h", "x","qq");
Tab X = Tab("l", "fff","bb");
Tab Y = Tab("ttt", "ll","ll");
Tab Z = Tab("aa", "o","fff");
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(A);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.newTab(B);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(C);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(D);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(E);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(F);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(G);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(H);
b.newTab(I);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(J);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.newTab(K);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.newTab(L);
c.newTab(M);
d.moveActiveTabTo(4);
a.newTab(N);
b.changeActiveTabTo(0);
c.newTab(O);
d.moveActiveTabTo(0);
a.newTab(P);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(Q);
b.moveActiveTabTo(1);
c.newTab(R);
d.newTab(S);
a.changeActiveTabTo(5);
b.newTab(T);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.newTab(U);
c.changeActiveTabTo(1);
d.newTab(V);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(W);
b.moveActiveTabTo(0);
c.newTab(X);
d.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.newTab(Y);
c.newTab(Z);
d.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(9);
brows->print();
brows->getWindow(2);
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(5);
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->closeWindow();
brows->print();
brows->getWindow(5);
brows->print();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(8);
brows->getWindow(3);
brows->print();
brows->switchToWindow(1);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->newWindow();
brows->getWindow(9);
brows->getWindow(9);
brows->print();
brows->print();
brows->switchToWindow(4);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(8);
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->getWindow(4);
brows->getWindow(2);
brows->print();
brows->getWindow(3);
brows->closeWindow();
brows->getWindow(7);
brows->getWindow(7);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(4);
brows->print();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(3);
brows->switchToWindow(1);
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(6);
brows->closeWindow();
brows->print();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(6);
delete brows;
}
	return 0;
}